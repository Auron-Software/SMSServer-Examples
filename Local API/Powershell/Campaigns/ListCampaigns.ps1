# ***************************************************************************
#
# Auron SMS Server
#
# (c) Copyright Auron Software - www.auronsoftware.com                                                      
#
# ========================================================================
# CountAllMessages.ps1
# ------------------------------------------------------------------------
# This PowerShell sample demonstrate how to list the available campaigns.
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

# Create global objects
$objDatabase = new-object -comobject AxMmServer.Database

write-host "API Module: " $objDatabase.Module
write-host "API Module: " $objDatabase.Build

write-host

# Open the Database
$objCampaigns = $objDatabase.GetCampaigns()
PrintResult $objDatabase "GetCampaigns"
if( $objDatabase.LastError -ne 0 )
{
  exit
}

write-host

$objCampaign = $objCampaigns.FindFirstCampaign()
While ( $objCampaigns.LastError -eq 0 )
{
  write-host "Campaign ID: " $objCampaign.ID
  write-host "Description: " $objCampaign.Description
  write-host "Channel ID: " $objCampaign.ChannelID
  write-host "Message type ID: " $objCampaign.MessageTypeID
  write-host "---"
  
  $objCampaign = $objCampaigns.FindNextCampaign()
}

write-host "Ready."

