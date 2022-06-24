<?php
  
  //  This PHP sample demonstrates how to run an SMS or E-mail campaign using
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
  if (isset($_POST['txtCampaignID']))
  {
    $campaign_id = $_POST['txtCampaignID'];
   
    // Select the campaign ID
    $objCampaign = array(
      "ID" => $campaign_id
    );

    // Send the request en decode the result
    $url = $BASEURL . "/campaignmanager/run.json";   
    $result = http_call($url, json_encode($objCampaign));
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
      echo("<h2 style='color: #090;'>" . $json->result[0]->LastErrorDescription . "</h2>");
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
   <title>Run Campaign - PHP HTTP API Sample</title>
   </head>
   <body>
   
      <h1>Run Campaign - PHP HTTP API Sample</h1>
      <hr />
      <form method="post">
        <h3>Version [<?php echo($smsserver_version); ?>]; Build [<?php echo($smsserver_build); ?>]</h3>
        <p>
        
        <!-- Campaign ID -->
        <label for="CampaignID">Campaign ID:</label>
        <input style="text-transform:uppercase" type="text" id="CampaignID" name="txtCampaignID" placeholer="CAMPAIGN1" />
       
        <!-- Submit button -->
        </p><p>
        <input type="submit" name="btnRun" value="Run Campaign" />
        </p>

      </form>   
   </body>
</html>
