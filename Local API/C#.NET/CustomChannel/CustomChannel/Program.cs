using AxMmPlugin;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/**
 * This examples shows how to implement a custom channel in the Auron WISe.
 * 
 * Please note that this example *DOES NOT WORK* with the Auron SMS Server. The Auron SMS Server has no support for custom channels.
 * Contact sales@auronsoftware.com to request an upgrade to the Auron WISe.
 */
namespace CustomChannel
{
  class Program
  {

    /**
     * Main entry point for your custom channel
     *
     * The WISe always starts a custom channel with two arguments:
     *    /ID this is the channel ID in the database
     *    /LOG this is the path to the channel activity file
     */
    static void Main(string[] args)
    {
      const string ARG_CHANNEL_ID = "/ID";
      const string ARG_LOGPATH = "/LOG";

      string sChannelId = "";
      string sLogPath = "";

      int nArgs = args.Length;
      for (int i = 0; i < nArgs; i++)
      {
        if (args[i] == ARG_CHANNEL_ID && i + 1 < nArgs)
          sChannelId = args[++i];
        else if (args[i] == ARG_LOGPATH && i + 1 < nArgs)
          sLogPath = args[++i];
      }

      /*
       * Make an instance of your custom channel; setup the acitivity log file
       * start with the channel ID
       */
      CChannelBase oCustomChannel = new CCustomChannel();
      oCustomChannel.SetActivityFile(sLogPath);
      int nResult = oCustomChannel.Start(sChannelId);
      if (nResult != 0)
        System.Console.WriteLine("Error starting channel. Please see the log file for more information.\r\n");

      Environment.ExitCode = nResult;
    }
  }
}
