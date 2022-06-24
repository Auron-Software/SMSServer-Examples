<html>
   <head>
   <META HTTP-EQUIV="CONTENT-Type" CONTENT="text/html;CHARSET=utf-8" >
   <title>Auron SMS Server PHP Sample</title>
   </head>
   <body>
   <?php
   // Create COM objects
   $objConstants = new COM ( "AxMmServer.Constants", NULL, CP_UTF8 );
   $objDatabase = new COM ( "AxMmServer.Database", NULL, CP_UTF8 );
   
   // Open message database
   $objMessageDB = $objDatabase->GetMessageDB();   
   if ( $objDatabase->LastError <> 0 )
   {
      $ErrorDes = $objDatabase->GetErrorDescription ( $objDatabase->LastError );

      die ( $ErrorDes );
   }

   // Count the ammount of messages in Auron Messaging Server database
   $nMessages = $objMessageDB->Count ("", "");

   if ( $objMessageDB->LastError <> 0 )
   {
      $ErrorDes = $objMessageDB->GetErrorDescription ( $objMessageDB->LastError );

      die ( $ErrorDes );
   }
   
   Echo "Number of messages in database: $nMessages";

   ?>
   </body>
</html>
