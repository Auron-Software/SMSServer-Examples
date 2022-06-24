' // ========================================================================
' // UpdateMessage.vbs
' // ------------------------------------------------------------------------
' // This VBScript sample demonstrate how to update an SMS message using
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

' These constants are used to update the SMS message
Const MSG_ID = "94250"      ' ID of the message to update
Const MSG_TOADDRESS = "+3161122333444"
Const MSG_BODY = "New text!"
const MSG_ATTACHMENT = "..\AuronSoftware.png"

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

' Update SMS message
' For simple SMS messages cut out the 'Attachments' part.
' For rich SMS messages or whatsapp SMS messages leave it in.
sMessage = _
"<update>                                               " & _
"  <message>                                            " & _
"    <ID>" & MSG_ID & "</ID>                            " & _
"    <LocalID>100</LocalID>                             " & _
"    <TypeID>SMS</TypeID>                               " & _
"    <StatusID>SCHEDULED</StatusID>                     " & _
"    <ToAddress>" & MSG_TOADDRESS & "</ToAddress>       " & _
"    <Body><![CDATA[" & MSG_BODY & "]]></Body>          " & _    
"    <Attachments>                                      " & _                                     
"      <Attachment>                                     " & _
"        <Name>attachment.png</Name>" & _
"        <Base64>" & Base64Encode(MSG_ATTACHMENT) & "</Base64>" & _
"      </Attachment>                                    " & _
"    </Attachments>                                     " & _
"  </message>                                           " & _
"</update>                                              " 

WScript.Echo "Updating message..."
CallHttpApi sBaseUrl & "messagedb/update.xml", sMessage
WScript.Echo "Result code: " & objXml.SelectSingleNode("//LastError[1]").text
WScript.Echo "Result text: " & objXml.SelectSingleNode("//LastErrorDescription[1]").text


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
