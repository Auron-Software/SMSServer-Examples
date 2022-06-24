<?php
  
  //  This PHP sample demonstrates how to send an SMS message using
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
  if (isset($_POST['txtToAddress']))
  {
    $toaddress = $_POST['txtToAddress'];
    $body = "";
    if (isset($_POST['txtBody'])) $body = $_POST['txtBody'];
   
    // Send the SMS by creating the message as 'SCHEDULED'.
    $objMessage = array(
      "message" => array(array(      
            "LocalID"                => 100        // Use this when sending multiple SMS at once
          , "TypeID"                 => "SMS"
          , "StatusID"               => "SCHEDULED"
          , "ToAddress"              => $toaddress
          , "Body"                   => $body
      ))
    );

    // Send the request en decode the result
    $url = $BASEURL . "/messagedb/create.json";   
    $result = http_call($url, json_encode($objMessage));
    if ($result === FALSE) 
    {
      echo("<h2 style='color: #f00;'>Error while connecting to HTTP API. Please make sure you have an HTTP API channel configured.</h2>");      
      exit;
    } else
      $json = json_decode($result);
       
    // Display result
    $lasterror = $json->result[0]->LastError;
    if ($lasterror != 0)
      echo("<h2 style='color: #f00;'>Error: [" . $json->result[0]->LastErrorDescription . "]</h2>");
    else
      echo("<h2 style='color: #090;'>" . $json->result[0]->LastErrorDescription . "; ID " . $json->result[0]->ID . "</h2>");
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
   <title>Auron SMS Server - PHP HTTP API Sample</title>
   </head>
   <body>
   
      <h1>Auron SMS Server - PHP HTTP API Sample</h1>
      <hr />
      <form method="post">
        <h3>Version [<?php echo($smsserver_version); ?>]; Build [<?php echo($smsserver_build); ?>]</h3>
        <p>
        
        <!-- ToAddress -->
        <label for="ToAddress">SMS Recipient:</label>
        <input type="text" id="ToAddress" name="txtToAddress" placeholer="+4411223344" />

        <!-- Message body -->
        </p><p>
        <label for="S">Body:</label>
        <textarea id="Body" name="txtBody" rows="4" cols="50"></textarea>
        
        </p><p>
          <input type="submit" name="btnSendMessage" value="Send Message" />
        </p>

      </form>   
   </body>
</html>
