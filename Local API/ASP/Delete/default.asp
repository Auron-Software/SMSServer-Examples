<html>
   <head>
   <META HTTP-EQUIV="CONTENT-Type" CONTENT="text/html;CHARSET=utf-8" >
   <title>Auron SMS Server ASP Sample</title>
   </head>
   <body>
    <% 
   If Request("id") <> "" Then
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

      ' Delete the message
      Dim strid
      strid = "ID=" & Request("id")
      objMessageDB.Delete "", strid
      
      If (objMessageDB.LastError <> 0) Then
         strErrorDes = objMessageDB.GetErrorDescription(objMessageDB.LastError)
         Response.Write strErrorDes
         Response.End
      End If     

      %>
         <h3>Message successfully deleted.</h3>
         <h2>Delete another message using ASP</h2>
      <%
   Else
      %>
         <h2>Delete a message using ASP</h2>
      <% 
   End If   
   %>
    
    <p>
      Which message do you want to delete ? Type the message ID.
    </p>    
    <form action="default.asp" method="post">
      <input type="text" name="id" value="1"/>
      <input type="submit" value="Delete"/>
    </form>  
    <p>
      A list of all message in the message database can be found <a href="../list/default.asp" target="_blank">Here</a>.
    </p>    
   </body>
</html>
