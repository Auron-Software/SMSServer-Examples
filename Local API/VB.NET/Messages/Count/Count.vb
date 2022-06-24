Module Count

  Sub Main()
    Dim objDatabase As AXMMCFGLib.Database = New AXMMCFGLib.Database()
    Dim objConstants As AXMMCFGLib.Constants = New AXMMCFGLib.Constants()

    Dim strFilter As String = ""
    Console.WriteLine("API Module: {0}" & vbLf & "API Build: {1}" & vbLf, objDatabase.[Module], objDatabase.Build)

    Dim objMessageDB = objDatabase.GetMessageDB()
    Console.WriteLine("Open, result: {0} ({1})", objDatabase.LastError, objDatabase.GetErrorDescription(objDatabase.LastError))
    If objMessageDB.LastError <> 0 Then Return

    Console.WriteLine("Counting messages with filter: [" & strFilter & "]")
    Console.WriteLine("#Records : {0}", objMessageDB.Count("", strFilter))

    strFilter = "ID > 2 And DirectionID='OUT'"
    Console.WriteLine("Counting messages with filter: [" & strFilter & "]")
    Console.WriteLine("#Records : {0}", objMessageDB.Count("", strFilter))

    Console.WriteLine("Ready.")
  End Sub

End Module
