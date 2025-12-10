using AxMmPlugin;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CCustomChannelWizard
{
  static class Program
  {
    /// <summary>
    /// The main entry point for the application.
    /// 
    /// The Auron WISe starts with /ID {channel id} to edit an existing channel
    /// </summary>
    [STAThread]
    static void Main()
    {
      Application.EnableVisualStyles();
      Application.SetCompatibleTextRenderingDefault(false);

      // Start the channel wizard with the channel details
      Application.Run(new CChannelWizard(new CChnFrmCustomChannelDetail(), false));
    }
  }
}
