# This Powershell sample demonstrates how to list SMS messages using
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

# Get SMS Server version
$objResponse = Invoke-RestMethod -Uri "${BASEURL}/messagedb/version.json"
Write-Host "Version:" $objResponse.result[0].Version 
Write-Host "Build:" $objResponse.result[0].Build

# Setup filter for listing SMS messages
$objFilter = @{
    "Filter"            = "1=1"         # message filter
    "Order"             = "ID DESC"     # order in which they are loaded. Can be empty
    "TypeID"            = "SMS"         # load only SMS messages; leave empty for all types  
    "Top"               = 100           # load at most 100 messages
    "ReadUncommitted"   = $TRUE         # will prevent locking the database when loading
    "IgnoreAttachments" = $TRUE         # will not load attachments 
    "FromArchive"       = $FALSE        # toggle loading from the message archive / active database
}

# Send SMS by creating new SMS message
Write-Host
Write-Host "Listing messages..."
$objResponse = Invoke-RestMethod `
  -Uri "${BASEURL}/messagedb/load.json" `
  -Method POST -ContentType "application/json" `
  -Body (ConvertTo-Json -Depth 10 -InputObject $objFilter)

Write-Host "Listing: [" $objResponse.message.length "] messages"
Foreach ($objMessage in $objResponse.message)
{
  Write-Host "ID          :" $objMessage.ID
  Write-Host "To Address  :" $objMessage.ToAddress
  Write-Host "From Address:" $objMessage.FromAddress
  Write-Host "Body        :" $objMessage.Body
  # NOTE: This will always be 0 if IgnoreAttachments is true
  Write-Host "Attachments :" $objMessage.Attachments.length
  Write-Host
}
