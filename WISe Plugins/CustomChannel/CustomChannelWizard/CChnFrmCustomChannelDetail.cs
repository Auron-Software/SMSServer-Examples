using AxMmPlugin;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CCustomChannelWizard
{
  /**
   * This is a description of your channel wizard
   *    
   * Configure and add your property pages here.
   */
  class CChnFrmCustomChannelDetail : IChannelWizardDetail
  {
    // The database ID of this channel
    public string ChannelType => "CUSTOM_CHANNEL_TYPE";

    // A short description / human readable name for this channel type
    public string ChannelTypeDescription => "Custom channel type";

    // (Optional) A URL where more information can be found
    public string ChannelTypeInfoUrl => "";

    // Called at the start of the channel wizard to setup the wizard pages
    // Add all wizard pages here
    public void InitControl(IChannelWizard oChannelWizard)
    {       
      oChannelWizard.AddPage(new CCustomChannelPage());
    }
  }
}
