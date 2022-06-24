# ***************************************************************************
#
# Auron SMS Server
#
# (c) Copyright Auron Software - www.auronsoftware.com
#
# ========================================================================
# CountAllMessages.ps1
# ------------------------------------------------------------------------
# This PowerShell sample demonstrate how to run an existing campaign
# ***************************************************************************


# ***************************************************************************
# Print Result
# ***************************************************************************
function PrintResult( $o, $strFunction )
{
  write-host $strFunction ", result: " $o.LastError " (" $o.GetErrorDescription( $o.LastError ) ")"
}  

# ***************************************************************************
# The script itself
# ***************************************************************************
cls

# Create the campaign manager
$objCampaignManager = new-object -comobject AxMmServer.CampaignManager

# Set the logfile to a path to enable logging
$objCampaignManager.LogFile = "CampaignManager.log"

# Run the campaign called 'CAMPAIGN1'
$objCampaignManager.Run("CAMPAIGN1")

# Echo the result to the commandline
if( $objCampaignManager.LastError -eq 0 )
{
  write-host "Success"    
} else
{
  write-host $objCampaignManager.LastErrorDescription
}
