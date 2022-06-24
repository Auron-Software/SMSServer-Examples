<html>
   <head>
   <META HTTP-EQUIV="CONTENT-Type" CONTENT="text/html;CHARSET=utf-8" >
   <title>Auron SMS Server ASP Sample</title>
   </head>
   <body>
   
   <h2>All messages:</h2>
   <table border=1>
      <tr><th>ID</th><th>Type</th><th>Status</th><th>From</th><th>To</th><th>Body</th></tr>
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
   If (objMessageDB.LastError <> 0) Then
     strErrorDes = objMessageDB.GetErrorDescription(objMessageDB.LastError)
     Response.Write strErrorDes
     Response.End
   End If
    
   'Iterate over all message in the database
   Set objMessage = objMessageDB.FindFirstMessage("", "", "", 100)
   While (objMessageDB.LastError = 0)
      ' Get the properties for a message
      msgID   = objMessage.ID
      msgType = objMessage.TypeID
      msgStat = objMessageDB.GetStatusDescription(objMessage.StatusID)
      
      If objMessage.TypeID = "SMS" Then
        msgFrom = objMessage.FromAddress
        msgTo   = objMessage.ToAddress
        msgBody = objMessage.Body 
      ElseIf objMessage.TypeID = "EMAIL" Then
        msgFrom = objMessage.FromAddress
        msgTo   = objMessage.ToAddress
        msgBody = objMessage.BodyPlainText
      Else
        msgFrom = "Unknown"
        msgTo   = "Unknown"
        msgBody = "This Message Type Not shown in this sample"
      End If
      
      ' Don't try to display empty strings
      If (msgFrom = "") Then msgFrom = "&lt;Empty&gt;"
      If (msgTo = "") Then msgTo = "&lt;Empty&gt;"
      If (msgBody = "") Then msgBody = "&lt;Empty&gt;"
      
      ' Generate HTML
      Response.Write vbLf & vbtab & "<tr>"
      Response.Write vbLf & vbtab & vbtab & "<td>" & msgID & "</td>"
      Response.Write vbLf & vbtab & vbtab & "<td>" & msgType & "</td>"
      Response.Write vbLf & vbtab & vbtab & "<td>" & msgStat & "</td>"
      Response.Write vbLf & vbtab & vbtab & "<td>" & msgFrom & "</td>"  
      Response.Write vbLf & vbtab & vbtab & "<td>" & msgTo & "</td>"   
      Response.Write vbLf & vbtab & vbtab & "<td>" & msgBody & "</td>"
      Response.Write vbLf & vbtab & "</tr>"
      
      Set objMessage = objMessageDB.FindNextMessage
   Wend
   
   %>
   </table>
  </body>
</html>
