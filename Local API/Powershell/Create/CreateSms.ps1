# ***************************************************************************
#
# Auron SMS Server
#
# (c) Copyright Auron Software - www.auronsoftware.com                                                      
#
# ========================================================================
# CreateSmsMessage.ps1
# ------------------------------------------------------------------------
# This PowerShell sample demonstrate how to create a new sms message using
# the Auron SMS Server API.
# ========================================================================


# ***************************************************************************
# Print Result
# ***************************************************************************
function PrintResult( $o, $strFunction )
{
  write-host $strFunction ", result: " $o.LastError " (" $o.GetErrorDescription( $o.LastError ) ")"
}  

# ***************************************************************************
# Function ReadInput
# ***************************************************************************
Function ReadInput($strPrompt, $strDefaultValue, $bAllowEmpty)
{ 
  $strReturn = ""  
  If ($strDefaultValue -ne "")
  {
     $strPrompt += " leave empty for " + $strDefaultValue
  }
  
  Do 
  {       
    write-host $strPrompt
    $strReturn = read-host
    
    If ($strReturn -eq "" -and $strDefaultValue -ne "")
    {
      $strReturn = $strDefaultValue
      write-host $strReturn
    }
    elseif ($strReturn -eq "" -and $bAllowEmpty -eq $True)
    {
      break
    }   
  } While ($strReturn -eq "") 
  
  write-host ""
  return $strReturn
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

# Create new message in the Message Database
$objMessage = $objMessageDB.Create("SMS")
PrintResult $objMessageDB "Create"
if( $objMessageDB.LastError -ne 0 )
{
  exit
}

$objMessage.DirectionID  = $objConstants.MESSAGEDIRECTION_OUT
$objMessage.ChannelID    = ""  # First available SMS channel
#$objMessage.ScheduledTime = Get-Date # To indicate immediate schedule. 
                             # To schedule 1 day and 2 hours in advance, specify ((Get-Date).AddDays(1)).AddHours(2)
                             # To schedule on specific date/time, specify "12/25/2005 07:30"

$objMessage.ToAddress    = ReadInput "Enter recipient's mobile number:" "" $False
$objMessage.Body         = "This is an Auron test message"

# Save the new values that were just assigned
$objMessageDB.Save( $objMessage )
PrintResult $objMessageDB "Save"


write-host "Ready."
