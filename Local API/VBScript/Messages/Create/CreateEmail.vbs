' // ========================================================================
' // CreateEmailMessage.vbs
' // ------------------------------------------------------------------------
' // This VBScript sample demonstrate how to create a new e-mail message using
' // the Auron SMS Server API.
' // ========================================================================


' Create global objects
Set objDatabase = CreateObject( "AxMmServer.Database" ) 
Set objConstants = CreateObject( "AxMmServer.Constants" ) 

WScript.Echo "API Module: " & objDatabase.Module
WScript.Echo "API Build: " & objDatabase.Build & vbCrLf

' Open the Database
Set objMessageDB = objDatabase.GetMessageDB
PrintResult( "Open" )
If( objDatabase.LastError <> 0 ) Then
   WScript.Quit
End If

WScript.Echo 

' Create new message in the Message Database
Set objMessage   = objMessageDB.Create("EMAIL")
objMessage.DirectionID   = objConstants.MESSAGEDIRECTION_OUT
objMessage.StatusID      = objConstants.MESSAGESTATUS_SCHEDULED
objMessage.ChannelID     = ""    ' First available SMTP channel
objMessage.ScheduledTime = Now() ' To indicate immediate schedule. 
                                 ' To schedule 1 day and 2 hours in advance, specify: DataAdd(h, 26, Now())
                                 ' To schedule on specific date/time, specify: "2019-11-11 10:00"

objMessage.ToAddress     = ReadInput( "Enter TO e-mail address:", "you@yourdomain.local", False )
objMessage.CcAddress     = ReadInput( "Enter CC e-mail address (press enter to skip CC recipients):", "", True )
objMessage.BccAddress    = ReadInput( "Enter BCC e-mail address (press enter to skip BCC recipients):", "", True )

objMessage.Subject       = ReadInput( "Enter subject:", "Hello, world!", False )
objMessage.BodyPlainText = ReadInput( "Enter subject:", "An Auron SMS Server message!", False )

' Save the new values that were just assigned
objMessageDB.Save( objMessage )
PrintResult( "Save" )

' Notify the service to send out new messages immediately
objMessageDB.NotifyStatusUpdate


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






