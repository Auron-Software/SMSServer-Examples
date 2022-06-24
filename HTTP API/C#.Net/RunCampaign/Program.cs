using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text;
using System.Threading.Tasks;
using System.Xml;

// ========================================================================
// RunCampaign
// ------------------------------------------------------------------------
// This C# sample demonstrate how to run an SMS or E-mail campaign using
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

namespace RunCampaign
{
  class Program
  {
    // NOTE: Please update these constants according to your HTTP API channel settings
    private const string API_PROTOCOL         = "http";
    private const string API_HOST             = "localhost";
    private const string API_PORT             = "7000";
    private const string API_CHANNELID        = "HTTP_API1";
    private const string API_AUTHORIZETOKEN   = "";

    private const string BASEURL = API_PROTOCOL + "://" + API_HOST + ":" + API_PORT + "/" + API_CHANNELID + "/";

    // These constants are used to run the campaign
    private const string CAMPAIGN_ID          = "CAMPAIGN1";

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

      // Run a campaign
      string sRequestBody = 
        "<run>                                                " +
        "  <ID>" + CAMPAIGN_ID + "</ID>                       " +
        "</run>                                               ";

      // Use these to send a customized message to the campaign recipients
      //"  <CustomSmsMessage></CustomSmsMessage>               " +
      //"  <CustomPlainTextMessage></CustomPlainTextMessage>   " +
      //"  <CustomHtmlMessage></CustomHtmlMessage>             " +
      //"  <CustomSubject></CustomSubject>                     " +

      Console.WriteLine("Running campaign...");
      var oPostContent = new StringContent(sRequestBody, Encoding.UTF8, "application/json");
      oResponse = oHttpClient.PostAsync("campaignmanager/run.xml", oPostContent).Result;
      if (!oResponse.IsSuccessStatusCode)
      {
        Console.WriteLine("Error while running campaign.");
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
