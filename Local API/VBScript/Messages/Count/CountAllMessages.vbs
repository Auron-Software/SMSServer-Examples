' // ========================================================================
' // CountAllMessages.vbs
' // ------------------------------------------------------------------------
' // This VBScript sample demonstrate how to count the messages in the Message 
' // Database message using the Auron SMS Server API.
' // ========================================================================

' Create global objects
Set objDatabase = CreateObject( "AxMmServer.Database" ) 

WScript.Echo "API Module: " & objDatabase.Module
WScript.Echo "API Build: " & objDatabase.Build & vbCrLf

' Open the Database
Set objMessageDB = objDatabase.GetMessageDB()
PrintResult( "GetMessageDB" )
If( objDatabase.LastError <> 0 ) Then
   WScript.Quit
End If

'Count all messages in the database
numRecords = objMessageDB.Count( "", "" ) ' no specific message type and no filter
PrintResult( "Count" )
If( objMessageDB.LastError = 0 ) Then
   WScript.Echo "#Records in the message database: " & numRecords
End If

WScript.Echo "Ready."

' /////////////////////////////////////////////////////////////////////////////////////

Sub PrintResult( strFunction )
   WScript.Echo strFunction & ", result: " & objMessageDB.LastError & " (" & objMessageDB.GetErrorDescription( objMessageDB.LastError ) & ")"
End Sub

