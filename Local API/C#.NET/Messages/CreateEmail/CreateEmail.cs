using System;
using System.Collections.Generic;
using System.Text;

namespace CreateEmail
{
  class Program
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

      Console.WriteLine("Enter recipient's e-mail address: ");
      strRecipient = Console.ReadLine();

      Console.WriteLine("Enter body of the message: ");
      strBody = Console.ReadLine();

      var objMessage = (AXMMCFGLib.EmailMessage)objMessageDB.Create("EMAIL");
      objMessage.ChannelID = "";
      objMessage.ScheduledTime = DateTime.Now;
      objMessage.ToAddress = strRecipient;
      objMessage.Subject = "Auron E-mail Message";
      objMessage.BodyPlainText = strBody;

      objMessageDB.Save(objMessage);
      objMessageDB.NotifyStatusUpdate();    // notify the service there's something new to send

      Console.WriteLine("Save, result: {0} ({1})", objMessageDB.LastError, objMessageDB.GetErrorDescription(objMessageDB.LastError));
      if (objMessageDB.LastError == 0)
        PrintMessage(objMessage);

      Console.WriteLine("Ready.");
    }

    static void PrintMessage(AXMMCFGLib.EmailMessage objMessage)
    {
      Console.WriteLine("  ID               : {0}", objMessage.ID);
      Console.WriteLine("  Direction        : {0}", objMessage.DirectionID);
      Console.WriteLine("  Type             : {0}", objMessage.TypeID);
      Console.WriteLine("  Status           : {0}", objMessage.StatusID);
      Console.WriteLine("  StatusDetails    : {0}", objMessage.StatusDetailsID);
      Console.WriteLine("  ChannelID        : {0}", objMessage.ChannelID);
      Console.WriteLine("  ScheduledTime    : {0}", objMessage.ScheduledTime);
      Console.WriteLine("  LastUpdate       : {0}", objMessage.LastUpdate);
      Console.WriteLine("  Sender           : {0}", objMessage.FromAddress);
      Console.WriteLine("  Recipient        : {0}", objMessage.ToAddress);
      Console.WriteLine("  Subject          : {0}", objMessage.Subject);
      Console.WriteLine("  Body             : {0}", objMessage.BodyPlainText);
      Console.WriteLine("  Trace            : {0}", objMessage.Trace);
    }
  }
}
