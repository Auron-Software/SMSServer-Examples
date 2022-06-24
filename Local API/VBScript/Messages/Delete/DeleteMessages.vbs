' // ========================================================================
' // DeleteMessages.vbs
' // ------------------------------------------------------------------------
' // This VBScript sample demonstrate how to delete messages using the
' // Auron SMS Server API.
' // To avoid deleting all messages from the database, a filter has been specified
' // ========================================================================

' Create global object(s)
Set objDatabase = CreateObject( "AxMmServer.Database" ) 

WScript.Echo "API Module: " & objDatabase.Module
WScript.Echo "API Build: " & objDatabase.Build & vbCrLf

' Open the Database
Set objMessageDB = objDatabase.GetMessageDB()
PrintResult( "GetMessageDB" )
If( objMessageDB.LastError <> 0 ) Then
   WScript.Quit
End If

' Delete the records
objMessageDB.Delete "SMS", "ID >= 1 AND ID < 2"   ' Delete Message with ID=1
PrintResult( "Delete" )

' Notify the service to send out new messages immediately
objMessageDB.NotifyStatusUpdate

WScript.Echo "Ready."

' /////////////////////////////////////////////////////////////////////////////////////

Sub PrintResult( strFunction )
   WScript.Echo strFunction & ", result: " & objMessageDB.LastError & " (" & objMessageDB.GetErrorDescription( objMessageDB.LastError ) & ")"
End Sub






