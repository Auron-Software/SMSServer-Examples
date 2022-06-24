<html>
   <head>
   <META HTTP-EQUIV="CONTENT-Type" CONTENT="text/html;CHARSET=utf-8" >
   <title>Auron SMS Server PHP Sample</title>
   </head>
   <body>
    <?php
      if (!empty($_POST["id"]) )
      {
        // Create COM objects (with Unicode(UTF8) codepage)
        $objConstants = new COM ( "AxMmServer.Constants", NULL, CP_UTF8 );
        $objDatabase = new COM ( "AxMmServer.Database", NULL, CP_UTF8 );

        // Open message database
        $objMessageDB = $objDatabase->GetMessageDB();
        if ( $objMessageDB->LastError <> 0 )
        {
          $ErrorDes = $objMessageDB->GetErrorDescription ( $objMessageDB->LastError );
          die ( $ErrorDes );
        }

        // Load the message ID that needs a new body.
        $objMessage = $objMessageDB->Load ( $_POST["id"] );
        if ( $objMessageDB->LastError <> 0 )
        {
           $ErrorDes = $objMessageDB->GetErrorDescription ( $objMessageDB->LastError );
           die ( $ErrorDes );
        }
      
        // Set the new body value.        
        if ($objMessage->TypeID == "SMS")         
          $objMessage->Body = $_POST["Body"];
        else
          $objMessage->BodyPlainText = $_POST["Body"];

        // Save the message to the message database.
        $objMessageDB->Save ( $objMessage );
        if ( $objMessageDB->LastError <> 0 )
        {
          $ErrorDes = $objMessageDB->GetErrorDescription ( $objMessageDB->LastError );
          die ( $ErrorDes );
        }  

        $objMessageDB->NotifyNonStatusUpdate()
        
        ?>
          <h3>Message successfully modified.</h3>
          <h2>Modify another message using PHP</h2>        
        <?php
      } 
      else 
      {
        ?>
          <h2>Modify a message using PHP</h2>
        <?php
      }    
    ?> 
    <p>
      This sample will modify the body of a given message to the specified text.
    </p><p>
      Which message do you want to modify ? Type the message ID.
    </p>    
    <form action="index.php" method="post">
      <table width="700">
        <tr>
          <td>Message ID:</td>
          <td><input type="text" name="id" value="1"/></td>
        </tr>
        <tr>
          <td valign="top">Body</td>
          <td><textarea name="Body" rows="3" cols="50">SMS Server - PHP Test SMS - New message body</textarea></td>
        </tr>
        <tr>
          <td></td>
          <td><input type="submit" value="Modify"/></td>
        </tr>
      </table>
    </form>  
    <p>
      A list of all message in the message database can be found <a href="../list/index.php" target="_blank">Here</a>.
    </p>    
   </body>
</html>
