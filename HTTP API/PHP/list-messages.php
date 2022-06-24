<?php
  
  //  This PHP sample demonstrates how to list SMS messages using
  //  the Auron SMS Server HTTP API.
  //  
  //  Before using these samples make sure that you have an HTTP API channel.
  //  
  //  If you don't have an HTTP API channel yet please create one by following
  //  these steps:
  //    * Open the SMS Server manager
  //    * Click on 'Channels' in the tree view and select 'New Channel'
  //    * Select 'HTTP REST API' and follow the wizard 
  
  $API_PROTOCOL       = "http";
  $API_HOST           = "localhost";
  $API_PORT           = "7000";
  $API_CHANNELID      = "HTTP_API1";
  $API_AUTHORIZETOKEN = "";
  
  $BASEURL = $API_PROTOCOL . "://" . $API_HOST . ":" . $API_PORT . "/" . $API_CHANNELID . "/";
  
  // Get version information
  $url = $BASEURL . "/messagedb/version.json";
  $result = http_call($url);
  if ($result === FALSE) 
  {
    echo("<h2 style='color: #f00;'>Error while connecting to HTTP API. Please make sure you have an HTTP API channel configured.</h2>");      
    exit;
  } else
    $json = json_decode($result);
  
  $smsserver_version = $json->result[0]->Version;
  $smsserver_build = $json->result[0]->Build;    
  
  // Handle form data
  if (isset($_POST['txtFilter']))
  {
    $filter = $_POST['txtFilter'];
    $type_id = "";
    $top = "";
    
    if (isset($_POST['txtTypeID']))
      $type_id = $_POST['txtTypeID'];
    if (isset($_POST['txtTop']))
      $top = $_POST['txtTop'];

    // Setup filter for listing SMS messages
    $objList = array(
        "Filter"            => $filter      // message filter
      , "Order"             => "ID DESC"    // order in which they are loaded. Can be empty
      , "TypeID"            => $type_id     // load only SMS messages; leave empty for all types  
      , "Top"               => $top         // load at most 100 messages
      , "ReadUncommitted"   => true         // will prevent locking the database when loading
      , "IgnoreAttachments" => true         // will not load attachments 
      , "FromArchive"       => false        // toggle loading from the message archive / active database
    );

    // Send the request en decode the result
    $url = $BASEURL . "/messagedb/load.json";   
    $result = http_call($url, json_encode($objList));
    if ($result === FALSE) 
    {
      echo("<h2 style='color: #f00;'>Error while connecting to HTTP API. Please make sure you have an HTTP API channel configured.</h2>");      
      exit;
    } else
      $json = json_decode($result);

    // Display result
    echo("<h2>Listing: [" . count($json->message) . "] messages</h2>");
    foreach ($json->message as $objMessage)
    {
      ?>
      <p>
      <span style="display: inline-block; width: 6em;">Message ID:</span><span 
        style="font-weight: bold;"><?php echo($objMessage->ID) ?><br/></span>
      <span style="display: inline-block; width: 6em;">To Address:</span><span 
        style="font-weight: bold;"><?php echo($objMessage->ToAddress) ?><br/></span>
      <span style="display: inline-block; width: 6em;">Body:</span><span 
        style="font-weight: bold;"><?php echo($objMessage->Body) ?><br/></span>
      
      <!-- 
        Different message types may have different properties. To view e-mail messages
        use the BodyPlainText / BodyHtml properties instead of just Body.
      -->
      <!--span style="display: inline-block; width: 6em;">Body:</span><span 
        style="font-weight: bold;"><?php //echo($objMessage->BodyPlainText) ?><br/></span-->
      </p>
      <?php
    }    
  }
  
  function http_call($url, $postbody = "")
  {
    // use key 'http' even if you send the request to https://...
    if ($postbody == "")
      $options = array(
          'http' => array(
              'method'  => 'GET'
          )
      );
    else
      $options = array(
          'http' => array(
              'method'  => 'POST'
            , 'content' => $postbody
            , 'header'  => 'Content-Type: application/json'
          )
      );
    $context  = stream_context_create($options);
    $result = file_get_contents($url, false, $context);
    return $result;
  }    

?>
<html>
   <head>
   <META HTTP-EQUIV="CONTENT-Type" CONTENT="text/html;CHARSET=utf-8" >
   <title>List Messages - PHP HTTP API Sample</title>
   </head>
   <body>
   
      <h1>List Messages - PHP HTTP API Sample</h1>
      <hr />
      <form method="post">
        <h3>Version [<?php echo($smsserver_version); ?>]; Build [<?php echo($smsserver_build); ?>]</h3>
        <p>
        
        <!-- Type ID -->
        <label style="display: inline-block; width: 6em;" for="TypeID">Type ID:</label>
        <input style="text-transform:uppercase" type="text" id="TypeID" name="txtTypeID" value="SMS" readonly/>
        </p><p>

        <!-- Filter -->
        <label style="display: inline-block; width: 6em;" for="Filter">Filter:</label>
        <input type="text" id="Filter" name="txtFilter" value="1=1" />
        </p><p>

        <!-- Top -->
        <label style="display: inline-block; width: 6em;" for="Top">Top:</label>
        <input type="text" id="Top" name="txtTop" value="100" />
        </p><p>
       
        <!-- Submit button -->
        <input type="submit" name="btnRun" value="List Messages" />
        </p>

      </form>   
   </body>
</html>
