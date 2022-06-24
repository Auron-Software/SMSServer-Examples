# This Powershell sample demonstrates how to send an SMS message using
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

# Load media to create a rich text message. 
# To send an SMS with a media file attached configure an HTTP SMS channel
# to a provider that supports a richt message platforms such as Whatsapp 
# or RCS (Google Chat)
$oAttachment = [System.IO.File]::ReadAllBytes("..\AuronSoftware.png")
$sBase64 = [System.Convert]::ToBase64String($oAttachment);

# Create SMS object
$objMessage = @{
  "message" = @(
  @{  
      "LocalID"                = 100
      "TypeID"                 = "SMS"
      "StatusID"               = "SCHEDULED"
      "ToAddress"              = "+4433221100"
      "Body"                   = "Hello, World from Auron Software!"
      "Attachments"            = @(
        @{
          "Name"               = "AuronSoftware.png"
          "Base64"             = $sBase64
        }
      )
  })
}

# Send SMS by creating new SMS message
Write-Host
Write-Host "Creating new message..."
$objResponse = Invoke-RestMethod `
  -Uri "${BASEURL}/messagedb/create.json" `
  -Method POST -ContentType "application/json" `
  -Body (ConvertTo-Json -Depth 10 -InputObject $objMessage)

Write-Host "Result code:" $objResponse.result[0].LastError 
Write-Host "Result text:" $objResponse.result[0].LastErrorDescription
