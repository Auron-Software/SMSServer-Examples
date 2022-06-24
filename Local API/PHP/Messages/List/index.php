<html>
   <head>
   <META HTTP-EQUIV="CONTENT-Type" CONTENT="text/html;CHARSET=utf-8" >
   <title>Auron SMS Server PHP Sample</title>
   </head>
   <body>
   
     <h2>All messages:</h2>
     <table border=1>
     <tr><th>ID</th><th>Type</th><th>Status</th><th>From</th><th>To</th><th>Body</th></tr>
   
   <?php

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
   
   // Iterate over all message in the database
   $objMessage = $objMessageDB->FindFirstMessage ("", "", "", 100);
   while ( $objMessageDB->LastError == 0 )
   {
      // Get the properties for a message
      $msgID   = $objMessage->ID;
      $msgType = $objMessage->TypeID;
      $msgStat = $objMessageDB->GetStatusDescription ( $objMessage->StatusID );
      if ($objMessage->TypeID == "SMS")
      {
        $msgFrom = $objMessage->FromAddress;
        $msgTo   = $objMessage->ToAddress;
        $msgBody = $objMessage->Body;
      } else if ($objMessage->TypeID == "EMAIL")
      {        
        $msgFrom  = $objMessage->FromAddress;
        $msgTo    = $objMessage->ToAddress;
        $msgBody  = $objMessage->BodyPlainText;        
      } else
      {
        $msgFrom = "";
        $msgTo   = "";
        $msgBody = "This sample does not support this message type";
      }      
      
      // Don't try to display empty strings
      if ($msgFrom == "") $msgFrom = "&lt;Empty&gt;";
      if ($msgTo == "") $msgTo = "&lt;Empty&gt;";
      if ($msgBody == "") $msgBody = "&lt;Empty&gt;";
      
      // Generate HTML
      Echo "\n\t<tr>";
      Echo "\n\t\t<td>$msgID</td>";  
      Echo "\n\t\t<td>$msgType</td>";
      Echo "\n\t\t<td>$msgStat</td>";
      Echo "\n\t\t<td>$msgFrom</td>";  
      Echo "\n\t\t<td>$msgTo</td>";    
      Echo "\n\t\t<td>$msgBody</td>";    
      Echo "\n\t</tr>";
      
      $objMessage = $objMessageDB->FindNextMessage();
   }  

   ?>
    </table>
  </body>
</html>
