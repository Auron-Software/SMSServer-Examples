# ***************************************************************************
#
# Auron SMS Server
#
# (c) Copyright Auron Software - www.auronsoftware.com
#
# ========================================================================
# ListSpecificMessages.ps1
# ------------------------------------------------------------------------
# This PowerShell sample demonstrate how use list SMS messages that match a
# predefined pattern, by the use  the Auron SMS Server API.
# ========================================================================



# ***************************************************************************
# PrintMessage
# ***************************************************************************
function PrintMessage( $objMessage  )
{
   write-host "Messsage #" $objMessage.ID
  write-host "  DirectionID: " $objMessage.DirectionID " (" $objMessageDB.GetDirectionDescription( $objMessage.DirectionID ) ")"
  write-host "  StatusID: " $objMessage.StatusID " (" $objMessageDB.GetStatusDescription( $objMessage.StatusID ) ")"
  write-host "  ChannelID: " $objMessage.ChannelID
  write-host "  LastUpdate: " $objMessage.LastUpdate
  write-host "  FromAddress: " $objMessage.FromAddress
  write-host "  ToAddress: " $objMessage.ToAddress
  write-host "  Subject: " $objMessage.Subject
  write-host "  Body: " $objMessage.Body
  If( $objMessage.DirectionID -eq $objConstants.MESSAGEDIRECTION_OUT )
  {
    write-host "  Sent: " $objMessage.GetSentTime
  }
  Else
  {
    write-host "  Received: " $objMessage.GetReceivedTime
  }

  write-host
}

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
$objConstants = new-object -comobject AxMmServer.Constants

write-host "API Module: " $objDatabase.Module
write-host "API Module: " $objDatabase.Build

# Open the Database
$objMessageDB = $objDatabase.GetMessageDB()
PrintResult $objDatabase "Get"
If( $objDatabase.LastError -ne 0 )
{
  exit
}

$strFilter = "Body LIKE '%Auron%'"  # Filter all SMS messages that have Auron in the body of the message
write-host "Filter: " $strFilter
# Find the messages that match the above filter
$objMessage = $objMessageDB.FindFirstMessage( "SMS", $strFilter ) 
While ($objMessageDB.LastError -eq 0 )
{
  PrintMessage $objMessage
  $objMessage = $objMessageDB.FindNextMessage()
}

write-host "Ready."
