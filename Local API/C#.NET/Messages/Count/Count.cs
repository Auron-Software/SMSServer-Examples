using System;
using System.Collections.Generic;
using System.Text;

namespace Count
{
  class Count
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

      Console.WriteLine("Counting messages with filter: [" + strFilter + "]");
      Console.WriteLine("#Records : {0}", objMessageDB.Count("", strFilter));

      strFilter = "ID > 2 And DirectionID='OUT'";
      Console.WriteLine("Counting messages with filter: [" + strFilter + "]");
      Console.WriteLine("#Records : {0}", objMessageDB.Count("", strFilter));

      Console.WriteLine("Ready.");
    }
  }
}
