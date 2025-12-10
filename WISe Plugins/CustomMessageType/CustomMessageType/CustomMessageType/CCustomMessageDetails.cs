using AxMmPlugin;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CustomMessageType
{
  public partial class CCustomMessageDetails : UserControl, IMessageDetail
  {
    private IMessageForm m_oMessageForm;
    private AXMMCFGLib.Message m_oMessage;

    public CCustomMessageDetails()
    {
      InitializeComponent();
    }

    public string TypeDescription => "Custom Message Type";

    public string TypeID => "CUSTOM_MESSAGE_TYPE";

    // called once when the message opens
    public void InitControl(IMessageForm oMessageForm)
    {
      m_oMessageForm = oMessageForm;
      m_oMessage = m_oMessageForm.Message;
      
      txtTextField.Text = m_oMessage.GetAnyValueAs<string>("TestField");
    }

    // called everytime when a field or character is entered
    // use this function to update the status of user controls, e.g: disable what should be disabled, etc..
    // is called automaticaly for standard message controls; you need to call this manually for custom message controls
    public void UpdateControls()
    {
      
    }

    // called right before OK.
    // return true to store the message; return false to cancel storing en keep this form open
    public bool Validate(out string sError)
    {
      sError = "";

      m_oMessage.SetValue("TestField", txtTextField.Text);

      return true;
    }
  }
}
