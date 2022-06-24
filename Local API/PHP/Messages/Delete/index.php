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
        if ( $objDatabase->LastError <> 0 )
        {
          $ErrorDes = $objDatabase->GetErrorDescription ( $objDatabase->LastError );
          die ( $ErrorDes );
        }

        // Delete the message
        $strid = "ID=" . $_POST["id"];
        $objMessageDB->Delete ("", $strid);
        if ( $objMessageDB->LastError <> 0 )
        {
          $ErrorDes = $objMessageDB->GetErrorDescription ( $objMessageDB->LastError );
          die ( $ErrorDes );
        }

        $objMessageDB->NotifyNonStatusUpdate()
        
        ?>
          <h3>Message successfully deleted.</h3>
          <h2>Delete another message using PHP</h2>        
        <?php
      } 
      else 
      {
        ?>
          <h2>Delete a message using PHP</h2>
        <?php
      }    
    ?>       
    <p>
      Which message do you want to delete ? Type the message ID.
    </p>    
    <form action="index.php" method="post">
      <input type="text" name="id" value="1"/>
      <input type="submit" value="Delete"/>
    </form>  
    <p>
      A list of all message in the message database can be found <a href="../list/index.php" target="_blank">Here</a>.
    </p>    
   </body>
</html>
