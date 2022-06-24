Module Delete

  Sub Main()
    Dim objDatabase As AXMMCFGLib.Database = New AXMMCFGLib.Database()
    Dim objConstants As AXMMCFGLib.Constants = New AXMMCFGLib.Constants()
    Dim strFilter As String = ""

    Console.WriteLine("API Module: {0}" & vbLf & "API Build: {1}" & vbLf, objDatabase.[Module], objDatabase.Build)
    Dim objMessageDB = objDatabase.GetMessageDB()

    Console.WriteLine("Open, result: {0} ({1})", objDatabase.LastError, objDatabase.GetErrorDescription(objDatabase.LastError))
    If objMessageDB.LastError <> 0 Then Return

    strFilter = "ID > 2 And ID < 4 And Direction='OUT'"
    objMessageDB.Delete("", strFilter)
    Console.WriteLine("Delete [{0}], result: {1} ({2})", strFilter, objMessageDB.LastError, objMessageDB.GetErrorDescription(objMessageDB.LastError))

    objMessageDB.NotifyNonStatusUpdate()

    Console.WriteLine("Ready.")
  End Sub

End Module
