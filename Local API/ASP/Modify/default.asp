<html>
   <head>
   <META HTTP-EQUIV="CONTENT-Type" CONTENT="text/html;CHARSET=utf-8" >
   <title>Auron SMS Server ASP Sample</title>
   </head>
   <body>
   <% 
   ' If any type of message was posted to this page, try to send it
   If Request("id") <> "" Then
      ' Create COM objects
      Dim objConstants, objMessageDB, ErrorDes
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
      If (objMessageDB.LastError <> 0) Then
         ErrorDes = objMessageDB.GetErrorDescription(objMessageDB.LastError)
         Response.Write ErrorDes
         Response.End
      End If
      
      ' Open message to change
      Set objMessage = objMessageDB.Load(Request("id"))
      
      If (objMessageDB.LastError <> 0) Then
         ErrorDes = objMessageDB.GetErrorDescription(objMessageDB.LastError)
         Response.Write ErrorDes
         Response.End
      End If
      
      If objMessage.TypeID = "SMS" Or objMessage.TypeID = "FILE" Then
        objMessage.Body = Request("Body")
      ElseIf objMessageTypeID = "EMAIL" Then
        objMessage.BodyPlainText = Request("Body")
      End If
      
      ' Save the message to the message database. This way the Messaging server will 
      ' pick it up and try to send it.
      objMessageDB.Save objMessage
      
      If (objMessageDB.LastError <> 0) Then
         ErrorDes = objMessageDB.GetErrorDescription(objMessageDB.LastError)
         Response.Write ErrorDes
         Response.End
      End If
      
      objMessageDB.NotifyNonStatusUpdate
   %>
      <h3>Message successfully modified.</h3>
      <h2>Modify another message using ASP</h2>        
   <%
   Else
   %>
      <h2>Modify a message using ASP</h2>
   <%
   End If
   %> 
    <p>
      This sample will modify the body of a given message to the specified text.
    </p><p>
      Which message do you want to modify ? Type the message ID.
    </p>    
    <form action="default.asp" method="post">
      <table width="700">
        <tr>
          <td>Message ID:</td>
          <td><input type="text" name="id" value="1"/></td>
        </tr>
        <tr>
          <td valign="top">Body</td>
          <td><textarea name="Body" rows="3" cols="50">SMS Server - ASP Test SMS - New message body</textarea></td>
        </tr>
        <tr>
          <td></td>
          <td><input type="submit" value="Modify"/></td>
        </tr>
      </table>
    </form>  
    <p>
      A list of all message in the message database can be found <a href="../list/default.asp" target="_blank">Here</a>.
    </p>    
   </body>
</html>
