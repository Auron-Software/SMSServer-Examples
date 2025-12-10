using AxMmPlugin;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CustomChannel
{
  class CCustomChannel : CChannelBase
  {
    protected const string CUSTOM_MESSAGE_TYPE = "CUSTOM_MESSAGE_TYPE";

    protected struct SCustomChannelConfig
    { 
      public int m_nMaxQueueSize;
      public string m_sTestConfigString;
    };

    private bool m_bStatusUpdatePending;

    private SCustomChannelConfig m_oConfig;

    public CCustomChannel()
    {
      m_bStatusUpdatePending = false;
    }

    /**
     * Called right after the channel is started (enabled) in the Auron WISe
     * 
     * If anything prevents the channel from starting you should return an error
     * code that is meaningful to you. Return 0 on success
     */
    protected override int OnStartup()
    {
      // log to activity log
      Log("Channel started");

      // Set the channel status to 'CONNECTED' (green)
      UpdateChannelStatus(m_oConstants.CHANNELSTATUS_CONNECTED);

      return 0;
    }

    /**
     * Called whenever the channel configuration is changed from the Auron WISe manager
     */
    protected override void OnReconfigure()
    {
      Log("Reconfigure");

      // cache the channel parameters we need often for performance
      m_oConfig.m_nMaxQueueSize = m_oChannel.MaxQueueSize;

      // get your configuration values from the channel configuration
      m_oConfig.m_sTestConfigString = m_oChannel.GetValueAs<string>("TestConfigString");
    }

    /**
     * Called when the channel is shutdown, either because the channel is 'disabled' in the WISe manager
     * or when the service shuts down
     */
    protected override void OnShutdown()
    {
      Log("Stopping channel");

      /**
       * Set the channel status to disconnected (grey) in the Auron WISe manager
       */
      UpdateChannelStatus(m_oConstants.CHANNELSTATUS_DISCONNECTED);
    }


    /**
     * Automatically called 10 times per second while the channel is enabled
     */
    protected override void Cycle()
    {

      // if there's a status update pending; call status update
      if (m_bStatusUpdatePending)
      {
        m_bStatusUpdatePending = false;
        OnStatusUpdate();
      }
    }

    /**
     * Called whenever there is a status update in one of the messages of the message type related to this channel 
     */
    protected override void OnStatusUpdate()
    {
      Log("Process status update");

      AXMMCFGLib.SmsMessage oMessage = null;
      bool bNotifyStatusUpdate = false;

      // find all outgoing messages in order of priority
      string sFilter = $"{CMmConstants.MESSAGES_FIELD_DIRECTIONID} = '{m_oConstants.MESSAGEDIRECTION_OUT}' AND " +
        $"{CMmConstants.MESSAGES_FIELD_STATUSID} = '{m_oConstants.MESSAGESTATUS_QUEUED}' AND " +
        $"{CMmConstants.MESSAGES_FIELD_CHANNELID} = '{m_sChannelID}'";

      string sOrder = $"{CMmConstants.MESSAGES_FIELD_PRIORITY} DESC, {CMmConstants.MESSAGES_FIELD_ID} ASC";

      oMessage = m_oMessageDB.FindFirstMessage(CUSTOM_MESSAGE_TYPE, sFilter, sOrder, m_oConfig.m_nMaxQueueSize, 0);
      m_bStatusUpdatePending = m_oMessageDB.LastError == 0;     // lasterror != 0 if there are no more messages pending      
      bNotifyStatusUpdate = m_bStatusUpdatePending;             // if there where any messages to process we'll have to send a notify

      // loop over all messages
      while (m_oMessageDB.LastError == 0)
      {
        // handle message and update message status
        oMessage.StatusID = "SENT";
        m_oMessageDB.Save(oMessage);

        // find the next message
        oMessage = m_oMessageDB.FindNextMessage();
      }

      // notify a status update only if we've processed any messages
      if (bNotifyStatusUpdate)
        m_oMessageDB.NotifyStatusUpdate();
    }
  }
}
