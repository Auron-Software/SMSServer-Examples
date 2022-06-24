Module Modify

  Sub Main()
    Dim objDatabase As AXMMCFGLib.Database = New AXMMCFGLib.Database()
    Dim objConstants As AXMMCFGLib.Constants = New AXMMCFGLib.Constants()
    Dim strFilter As String

    Console.WriteLine("API Module: {0}" & vbLf & "API Build: {1}" & vbLf, objDatabase.[Module], objDatabase.Build)
    Dim objMessageDB = objDatabase.GetMessageDB()

    Console.WriteLine("Open, result: {0} ({1})", objDatabase.LastError, objDatabase.GetErrorDescription(objDatabase.LastError))
    If objMessageDB.LastError <> 0 Then Return

    strFilter = "ID>=5 And ID<=7"
    Dim objMessage As AXMMCFGLib.Message = CType(objMessageDB.FindFirstMessage("", strFilter, "", 100, objConstants.FLAG_FINDFIRST_GENERICMESSAGE), AXMMCFGLib.Message)
    Console.WriteLine("Filter: {0}", strFilter)
    Dim nCount As Integer = 0

    While objMessageDB.LastError = 0

      If objMessage.TypeID = "SMS" Then
        CType(objMessage.GetTypeObject(), AXMMCFGLib.SmsMessage).Body = "New Message Text"
      ElseIf objMessage.TypeID = "FILE" Then
        CType(objMessage.GetTypeObject(), AXMMCFGLib.FileMessage).Body = "New Message Text"
      ElseIf objMessage.TypeID = "EMAIL" Then
        CType(objMessage.GetTypeObject(), AXMMCFGLib.EmailMessage).BodyPlainText = "New Message Text"
      End If

      objMessageDB.Save((objMessage)) ' Important: Use (( and )) otherwise this statement always sets LastError
      Console.WriteLine("Save message #{0}, result: {1}", objMessage.ID, objMessageDB.LastError)
      objMessage = CType(objMessageDB.FindNextMessage(), AXMMCFGLib.Message)
      Console.WriteLine("result: {0}", objMessageDB.LastError)
      nCount += 1
    End While

    If nCount > 0 Then objMessageDB.NotifyNonStatusUpdate()
    Console.WriteLine("Ready.")
  End Sub


End Module
