' // ================================================================================
' // Standalone Processing Sample
' // ---------------------------------------------------------------------------
' // This sample shows how to make use of Standalone Processing.
' // With Standalone Processing, you do NOT make use integrated VBScript Triggers.
' // This means: all VBScript Triggers are disabled. 
' // You must enable the Standalone Proccessing feature first in the global options
' // in the manager.
' // 
' // ================================================================================

' Creation of global objects
Set objDatabase       = CreateObject( "AxMmServer.Database" )
Set objConstants      = CreateObject( "AxMmServer.Constants" )

WScript.Echo "Auron SMS Server Version: " & objDatabase.Version
WScript.Echo "Auron SMS Server Build: " & objDatabase.Build
WScript.Echo "Auron SMS Server API Module: " & objDatabase.Module & vbCrLf

' Load the Options settings from the Configuration Database
Set objOptions = objDatabase.GetOptions()
WScript.Echo "Get Options record, result: " & objDatabase.LastError & " (" & objDatabase.GetErrorDescription( objDatabase.LastError ) & ")"
If( objDatabase.LastError <> 0 ) Then
  WScript.Quit
End If 

' Check if Standalone Processing is enabled in the configuration database
If( Not objOptions.StandaloneProcessing ) Then
  WScript.Echo "Error: Standalone Processing is disabled. Enable it first in the Manager." 
  WScript.Echo "Select 'Options' from the 'Configuration' menu and enable Standalone Processing." 
  WScript.Quit
End If 

   
' Open the Message Database
Set objMessageDB = objDatabase.GetMessageDB()
WScript.Echo "Get Message Database, result: " & objMessageDB.LastError & " (" & objMessageDB.GetErrorDescription( objMessageDB.LastError ) & ")"
If( objMessageDB.LastError <> 0 ) Then
  WScript.Quit
End If

' Retrieve the message that has just been received. If it fails then exit script 
bMessagesToSend = False
Set objMessageIn = objMessageDB.FindFirstMessage("SMS", "StatusID='RECEIVED' AND TriggerStatusID=''") 
WScript.Echo objMessageDB.LastError
While( objMessageDB.LastError = 0 )
   ' Change Status to from Pending to Success. If you don't do it, the message will be processed by subsequent triggers (if defined) because message is still pending
   objMessageIn.TriggerStatusID = objConstants.MESSAGETRGSTATUS_PROCESSED
   objMessageDB.Save objMessageIn   
   WScript.Echo "Save #" & objMessageIn.ID & ", result: [" & objMessageDB.LastError & "]"

   ReplyMessage ( objMessageIn )
   bMessagesToSend = True
   
   Set objMessageIn   = objMessageDB.FindNextMessage()
WEnd
 
' This is an optional statement that will force to send any pending messages right away and update the manager screen
If bMessagesToSend Then
  objMessageDB.NotifyStatusUpdate
End If
 
WScript.Echo "Finished."

WScript.Quit


' // ========================================================================
' // ReplyMessage
' // ------------------------------------------------------------------------
' // Auto reply to every incoming SMS message
' // ========================================================================

Function ReplyMessage( objMessageIn )

   Set objMessageOut = objMessageDB.Create("SMS")
   objMessageOut.DirectionID  = objConstants.MESSAGEDIRECTION_OUT
   objMessageOut.StatusID     = objConstants.MESSAGESTATUS_SCHEDULED
   objMessageOut.ToAddress    = objMessageIn.FromAddress
   ' objMessageOut.ChannelID    = "CHANNEL_ONE" -- Enable this to send through a specific channel
   objMessageOut.Body         = "Re:" & objMessageIn.Body
   objMessageDB.Save objMessageOut
     
   WScript.Echo "  Save #" & objMessageOut.ID & ", result: [" & objMessageDB.LastError & "]"     

End Function

