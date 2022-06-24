' // ========================================================================
' // RunCampaign.vbs
' // ------------------------------------------------------------------------
' // This VBScript sample demonstrate how to run an existing campaign
' // ========================================================================

' Create the campaign manager
Set objCampaign = CreateObject("AxMmServer.CampaignManager")

' Set the logfile to a path to enable logging
objCampaign.LogFile = "CampaignManager.log"

' Run the campaign called 'CAMPAIGN1'
objCampaign.Run "CAMPAIGN1"

' Echo the result to the commandline
If objCampaign.LastError <> 0 Then
  WScript.Echo objCampaign.LastErrorDescription
Else
  WScript.Echo "Success"
End If


