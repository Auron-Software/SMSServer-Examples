Module CreateEmail

  Sub Main()
    Dim objDatabase As AXMMCFGLib.Database = New AXMMCFGLib.Database()
    Dim objConstants As AXMMCFGLib.Constants = New AXMMCFGLib.Constants()
    Dim strRecipient, strBody As String

    Console.WriteLine("API Module: {0}" & vbLf & "API Build: {1}" & vbLf, objDatabase.[Module], objDatabase.Build)
    Dim objMessageDB = objDatabase.GetMessageDB()

    Console.WriteLine("Open, result: {0} ({1})", objDatabase.LastError, objDatabase.GetErrorDescription(objDatabase.LastError))
    If objMessageDB.LastError <> 0 Then Return
    Console.WriteLine("Enter recipient's e-mail address: ")

    strRecipient = Console.ReadLine()
    Console.WriteLine("Enter body of the message: ")
    strBody = Console.ReadLine()

    Dim objMessage = CType(objMessageDB.Create("EMAIL"), AXMMCFGLib.EmailMessage)
    objMessage.ChannelID = ""
    objMessage.ScheduledTime = DateTime.Now
    objMessage.ToAddress = strRecipient
    objMessage.Subject = "ActiveXperts E-mail Message"
    objMessage.BodyPlainText = strBody
    objMessageDB.Save((objMessage)) ' Important: Use (( and )) otherwise this statement always sets LastError
    objMessageDB.NotifyStatusUpdate()

    Console.WriteLine("Save, result: {0} ({1})", objMessageDB.LastError, objMessageDB.GetErrorDescription(objMessageDB.LastError))
    If objMessageDB.LastError = 0 Then PrintMessage(objMessage)

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
    Console.WriteLine("  Sender           : {0}", objMessage.FromAddress)
    Console.WriteLine("  Recipient        : {0}", objMessage.ToAddress)
    Console.WriteLine("  Subject          : {0}", objMessage.Subject)
    Console.WriteLine("  Body             : {0}", objMessage.BodyPlainText)
    Console.WriteLine("  Trace            : {0}", objMessage.Trace)
  End Sub

End Module
