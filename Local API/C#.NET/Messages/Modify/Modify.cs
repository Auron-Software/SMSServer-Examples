using System;
using System.Collections.Generic;
using System.Text;

namespace Modify
{
  class Modify
  {
    static void Main(string[] args)
    {
      AXMMCFGLib.Database objDatabase = new AXMMCFGLib.Database();
      AXMMCFGLib.Constants objConstants = new AXMMCFGLib.Constants();

      string strFilter;

      Console.WriteLine("API Module: {0}\nAPI Build: {1}\n", objDatabase.Module, objDatabase.Build);

      var objMessageDB = objDatabase.GetMessageDB();
      Console.WriteLine("Open, result: {0} ({1})", objDatabase.LastError, objDatabase.GetErrorDescription(objDatabase.LastError));
      if (objMessageDB.LastError != 0)
        return;

      strFilter = "ID>=5 And ID<=7";
      AXMMCFGLib.Message objMessage = (AXMMCFGLib.Message)objMessageDB.FindFirstMessage("", strFilter, "", 100, objConstants.FLAG_FINDFIRST_GENERICMESSAGE);
      Console.WriteLine("Filter: {0}", strFilter);
      int nCount = 0;
      while (objMessageDB.LastError == 0)
      {
        if (objMessage.TypeID == "SMS")
          ((AXMMCFGLib.SmsMessage)objMessage.GetTypeObject()).Body = "New Message Text";
        else if (objMessage.TypeID == "FILE")
          ((AXMMCFGLib.FileMessage)objMessage.GetTypeObject()).Body = "New Message Text";
        else if (objMessage.TypeID == "EMAIL")
          ((AXMMCFGLib.EmailMessage)objMessage.GetTypeObject()).BodyPlainText = "New Message Text";

        objMessageDB.Save(objMessage);
        Console.WriteLine("Save message #{0}, result: {1}", objMessage.ID, objMessageDB.LastError);
        objMessage = (AXMMCFGLib.Message)objMessageDB.FindNextMessage();
        Console.WriteLine("result: {0}", objMessageDB.LastError);

        ++nCount;
      }

      if (nCount > 0)
        objMessageDB.NotifyNonStatusUpdate(); // 'non-status-update' is a trivial update; only the UI's will update.

      Console.WriteLine("Ready.");
    }
  }
}
