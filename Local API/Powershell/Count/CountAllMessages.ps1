# ***************************************************************************
#
# Auron SMS Server
#
# (c) Copyright Auron Software - www.auronsoftware.com
#
# ========================================================================
# CountAllMessages.ps1
# ------------------------------------------------------------------------
# This PowerShell sample demonstrate how to count the messages in the Message 
# Database message using the Auron SMS Server API.
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
$objConstants = new-object -comobject AxMmServer.Constants

write-host "API Module: " $objDatabase.Module
write-host "API Module: " $objDatabase.Build

# Open the Database
$objMessageDB = $objDatabase.GetMessageDB()
PrintResult $objDatabase "Get"
if( $objDatabase.LastError -eq 0 )
{
  #Count all messages in the database
  $numRecords = $objMessageDB.Count("", "")
  PrintResult $objMessageDB "Count"
  if( $objMessageDB.LastError -eq 0 )
  {
     write-host "#Records in the message database: " $numRecords
  }
}

write-host "Ready."
