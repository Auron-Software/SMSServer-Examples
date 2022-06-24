using System;
using System.Collections.Generic;
using System.Text;

namespace List
{
  class List
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

      strFilter = "StatusID='SENT' OR StatusID='RECEIVED'";
      var objMessage = (AXMMCFGLib.Message)objMessageDB.FindFirstMessage("", strFilter, "", 100, objConstants.FLAG_FINDFIRST_GENERICMESSAGE);
      Console.WriteLine("Filter: {0}", strFilter);
      while (objMessageDB.LastError == 0)
      {
        PrintMessage(objMessage);
        objMessage = (AXMMCFGLib.Message)objMessageDB.FindNextMessage();
      }

      Console.WriteLine("Ready.");
    }

    static void PrintMessage(AXMMCFGLib.Message objMessage)
    {
      Console.WriteLine("  ID               : {0}", objMessage.ID);
      Console.WriteLine("  Direction        : {0}", objMessage.DirectionID);
      Console.WriteLine("  Type             : {0}", objMessage.TypeID);
      Console.WriteLine("  Status           : {0}", objMessage.StatusID);
      Console.WriteLine("  StatusDetails    : {0}", objMessage.StatusDetailsID);
      Console.WriteLine("  ChannelID        : {0}", objMessage.ChannelID);
      Console.WriteLine("  ScheduledTime    : {0}", objMessage.ScheduledTime);
      Console.WriteLine("  LastUpdate       : {0}", objMessage.LastUpdate);

      if (objMessage.TypeID == "SMS")
      {
        var objSMS = (AXMMCFGLib.SmsMessage)objMessage.GetTypeObject();
        Console.WriteLine("  MessageReference : {0}", objSMS.Reference);
        Console.WriteLine("  Sender           : {0}", objSMS.FromAddress);
        Console.WriteLine("  Recipient        : {0}", objSMS.ToAddress);
        Console.WriteLine("  Body             : {0}", objSMS.Body);
      } else if (objMessage.TypeID == "EMAIL")
      {
        var objEmail = (AXMMCFGLib.EmailMessage)objMessage.GetTypeObject();
        Console.WriteLine("  Subject          : {0}", objEmail.Subject);
        Console.WriteLine("  Sender           : {0}", objEmail.FromAddress);
        Console.WriteLine("  Recipient        : {0}", objEmail.ToAddress);
        Console.WriteLine("  BodyPlainText    : {0}", objEmail.BodyPlainText);
      }

      Console.WriteLine("  Trace            : {0}", objMessage.Trace);

    }
  }
}
