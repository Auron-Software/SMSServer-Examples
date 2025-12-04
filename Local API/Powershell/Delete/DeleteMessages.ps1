# ***************************************************************************
#
# Auron SMS Server
#
# (c) Copyright Auron Software - www.auronsoftware.com                                                      
#
# ========================================================================
# DeleteMessages.ps1
# ------------------------------------------------------------------------
# This PowerShell sample demonstrate how to delete messages using the
# Auron SMS Server API.
# To avoid deleting all messages from the database, a filter has been specified
# ========================================================================

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

if( $objDatabase.LastError -ne 0 )
{
  exit
}

# Delete the records
$objMessageDB.Delete( "", "ID = 7" )  # Delete Message with ID=7
PrintResult $objMessageDB "Get"

write-host "Ready."

