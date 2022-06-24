<html>
   <head>
   <META HTTP-EQUIV="CONTENT-Type" CONTENT="text/html;CHARSET=utf-8" >
   <title>Auron SMS Server ASP Sample</title>
   <style>
   input, select{
      width:150px;
   }
   </style>
   </head>
   <body>
   <%
   ' If any type of message was posted to this page, try to send it
   If Request("Type") <> "" Then
      ' Create COM objects
      On Error Resume Next
        Set objConstants = Server.CreateObject("AxMmServer.Constants")
        Set objDatabase = Server.CreateObject("AxMmServer.Database")
        If Err.number <> 0 Then
            Response.Write("Unable initialize Auron Messaging Server components.")
            Response.End
        End If
      On Error Goto 0
        
      ' Open message database
      Set objMessageDB = objDatabase.GetMessageDB()
      If (objDatabase.LastError <> 0) Then
        strErrorDes = objDatabase.GetErrorDescription(objDatabase.LastError)
        Response.Write strErrorDes
        Response.End
      End If
    
      ' Create a new message
      Server.CreateObject("AxMmServer.Message")
    
      ' Set the message type according to the users input
      If (Request("Type") = "SMS") Then
         Set objMessage           = objMessageDB.Create("SMS")         
         objMessage.ToAddress     = Request("To")
         objMessage.Body          = Request("Body")
      Else
         Set objMessage           = objMessageDB.Create("EMAIL")
         objMessage.ToAddress     = Request("To")
         objMessage.BodyPlainText = Request("Body")
      End If
    
      Set objGeneric = objMessage.GetMessageObject()
      objGeneric.ChannelID     = Request("Channel")
     
      ' Save the message to the message database. This way the Messaging server will 
      ' pick it up and try to send it.
      objMessageDB.Save objGeneric
    
      If (objMessageDB.LastError <> 0) Then
         strErrorDes = objMessageDB.GetErrorDescription(objMessageDB.LastError)
         Response.Write strErrorDes
         Response.End
      End If
          
      objMessageDB.NotifyStatusUpdate
      
      ' Inform the user of our success and display a welcome header.
   %>
      <h3>Message succesfully added to queue !</h3>
      <h2>Send another message using ASP</h2>
   <%
   Else 
   ' If no message type was posted, display a welcome header
   %>
      <h2>Send a message using ASP</h2>
   <%
   End If
   %>

   <form action="default.asp" method="post">
      <table width="700">
        <tr><td>Type:             </td><td>
        <select type="text" name="Type">
           <option>SMS</option>
           <option>E-mail</option>
        </select></td></tr>
        <tr><td>Channel:          </td><td><input type="text" name="Channel" value="0"/>&nbsp;Use '0' to select the first available channel.</td></tr>        
        <tr><td>To:               </td><td><input type="text" name="To"/>&nbsp;E-mail adress or phone number</td></tr>
        <tr><td valign="top">Body:</td><td><textarea name="Body" rows="3" cols="50">Auron SMS Server test message</textarea></td></tr>
        <tr><td>                  </td><td><input type="submit" value="Send message"></td></tr>
      </table>      
    </form>   
   </body>
</html>
