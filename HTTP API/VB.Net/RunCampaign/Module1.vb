Imports System.Net.Http
Imports System.Net.Http.Headers
Imports System.Text
Imports System.Xml

Module Module1

  ' ========================================================================
  ' RunCampaign
  ' ------------------------------------------------------------------------
  ' This C# sample demonstrate how to run an SMS or E-mail campaign using
  ' the Auron SMS Server HTTP API.
  '
  ' Before using these samples make sure that you have an HTTP API channel.
  ' 
  ' If you don't have an HTTP API channel yet please create one by following
  ' these steps:
  '   * Open the SMS Server manager
  '   * Click on 'Channels' in the tree view and select 'New Channel'
  '   * Select 'HTTP REST API' and follow the wizard
  '
  ' ========================================================================

  ' NOTE: Please update these constants according to your HTTP API channel settings
  Private Const API_PROTOCOL As String = "http"
  Private Const API_HOST As String = "localhost"
  Private Const API_PORT As String = "7000"
  Private Const API_CHANNELID As String = "HTTP_API1"
  Private Const API_AUTHORIZETOKEN As String = ""
  Private Const BASEURL As String = API_PROTOCOL & "://" & API_HOST & ":" & API_PORT & "/" & API_CHANNELID & "/"

  ' These constants are used to run the campaign
  Private Const CAMPAIGN_ID As String = "CAMPAIGN1"

  Sub Main()
    Dim oHttpClient As HttpClient = New HttpClient()
    oHttpClient.BaseAddress = New Uri(BASEURL)

    If Not Equals(API_AUTHORIZETOKEN, "") Then
      oHttpClient.DefaultRequestHeaders.Authorization = New AuthenticationHeaderValue(API_AUTHORIZETOKEN)
    End If

    Dim oXml As XmlDocument = New XmlDocument()

    ' Welcome message
    Console.WriteLine("Auron SMS Server HTTP API demo")
    Console.WriteLine("Using base URL: " & BASEURL)
    Console.WriteLine("")

    ' Get SMS Server version
    Console.WriteLine("Getting version information...")
    Dim oResponse = oHttpClient.GetAsync("messagedb/version.xml").Result

    If Not oResponse.IsSuccessStatusCode Then
      Console.WriteLine("Error while getting version information.")
      Return
    End If

    ' Print version information
    Dim sVersionData As String = oResponse.Content.ReadAsStringAsync().Result
    oXml.LoadXml(sVersionData)
    Console.WriteLine("Version: " & oXml.SelectSingleNode("//Version[1]").InnerText)
    Console.WriteLine("Build: " & oXml.SelectSingleNode("//Build[1]").InnerText)
    Console.WriteLine("")

    ' Run a campaign
    Dim sRequestBody As String =
      "<run>                                                " &
      "  <ID>" & CAMPAIGN_ID & "</ID>                       " &
      "</run>                                               "

    ' Use these to send a customized message to the campaign recipients
    '"  <CustomSmsMessage></CustomSmsMessage>               " +
    '"  <CustomPlainTextMessage></CustomPlainTextMessage>   " +
    '"  <CustomHtmlMessage></CustomHtmlMessage>             " +
    '"  <CustomSubject></CustomSubject>                     " +

    Console.WriteLine("Running campaign...")
    Dim oPostContent = New StringContent(sRequestBody, Encoding.UTF8, "application/json")
    oResponse = oHttpClient.PostAsync("campaignmanager/run.xml", oPostContent).Result

    If Not oResponse.IsSuccessStatusCode Then
      Console.WriteLine("Error while running campaign.")
      Return
    End If

    Dim sData As String = oResponse.Content.ReadAsStringAsync().Result
    oXml.LoadXml(sData)
    Console.WriteLine("Result code: " & oXml.SelectSingleNode("//LastError[1]").InnerText)
    Console.WriteLine("Result text: " & oXml.SelectSingleNode("//LastErrorDescription[1]").InnerText)
    Console.WriteLine("")

    Console.WriteLine("Done!")

  End Sub

End Module
