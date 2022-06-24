# This Powershell sample demonstrates how to run a campaign using
# the Auron SMS Server HTTP API.
# 
# Before using these samples make sure that you have an HTTP API channel.
# 
# If you don't have an HTTP API channel yet please create one by following
# these steps:
#   * Open the SMS Server manager
#   * Click on 'Channels' in the tree view and select 'New Channel'
#   * Select 'HTTP REST API' and follow the wizard

$API_PROTOCOL       = "http"
$API_HOST           = "localhost"
$API_PORT           = 7000
$API_CHANNELID      = "HTTP_API1"
$API_AUTHORIZETOKEN = ""

$BASEURL = "${API_PROTOCOL}://${API_HOST}:${API_PORT}/${API_CHANNELID}/"

# Welcome message
Write-Host "Auron SMS Server HTTP API demo"
Write-Host "Use base URL:" $BASEURL
Write-Host

# Show SMS Server version
$objResponse = Invoke-RestMethod -Uri "${BASEURL}/messagedb/version.json"
Write-Host "Version:" $objResponse.result[0].Version 
Write-Host "Build:" $objResponse.result[0].Build

# Select the campaign to run
$objCampaign = @{
    "ID"                      = "CAMPAIGN1"
# use the below parameters to customize the text for the campaign
#    "CustomSmsMessage"        = "Customized SMS message"
#    "CustomPlainTextMessage"  = "Customized Plain text e-mail message"
#    "CustomHtmlMessage"       = "Customized HTML e-mail message"
}

# Send SMS by creating new SMS message
Write-Host
Write-Host "Running campaign..."
$objResponse = Invoke-RestMethod `
  -Uri "${BASEURL}/campaignmanager/run.json" `
  -Method POST -ContentType "application/json" `
  -Body (ConvertTo-Json -Depth 10 -InputObject $objCampaign)

Write-Host "Result code:" $objResponse.result[0].LastError 
Write-Host "Result text:" $objResponse.result[0].LastErrorDescription
