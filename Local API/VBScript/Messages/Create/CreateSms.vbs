' // ========================================================================
' // CreateSmsMessage.vbs
' // ------------------------------------------------------------------------
' // This VBScript sample demonstrate how to create a new SMS message using
' // the Auron SMS Server API.
' // ========================================================================

' Create global objects
Set objDatabase = CreateObject( "AxMmServer.Database" ) 
Set objConstants = CreateObject( "AxMmServer.Constants" )

WScript.Echo "API Module: " & objDatabase.Module
WScript.Echo "API Build: " & objDatabase.Build & vbCrLf 

' Open the Database
Set objMessageDB = objDatabase.GetMessageDB()
PrintResult( "GetMessageDB" )
If( objDatabase.LastError <> 0 ) Then
   WScript.Quit
End If

' Create new message in the Message Database
Set objMessage   = objMessageDB.Create("SMS")
objMessage.DirectionID  = objConstants.MESSAGEDIRECTION_OUT
objMessage.StatusID     = objConstants.MESSAGESTATUS_SCHEDULED
objMessage.ChannelID    = ""   ' First available SMS channel
objMessage.ScheduledTime = Now() ' To indicate immediate schedule. 
                                 ' To schedule 1 day and 2 hours in advance, specify: DataAdd(h, 26, Now())
                                 ' To schedule on specific date/time, specify: "2019-11-11 10:00"

objMessage.ToAddress    = ReadInput( "Enter recipient's mobile number:", "", False )
objMessage.Body         = "This is an Auron test message"

' Save the new values that were just assigned
objMessageDB.Save( objMessage )
PrintResult( "Save" )

' Notify the service to send out new messages immediately
objMessageDB.NotifyStatusUpdate

WScript.Echo "Ready."

' /////////////////////////////////////////////////////////////////////////////////////

Sub PrintResult( strFunction )
   WScript.Echo strFunction & ", result: " & objMessageDB.LastError & " (" & objMessageDB.GetErrorDescription( objMessageDB.LastError ) & ")"
End Sub

' /////////////////////////////////////////////////////////////////////////////////////

Function ReadInput( ByVal strTitle, ByVal strDefault, ByVal bAllowEmpty )

  Dim strInput, strReturn

  Do
     strInput = inputbox( strTitle, "Enter value", strDefault )
     If ( strInput <> "" ) Then
          strReturn = strInput
     End If
  Loop until strReturn <> "" Or bAllowEmpty

  ReadInput = strReturn
End Function

