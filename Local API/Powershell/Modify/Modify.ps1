# ***************************************************************************
#
# Auron SMS Server
#
# (c) Copyright Auron Software - www.auronsoftware.com
#
# ========================================================================
# Modify.ps1
# ------------------------------------------------------------------------
# This PowerShell sample demonstrate how to modify a message using
# the Auron SMS Server API.
# The samples makes use of two objects of the SMS Server API:
# ========================================================================


# Create objects
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

# Load Message with ID=10
$objMessage = $objMessageDB.Load( 10 )
write-host "Load, result: " $objMessageDB.LastError

# If Laod was successfull then change the body of the message and save
If( $objMessageDB.LastError -eq 0 )
{
  $objMessage.AddTrace("New message body")
  # Save the Message
  $objMessageDB.Save($objMessage)
  write-host "Save, result: " $objMessageDB.LastError
}

write-host "Ready."

 

