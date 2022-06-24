using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text;
using System.Threading.Tasks;
using System.Xml;

// ========================================================================
// CreateMessage
// ------------------------------------------------------------------------
// This C# sample demonstrate how to create and send a new SMS message using
// the Auron SMS Server HTTP API.
//
// Before using these samples make sure that you have an HTTP API channel.
// 
// If you don't have an HTTP API channel yet please create one by following
// these steps:
//   * Open the SMS Server manager
//   * Click on 'Channels' in the tree view and select 'New Channel'
//   * Select 'HTTP REST API' and follow the wizard
//
// ========================================================================

namespace CreateMessage
{
  class Program
  {
    // NOTE: Please update these constants according to your HTTP API channel settings
    private const string API_PROTOCOL       = "http";
    private const string API_HOST           = "localhost";
    private const string API_PORT           = "7000";
    private const string API_CHANNELID      = "HTTP_API1";
    private const string API_AUTHORIZETOKEN = "";

    private const string BASEURL            = API_PROTOCOL + "://" + API_HOST + ":" + API_PORT + "/" + API_CHANNELID + "/";

    // These constants are used to send the SMS message
    private const string MSG_TOADDRESS      = "+3161122333444";
    private const string MSG_BODY           = "Hello, World! From C#";
    private const string MSG_ATTACHMENT     = "..\\..\\..\\..\\AuronSoftware.png"; // in the root of the HTTP API samples dir

    static void Main(string[] args)
    {
      HttpClient oHttpClient = new HttpClient();
      oHttpClient.BaseAddress = new Uri(BASEURL);

#pragma warning disable 162
      if (API_AUTHORIZETOKEN != "")
        oHttpClient.DefaultRequestHeaders.Authorization = new AuthenticationHeaderValue(API_AUTHORIZETOKEN);
#pragma warning restore 162

      XmlDocument oXml = new XmlDocument();

      // Welcome message
      Console.WriteLine("Auron SMS Server HTTP API demo");
      Console.WriteLine("Using base URL: " + BASEURL);
      Console.WriteLine("");
      
      // Get SMS Server version
      Console.WriteLine("Getting version information...");
      var oResponse = oHttpClient.GetAsync("messagedb/version.xml").Result;
      if (!oResponse.IsSuccessStatusCode)
      {
        Console.WriteLine("Error while getting version information.");
        return;
      }

      // Print version information
      string sVersionData = oResponse.Content.ReadAsStringAsync().Result;
      oXml.LoadXml(sVersionData);
      Console.WriteLine("Version: " + oXml.SelectSingleNode("//Version[1]").InnerText);
      Console.WriteLine("Build: " + oXml.SelectSingleNode("//Build[1]").InnerText);
      Console.WriteLine("");

      // Define new SMS message
      // For simple SMS messages cut out the 'Attachments' part.
      // For rich SMS messages or whatsapp SMS messages leave it in.
      byte[] aBytes = File.ReadAllBytes(MSG_ATTACHMENT);
      string sAttachent = Convert.ToBase64String(aBytes);
      string sMessage = 
        "<create>                                               " +
        "  <message>                                            " +
        "    <TypeID>SMS</TypeID>                               " +
        "    <StatusID>SCHEDULED</StatusID>                     " +
        "    <ToAddress>" + MSG_TOADDRESS + "</ToAddress>       " +
        "    <Body><![CDATA[" + MSG_BODY + "]]></Body>          " +
        "    <Attachments>                                      " +
        "      <Attachment>                                     " +
        "        <Name>attachment.png</Name>                    " +
        "        <Base64>" + sAttachent + "</Base64>            " +
        "      </Attachment>                                    " +
        "    </Attachments>                                     " +
        "  </message>                                           " +
        "</create>                                              ";

      // Create and send the SMS message
      Console.WriteLine("Sending SMS message...");
      var oPostContent = new StringContent(sMessage, Encoding.UTF8, "application/json");
      oResponse = oHttpClient.PostAsync("messagedb/create.xml", oPostContent).Result;
      if (!oResponse.IsSuccessStatusCode)
      {
        Console.WriteLine("Error while creating SMS message.");
        return;
      }

      string sData = oResponse.Content.ReadAsStringAsync().Result;
      oXml.LoadXml(sData);
      Console.WriteLine("Result code: " + oXml.SelectSingleNode("//LastError[1]").InnerText);
      Console.WriteLine("Result text: " + oXml.SelectSingleNode("//LastErrorDescription[1]").InnerText);
      Console.WriteLine("");

      Console.WriteLine("Done!");
    }
  }
}
