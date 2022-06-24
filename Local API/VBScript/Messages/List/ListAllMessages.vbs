' // ========================================================================
' // ListAllMessages.vbs
' // ------------------------------------------------------------------------
' // This VBScript sample demonstrate how to retrieve messages from the 
' // Message Database using the Auron SMS Server API.
' // ========================================================================

' Create global object(s)
Set objDatabase = CreateObject( "AxMmServer.Database" ) 
Set objConstants = CreateObject( "AxMmServer.Constants" ) 

WScript.Echo "API Module: " & objDatabase.Module
WScript.Echo "API Build: " & objDatabase.Build & vbCrLf

' Open the Database
Set objMessageDB = objDatabase.GetMessageDB()
PrintResult objDatabase, "GetMessageDB" 
If( objDatabase.LastError <> 0 ) Then
   WScript.Quit
End If

' Find the messages - no message type and filter specified ("") since we want to list all messages
Set objMessage = objMessageDB.FindFirstMessage( "", "" ) 
While objMessageDB.LastError = 0
   PrintMessage( objMessage )
   Set objMessage = objMessageDB.FindNextMessage
WEnd

WScript.Echo "Ready."


' /////////////////////////////////////////////////////////////////////////////////////

Sub PrintMessage( objMessage  )
   WScript.Echo "Messsage #" & objMessage.ID
   WScript.Echo "  DirectionID: " & objMessage.DirectionID
   WScript.Echo "  StatusID: " & objMessage.StatusID
   WScript.Echo "  ChannelID: " & objMessage.ChannelID
   WScript.Echo "  LastUpdate: " & objMessage.LastUpdate
   WScript.Echo "  Type: " & objMessage.TypeID
   
   ' Depending on the message type there may be more to show
   If objMessage.TypeID = "SMS" Then
     WScript.Echo "  ToAddress: " & objMessage.ToAddress
     WScript.Echo "  FromAddress: " & objMessage.FromAddress
     WScript.Echo "  Body: " & objMessage.Body
   ElseIf objMessage.TypeID = "EMAIL" Then
     WScript.Echo "  ToAddress: " & objMessage.ToAddress
     WScript.Echo "  CcAddress: " & objMessage.CcAddress
     WScript.Echo "  BccAddress: " & objMessage.BccAddress
     WScript.Echo "  FromAddress: " & objMessage.FromAddress
     WScript.Echo "  BodyPlainText: " & objMessage.BodyPlainText
   End If
   
   If objMessage.DirectionID = objConstants.MESSAGEDIRECTION_OUT Then
      WScript.Echo "  Sent: " & objMessage.SentTime
   Else
      WScript.Echo "  Received: " & objMessage.ReceivedTime
   End If

   WScript.Echo

End Sub

' /////////////////////////////////////////////////////////////////////////////////////

Sub PrintResult(o, strFunction )
   WScript.Echo strFunction & ", result: " & o.LastError & " (" & o.GetErrorDescription( o.LastError ) & ")"
End Sub



