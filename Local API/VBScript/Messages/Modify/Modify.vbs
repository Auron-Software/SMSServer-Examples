' // ========================================================================
' // Modify.vbs
' // ------------------------------------------------------------------------
' // This VBScript sample demonstrate how to modify a message using
' // the Auron SMS Server API.
' // ========================================================================


' Create objects
Set objDatabase = CreateObject( "AxMmServer.Database" ) 

WScript.Echo "API Module: " & objDatabase.Module
WScript.Echo "API Build: " & objDatabase.Build & vbCrLf

' Open the Message Database
Set objMessageDB = objDatabase.GetMessageDB()
WScript.Echo "Open, result: " & objDatabase.LastError
If( objDatabase.LastError <> 0 ) Then
   WScript.Quit
End If

' Load Message with ID=2
Set objMessage = objMessageDB.Load( 2 )
WScript.Echo "Load, result: " & objMessageDB.LastError

' If Laod was successfull then change the body of the message and save
If( objMessageDB.LastError = 0 ) Then
   objMessage.StatusID = "FAILED"
   ' Save the Message
   objMessageDB.Save objMessage
   WScript.Echo "Save, result: " & objMessageDB.LastError
End If

WScript.Echo "Ready."

 

