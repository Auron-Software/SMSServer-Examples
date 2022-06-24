Module StandaloneProcessing

  Public m_objDatabase As AXMMCFGLib.Database = New AXMMCFGLib.Database()
  Public m_objConstants As AXMMCFGLib.Constants = New AXMMCFGLib.Constants()
  Public m_objOptions As AXMMCFGLib.Options = Nothing
  Public m_objMessageDB As AXMMCFGLib.MessageDB = Nothing

  Sub Main()
    Dim strFilter As String = ""
    Dim nCount As System.Int32 = 0

    Console.WriteLine("Auron SMS Server Version: {0}" & vbLf & "Auron SMS Server Build: {1}" & vbLf & "Auron SMS Server API Module: {2}" & vbLf, m_objDatabase.[Module], m_objDatabase.Build, m_objDatabase.[Module])
    m_objOptions = m_objDatabase.GetOptions()
    Console.WriteLine("Load Options, result: {0} ({1})", m_objDatabase.LastError, m_objDatabase.GetErrorDescription(m_objDatabase.LastError))
    If m_objOptions.LastError <> 0 Then Return

    If Not m_objOptions.StandaloneProcessing Then
      Console.WriteLine("Error: Standalone Processing is disabled. Enable it first in the Manager.")
      Console.WriteLine("Select 'Options' from the 'Configuration' menu and enable Standalone Processing.")
      Return
    End If

    m_objMessageDB = m_objDatabase.GetMessageDB()
    Console.WriteLine("Get, result: {0} ({1})", m_objDatabase.LastError, m_objDatabase.GetErrorDescription(m_objDatabase.LastError))
    If m_objMessageDB.LastError <> 0 Then Return

    strFilter = "DirectionID='IN' AND StatusID='RECEIVED' AND TriggerStatusID=''"
    nCount = m_objMessageDB.Count("", strFilter)
    Console.WriteLine("Count [{0}]: {1}", strFilter, nCount.ToString())
    If nCount = 0 Then Return

    Dim objMessageIn = CType(m_objMessageDB.FindFirstMessage("", strFilter, "", 100, m_objConstants.FLAG_FINDFIRST_IGNORE_ATTACHMENTS Or m_objConstants.FLAG_FINDFIRST_GENERICMESSAGE), AXMMCFGLib.Message)

    While m_objMessageDB.LastError = 0
      CreateReplyMessage(objMessageIn)
      objMessageIn.TriggerStatusID = m_objConstants.MESSAGETRGSTATUS_PROCESSED
      m_objMessageDB.Save((objMessageIn)) ' Important: Use (( and )) otherwise .Save will always set .LastError
      objMessageIn = CType(m_objMessageDB.FindNextMessage(), AXMMCFGLib.Message)
    End While

    Console.WriteLine("Ready.")
  End Sub

  Sub CreateReplyMessage(ByRef objMessageIn)
    If objMessageIn.TypeID = "SMS" Then
      Dim objMessageOut = CType(m_objMessageDB.Create("SMS"), AXMMCFGLib.SmsMessage)
      Console.WriteLine("Create, result: {0} ({1})", m_objMessageDB.LastError, m_objMessageDB.GetErrorDescription(m_objMessageDB.LastError))
      Dim objSms = CType(objMessageIn.GetTypeObject(), AXMMCFGLib.SmsMessage)
      objMessageOut.FromAddress = objSms.ToAddress
      objMessageOut.ToAddress = objSms.FromAddress
      objMessageOut.Body = "Re: " & objSms.Body
      objMessageOut.ChannelID = ""
      m_objMessageDB.Save((objMessageOut))  ' Important: Use (( and )) otherwise .Save will always set .LastError
      Console.WriteLine("Save, result: {0} ({1})", m_objMessageDB.LastError, m_objMessageDB.GetErrorDescription(m_objMessageDB.LastError))
    Else
      objMessageIn.AddTrace("No reply generated")
    End If
  End Sub

End Module
