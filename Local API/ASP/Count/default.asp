<html>
<head>
  <META HTTP-EQUIV="CONTENT-Type" CONTENT="text/html;CHARSET=utf-8" >
  <title>Auron SMS Server ASP Sample</title>
</head>
<body>
  <% 
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
         
    ' Count the ammount of messages in Auron Messaging Server database
    nMessages = objMessageDB.Count ("", "")
         
    If (objMessageDB.LastError <> 0) Then
      strErrorDes = objMessageDB.GetErrorDescription(objMessageDB.LastError)
      Response.Write(strErrorDes)
      Response.End
    End If
         
    Response.Write "Number of messages in database: " & nMessages   
  %>
  </body>
</html>
