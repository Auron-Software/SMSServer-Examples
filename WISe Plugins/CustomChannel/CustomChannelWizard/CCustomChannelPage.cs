using AXMMCFGLib;
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

namespace CCustomChannelWizard
{
  /**
   * This implements a channel properties page. 
   * You can have as many property pages as you need to configure and edit your channel
   * 
   * This must be a user control that implements IChannelWizardPage
   * 
   * For a consistent UI you may use these values:
   *  - User control size: 490 x 360
   *  - First label at position: 15, 24
   *  - First text box at position: 112, 20
   */
  public partial class CCustomChannelPage : UserControl, IChannelWizardPage
  {
    private IChannelWizard m_oChannelWizard;
    private Channel m_oChannel;

    private const string PROP_TESTCONFIGSTRING = "TestConfigString";

    public CCustomChannelPage()
    {
      InitializeComponent();
    }

    public string ShortName => "Properties";

    public string Description => "Some properties concerting custom channel";

    public string Title => "Custom channel properties";

    public UserControl Page => this;

    // Called whenever this page becomes visible in the wizard
    public void ActivatePage()
    {
      
    }

    // Called when we're leaving this page for the next page
    // Commonly this is where we'll validate and test the page settings
    // return true on success; false to cancel and stay on this page
    public bool BeforeNextPage()
    {
      m_oChannel.SetValue(PROP_TESTCONFIGSTRING, txtConfigString.Text);

      return true;
    }

    // Called when we're leaving this page for the pervious page.    
    // return true on success; false to cancel and stay on this page
    public bool BeforePrevPage()
    {
      return true;
    }

    // Called when the wizard closed; dispose any native reference you may have
    public void DisposePage()
    {
      
    }

    // First initialization. Called only once when the wizard starts; before this page is visible.
    // This is where we can load the initial settings from the channel object
    // return true on success; false to prevent the wizard from starting.
    public bool InitPage(IChannelWizard oWizard)
    {
      m_oChannelWizard = oWizard;
      m_oChannel = oWizard.Channel;

      txtConfigString.Text = m_oChannel.GetValueAs<string>(PROP_TESTCONFIGSTRING);

      return true;
    }
  }
}
