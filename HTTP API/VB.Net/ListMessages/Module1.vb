Imports System.Net.Http
Imports System.Net.Http.Headers
Imports System.Text
Imports System.Xml

Module Module1

  ' ========================================================================
  ' ListMessages
  ' ------------------------------------------------------------------------
  ' This C# sample demonstrate how to list and filter messages using
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

  ' These constants are used to list the messages
  Private Const MSG_TYPEID As String = "SMS"
  Private Const MSG_FILTER As String = "1=1"
  Private Const MSG_ORDER As String = "ID DESC"
  Private Const MSG_TOP As String = "100"

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

    ' List all SMS messages
    Dim sRequestBody As String =
      "<load>                                           " &
      "  <TypeID>" & MSG_TYPEID & "</TypeID>            " &
      "  <Filter>" & MSG_FILTER & "</Filter>            " &
      "  <Order>" & MSG_ORDER & "</Order>               " &
      "  <Top>" & MSG_TOP & "</Top>                     " &
      "  <ReadUncommitted>true</ReadUncommitted>        " &
      "  <IgnoreAttachments>true</IgnoreAttachments>    " &
      "  <FromArchive>false</FromArchive>               " &
      "</load>                                          "

    Console.WriteLine("Loading messages...")
    Dim oPostContent = New StringContent(sRequestBody, Encoding.UTF8, "application/json")
    oResponse = oHttpClient.PostAsync("messagedb/load.xml", oPostContent).Result

    If Not oResponse.IsSuccessStatusCode Then
      Console.WriteLine("Error while running campaign.")
      Return
    End If

    Dim sData As String = oResponse.Content.ReadAsStringAsync().Result
    oXml.LoadXml(sData)
    Dim colMessages = oXml.SelectNodes("//message")
    Console.WriteLine("Listing: [" & colMessages.Count & "] messages")

    For Each oMessage As XmlNode In colMessages
      Console.WriteLine("ID           :" & oMessage.SelectSingleNode("ID[1]").InnerText)
      Console.WriteLine("To Address   :" & oMessage.SelectSingleNode("ToAddress[1]").InnerText)
      Console.WriteLine("From Address :" & oMessage.SelectSingleNode("FromAddress[1]").InnerText)
      Console.WriteLine("Body         :" & oMessage.SelectSingleNode("Body[1]").InnerText)
      Console.WriteLine("")
    Next

    Console.WriteLine("Done!")
  End Sub

End Module
