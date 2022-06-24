using System;
using System.Collections.Generic;
using System.Text;

namespace CreateSms
{
  class CreateSms
  {
    static void Main(string[] args)
    {
      AXMMCFGLib.Database objDatabase = new AXMMCFGLib.Database();
      AXMMCFGLib.Constants objConstants = new AXMMCFGLib.Constants();

      string strRecipient, strBody;

      Console.WriteLine("API Module: {0}\nAPI Build: {1}\n", objDatabase.Module, objDatabase.Build);

      var objMessageDB = objDatabase.GetMessageDB();
      Console.WriteLine("Open, result: {0} ({1})", objDatabase.LastError, objDatabase.GetErrorDescription(objDatabase.LastError));
      if (objMessageDB.LastError != 0)
        return;

      Console.WriteLine("Enter recipient's mobile number (like: +4412345678): ");
      strRecipient = Console.ReadLine();

      Console.WriteLine("Enter body of the message: ");
      strBody = Console.ReadLine();

      var objMessage = (AXMMCFGLib.SmsMessage)objMessageDB.Create("SMS");
      objMessage.ChannelID = "";
      objMessage.ScheduledTime = DateTime.Now;
      objMessage.ToAddress = strRecipient;
      objMessage.Body = strBody;

      objMessageDB.Save(objMessage);
      Console.WriteLine("Save, result: {0} ({1})", objMessageDB.LastError, objMessageDB.GetErrorDescription(objMessageDB.LastError));
      if (objMessageDB.LastError == 0)
        PrintMessage(objMessage);
      
      objMessageDB.NotifyStatusUpdate();    // notify the service there's something new to send      

      Console.WriteLine("Ready.");
    }

    static void PrintMessage(AXMMCFGLib.SmsMessage objMessage)
    {
      Console.WriteLine("  ID               : {0}", objMessage.ID);
      Console.WriteLine("  Direction        : {0}", objMessage.DirectionID);
      Console.WriteLine("  Type             : {0}", objMessage.TypeID);
      Console.WriteLine("  Status           : {0}", objMessage.StatusID);
      Console.WriteLine("  StatusDetails    : {0}", objMessage.StatusDetailsID);
      Console.WriteLine("  ChannelID        : {0}", objMessage.ChannelID);
      Console.WriteLine("  MessageReference : {0}", objMessage.Reference);
      Console.WriteLine("  ScheduledTime    : {0}", objMessage.ScheduledTime);
      Console.WriteLine("  LastUpdate       : {0}", objMessage.LastUpdate);
      Console.WriteLine("  Sender           : {0}", objMessage.FromAddress);
      Console.WriteLine("  Recipient        : {0}", objMessage.ToAddress);
      Console.WriteLine("  Body             : {0}", objMessage.Body);
      Console.WriteLine("  Trace            : {0}", objMessage.Trace);
    }
  }
}
