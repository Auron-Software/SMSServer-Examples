@REM This curl sample demonstrates how to update an existing SMS message using
@REM the Auron SMS Server HTTP API.
@REM 
@REM Before using these samples make sure that you have an HTTP API channel.
@REM 
@REM If you don't have an HTTP API channel yet please create one by following
@REM these steps:
@REM   * Open the SMS Server manager
@REM   * Click on 'Channels' in the tree view and select 'New Channel'
@REM   * Select 'HTTP REST API' and follow the wizard

SET API_PROTOCOL=http
SET API_HOST=localhost
SET API_PORT=7000
SET API_CHANNELID=HTTP_API1
SET API_AUTHORIZETOKEN=

SET BASEURL=%API_PROTOCOL%://%API_HOST%:%API_PORT%/%API_CHANNELID%/

curl --data-binary @UpdateSms.json -H "Content-Type: text/json" -H "Authorization: %API_AUTHORIZETOKEN%" %BASEURL%/messagedb/update.json