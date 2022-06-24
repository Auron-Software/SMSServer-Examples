<html>
  <head>
  <META HTTP-EQUIV="CONTENT-Type" CONTENT="text/html; charset="UTF-8"; >
  <title>Auron SMS Server PHP Sample</title>
  <style>
  input, select
  {
     width:150px;
  }
  </style>
  </head>
  <body>

<?php
     
  // If any type of message was posted to this page, try to send it
  if (!empty($_POST["Type"])) 
  {
    // Create COM objects (with Unicode(UTF8) codepage)
    $objConstants = new COM ( "AxMmServer.Constants", NULL, CP_UTF8 );
    $objDatabase = new COM ( "AxMmServer.Database", NULL, CP_UTF8 );
      
    // Open message database
    $objMessageDB = $objDatabase->GetMessageDB();   
    if ( $objDatabase->LastError <> 0 )
    {
       $ErrorDes = $objDatabase->GetErrorDescription ( $objDatabase->LastError );
       die ( $ErrorDes );
    }
    
    // Create a new message
    $objMessage = null;
    
    // Set the message type according to the users input
    if (strstr($_POST["Type"], "SMS"))
    {      
      $objMessage = $objMessageDB->Create("SMS");
      $objMessage->ToAddress      = $_POST["To"];     
      $objMessage->Body           = $_POST["Body"];
    }
    else
    {
      $objMessage = $objMessageDB->Create("EMAIL");
      $objMessage->ToAddress      = $_POST["To"];     
      $objMessage->BodyPlainText  = $_POST["Body"];
    }

    $objGeneric = $objMessage->GetMessageObject();
    $objGeneric->StatusID       = "SCHEDULED";
    $objGeneric->ChannelID      = $_POST["Channel"];
    
    // Save the message to the message database. This way the Messaging server will 
    // pick it up and try to send it.
    $objMessageDB->Save ( $objGeneric );
    
    if ( $objMessageDB->LastError <> 0 )
    {
      $ErrorDes = $objMessageDB->GetErrorDescription ( $objMessageDB->LastError );
      die ( $ErrorDes );
    }
   
    $objMessageDB->NotifyStatusUpdate();
   
    // Inform the user of our success and display a welcome header.
    ?>
    <h3>Message succesfully added to queue !</h3>
    <h2>Send another message using PHP</h2>
    <?php
  } 
  else 
  {
    // If no message type was posted, display a welcome header
    ?>
      <h2>Send a message using PHP</h2>
    <?php
  }  
?>      
    <form action="index.php" method="post">
      <table width="700">
        <tr>
         <td>Type:</td><td>
          <select type="text" name="Type" >
           <option <?php if ( !empty($_POST["Type"]) && $_POST["Type"] == "SMS"    ) { echo "selected"; } ?> >SMS</option>
           <option <?php if ( !empty($_POST["Type"]) && $_POST["Type"] == "E-mail" ) { echo "selected"; } ?> >E-mail</option>
          </select>
         </td>
        </tr>
        <tr>
         <td>Channel:</td>
         <td><input type="text" name="Channel" value="<?php if (!empty($_POST["Channel"])) { echo ($_POST["Channel"]); } ?>" />&nbsp;Use '' to select the first available channel.</td>
        </tr>        
        <tr>
         <td>To:</td>
         <td><input type="text" name="To" value="<?php if (!empty($_POST["To"])) { echo ($_POST["To"]); } ?>" />&nbsp;E-mail address or phone number</td>
        </tr>
        <tr>
         <td valign="top">Body:</td><td><textarea name="Body" rows="3" cols="50" ><?php if (!empty($_POST["Body"])) { echo ($_POST["Body"]); } else { echo "Auron SMS Server test message"; } ?></textarea></td>
        </tr>
        <tr>
         <td></td>
         <td><input type="submit" value="Send message"></td>
        </tr>
      </table>      
    </form>   
   </body>
</html>
