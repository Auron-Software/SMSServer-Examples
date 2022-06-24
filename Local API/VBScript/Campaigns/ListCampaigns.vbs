' // ========================================================================
' // ListCampaigns.vbs
' // ------------------------------------------------------------------------
' // This VBScript sample demonstrate how to list the available campaigns.
' // ========================================================================

' Create global objects
Set objDatabase = CreateObject( "AxMmServer.Database" ) 
Set objConstants = CreateObject( "AxMmServer.Constants" )

WScript.Echo "API Module: " & objDatabase.Module
WScript.Echo "API Build: " & objDatabase.Build & vbCrLf 

' Open the Database
Set objCampaigns = objDatabase.GetCampaigns()
PrintResult( "GetCampaigns" )
If( objDatabase.LastError <> 0 ) Then
   WScript.Quit
End If

Set objCampaign = objCampaigns.FindFirstCampaign()
While objCampaigns.LastError = 0
  
  WScript.Echo "Campaign ID: " & objCampaign.ID
  WScript.Echo "Description: " & objCampaign.Description
  WScript.Echo "Channel ID: " & objCampaign.ChannelID
  WScript.Echo "Message type ID: " & objCampaign.MessageTypeID
  WScript.Echo "---"
  
  Set objCampaign = objCampaigns.FindNextCampaign()
WEnd

WScript.Echo "Ready."

' /////////////////////////////////////////////////////////////////////////////////////

Sub PrintResult( strFunction )
   WScript.Echo strFunction & ", result: " & objDatabase.LastError & " (" & objDatabase.GetErrorDescription( objDatabase.LastError ) & ")"
End Sub

