' // ========================================================================
' // ListMessage.vbs
' // ------------------------------------------------------------------------
' // This VBScript sample demonstrate how to list SMS messages using
' // the Auron SMS Server HTTP API.
' //
' // Before using these samples make sure that you have an HTTP API channel.
' // 
' // If you don't have an HTTP API channel yet please create one by following
' // these steps:
' //   * Open the SMS Server manager
' //   * Click on 'Channels' in the tree view and select 'New Channel'
' //   * Select 'HTTP REST API' and follow the wizard
' //
' // ========================================================================

' NOTE: Please update these constants according to your HTTP API channel settings
Const API_PROTOCOL = "http"
Const API_HOST = "localhost"
Const API_PORT = "7000"
Const API_CHANNELID = "HTTP_API1"
Const API_AUTHORIZETOKEN = ""

' These constants are used to list the SMS message
Const MSG_TYPEID = "SMS"
Const MSG_FILTER = "1=1"
Const MSG_ORDER = "ID DESC"
Const MSG_TOP = "100"

' Please run this script from the commandline
If InStr(WScript.FullName, "WScript") <> 0 Then
  WScript.Echo "Please run this sample from the commandline using the cscript command." & VbCrLf & VbCrLf & "This script will now exit."
  WScript.Quit
End If

Set objHttp = CreateObject("Microsoft.XmlHttp")
Set objXml = CreateObject("MSXML2.DOMDocument.6.0")

' Prepare base url used for all request
sBaseUrl = API_PROTOCOL & "://" & API_HOST & ":" & API_PORT & "/" & API_CHANNELID & "/"

' Print remote API version information
CallHttpApi sBaseUrl & "messagedb/version.xml", ""
WScript.Echo "Auron SMS Server HTTP API demo"
WScript.Echo "Version: " & objXml.SelectSingleNode("//Version[1]").text
WScript.Echo "Build: " & objXml.SelectSingleNode("//Build[1]").text & vbCrLf 

' List all SMS messages
sMessage = _
"<load>                                           " & _
"  <TypeID>" & MSG_TYPEID & "</TypeID>            " & _
"  <Filter>" & MSG_FILTER & "</Filter>            " & _
"  <Order>" & MSG_ORDER & "</Order>               " & _
"  <Top>" & MSG_TOP & "</Top>                     " & _
"  <ReadUncommitted>true</ReadUncommitted>        " & _
"  <IgnoreAttachments>true</IgnoreAttachments>    " & _
"  <FromArchive>false</FromArchive>               " & _
"</load>                                          "

WScript.Echo "Listing messages..."
CallHttpApi sBaseUrl & "messagedb/load.xml", sMessage
Set colMessages = objXml.SelectNodes("//message")

WScript.Echo "Listing: [" & colMessages.Length & "] messages"
For i = 1 to colMessages.Length
  WScript.Echo "ID           :" & objXml.SelectSingleNode("//message[" & i & "]/ID[1]").text
  WScript.Echo "To Address   :" & objXml.SelectSingleNode("//message[" & i & "]/ToAddress[1]").text
  WScript.Echo "From Address :" & objXml.SelectSingleNode("//message[" & i & "]/FromAddress[1]").text
  WScript.Echo "Body         :" & objXml.SelectSingleNode("//message[" & i & "]/Body[1]").text
  ' NOTE: This will always be 0 if IgnoreAttachments is true
  WScript.Echo "Attachments  :" & objXml.SelectNodes("//message[" & i & "]/Attachments/Attachment").Length
  WScript.Echo
Next

' // ========================================================================
' // Functions
' // ========================================================================

Function CallHttpApi(sUrl, sRequest)    
  If sRequest <> "" Then
    sXml = HttpPost(sUrl, sRequest)
  Else
    sXml = HttpGet(sUrl)
  End If
  
  objXml.LoadXML sXml
    
  Set CallHttpApi = objXml
End Function

Function HttpGet(sUrl) 
  objHttp.open "GET", sUrl, false
  
  objHTTP.SetRequestHeader "Content-Type", "text/xml"
  If API_AUTHORIZETOKEN <> "" Then
    objHTTP.SetRequestHeader "Authorization", API_AUTHORIZETOKEN
  End If  
  
  objHttp.send
  
  HttpGet = objHttp.responseText
End Function

Function HttpPost(sUrl, sRequest)
  objHttp.open "POST", sUrl, false
  
  objHTTP.SetRequestHeader "Content-Type", "text/xml"
  If API_AUTHORIZETOKEN <> "" Then
    objHTTP.SetRequestHeader "Authorization", API_AUTHORIZETOKEN
  End If  
  
  objHttp.send sRequest
  
  HttpPost = objHttp.responseText
End Function

Function Base64Encode(sFilename)
  ' This function relies on the SMS Server being installed locally
  Set objMessage = CreateObject("AxMmServer.MessageDB").Create("SMS")
  objMessage.AddAttachment sFilename
  Base64Encode = objMessage.GetAttachmentBase64(0)
End Function
