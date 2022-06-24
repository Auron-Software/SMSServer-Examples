Module List

  Sub Main()
    Dim objDatabase As AXMMCFGLib.Database = New AXMMCFGLib.Database()
    Dim objConstants As AXMMCFGLib.Constants = New AXMMCFGLib.Constants()
    Dim strFilter As String = ""

    Console.WriteLine("API Module: {0}" & vbLf & "API Build: {1}" & vbLf, objDatabase.[Module], objDatabase.Build)
    Dim objMessageDB = objDatabase.GetMessageDB()

    Console.WriteLine("Open, result: {0} ({1})", objDatabase.LastError, objDatabase.GetErrorDescription(objDatabase.LastError))
    If objMessageDB.LastError <> 0 Then Return

    strFilter = "StatusID='SENT' OR StatusID='RECEIVED'"
    Dim objMessage = CType(objMessageDB.FindFirstMessage("", strFilter, "", 100, objConstants.FLAG_FINDFIRST_GENERICMESSAGE), AXMMCFGLib.Message)
    Console.WriteLine("Filter: {0}", strFilter)

    While objMessageDB.LastError = 0
      PrintMessage(objMessage)
      objMessage = CType(objMessageDB.FindNextMessage(), AXMMCFGLib.Message)
    End While

    Console.WriteLine("Ready.")
  End Sub

  Sub PrintMessage(ByRef objMessage)
    Console.WriteLine("  ID               : {0}", objMessage.ID)
    Console.WriteLine("  Direction        : {0}", objMessage.DirectionID)
    Console.WriteLine("  Type             : {0}", objMessage.TypeID)
    Console.WriteLine("  Status           : {0}", objMessage.StatusID)
    Console.WriteLine("  StatusDetails    : {0}", objMessage.StatusDetailsID)
    Console.WriteLine("  ChannelID        : {0}", objMessage.ChannelID)
    Console.WriteLine("  ScheduledTime    : {0}", objMessage.ScheduledTime)
    Console.WriteLine("  LastUpdate       : {0}", objMessage.LastUpdate)

    If objMessage.TypeID = "SMS" Then
      Dim objSMS = CType(objMessage.GetTypeObject(), AXMMCFGLib.SmsMessage)
      Console.WriteLine("  MessageReference : {0}", objSMS.Reference)
      Console.WriteLine("  Sender           : {0}", objSMS.FromAddress)
      Console.WriteLine("  Recipient        : {0}", objSMS.ToAddress)
      Console.WriteLine("  Body             : {0}", objSMS.Body)
    ElseIf objMessage.TypeID = "EMAIL" Then
      Dim objEmail = CType(objMessage.GetTypeObject(), AXMMCFGLib.EmailMessage)
      Console.WriteLine("  Subject          : {0}", objEmail.Subject)
      Console.WriteLine("  Sender           : {0}", objEmail.FromAddress)
      Console.WriteLine("  Recipient        : {0}", objEmail.ToAddress)
      Console.WriteLine("  BodyPlainText    : {0}", objEmail.BodyPlainText)
    End If

    Console.WriteLine("  Trace            : {0}", objMessage.Trace)
  End Sub

End Module
