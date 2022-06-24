using System;
using System.Collections.Generic;
using System.Text;

namespace Delete
{
  class Delete
  {
    static void Main(string[] args)
    {
      AXMMCFGLib.Database objDatabase = new AXMMCFGLib.Database();
      AXMMCFGLib.Constants objConstants = new AXMMCFGLib.Constants();
      string strFilter = "";

      Console.WriteLine("API Module: {0}\nAPI Build: {1}\n", objDatabase.Module, objDatabase.Build);

      var objMessageDB = objDatabase.GetMessageDB();
      Console.WriteLine("Open, result: {0} ({1})", objDatabase.LastError, objDatabase.GetErrorDescription(objDatabase.LastError));
      if (objMessageDB.LastError != 0)
        return;

      strFilter = "ID > 2 And ID < 4 And Direction='OUT'";
      objMessageDB.Delete("", strFilter);
      Console.WriteLine("Delete [{0}], result: {1} ({2})", strFilter, objMessageDB.LastError, objMessageDB.GetErrorDescription(objMessageDB.LastError));

      objMessageDB.NotifyNonStatusUpdate(); // 'non-status-update' is a trivial update; only the UI's will update.

      Console.WriteLine("Ready.");
    }
  }
}
