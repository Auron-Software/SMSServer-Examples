using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CustomNotify
{
  public partial class FrmNotify : Form
  {
    private static string EVENT_RED = "EVENT_RED";
    private static string EVENT_GREEN = "EVENT_GREEN";
    private static string EVENT_BLUE = "EVENT_BLUE";

    AXMMCFGLib.Database m_oDatabase = new AXMMCFGLib.Database();

    public bool SubscribeEvent(string sEvent)
    {
      m_oDatabase.SubscribeCustomEvent(sEvent);
      return m_oDatabase.LastError == 0;
    }
    
    public FrmNotify()
    {      
      if (!SubscribeEvent(EVENT_RED) ||
        !SubscribeEvent(EVENT_GREEN) ||
        !SubscribeEvent(EVENT_BLUE))
      {
        MessageBox.Show("Please make sure that the Auron SMS Server service is started.");
        Load += (s, e) => Close();
        return;
      }

      InitializeComponent();

      txtBuild.Text = m_oDatabase.Build;
      txtModule.Text = m_oDatabase.Module;
    }

    private void btnRed_Click(object sender, EventArgs e)
    {
      m_oDatabase.NotifyCustomEvent(EVENT_RED);
    }

    private void btnGreen_Click(object sender, EventArgs e)
    {
      m_oDatabase.NotifyCustomEvent(EVENT_GREEN);
    }

    private void btnBlue_Click(object sender, EventArgs e)
    {
      m_oDatabase.NotifyCustomEvent(EVENT_BLUE);
    }

    private void tmrTestNotify_Tick(object sender, EventArgs e)
    {
      if (m_oDatabase.HasCustomEvent(EVENT_RED))
        panelColor.BackColor = Color.Red;
      if (m_oDatabase.HasCustomEvent(EVENT_GREEN))
        panelColor.BackColor = Color.Green;
      if (m_oDatabase.HasCustomEvent(EVENT_BLUE))
        panelColor.BackColor = Color.Blue;
    }

    private void btnClose_Click(object sender, EventArgs e)
    {
      Close();
    }

    private void btnClone_Click(object sender, EventArgs e)
    {
      Process.Start(Process.GetCurrentProcess().MainModule.FileName);      
    }
  }
}
