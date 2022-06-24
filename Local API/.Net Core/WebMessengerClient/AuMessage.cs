/*
 * netsh http add urlacl url=https://192.168.1.47:44364/ user=AURON\sirp
 * netsh http add urlacl url=https://localhost:44364/ user=AURON\sirp
 * 
 * update binding: 
 * G:\MmServer\VisualC#-AuSmsWeb\.vs\AuSmsWeb\config\applicationhost.config
 */

using Microsoft.AspNetCore.Http;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace AuSmsWeb
{
  public class CreateMessageFormData
  { 
    public string txtToAddress { get; set; }
    public string txtBody { get; set; }
    public List<IFormFile> btnAttachments { get; set; }
  }


  public class AuAttachment
  {
    public int? ID { get; set; }
    public string FileName { get; set; }
    public string MimeType { get; set; }
  }


  public class AuMessage
  {
    public int?     ID                      {get; set;}
    public string   DirectionID             {get; set;}
    public string   TypeID                  {get; set;}
    public string   StatusID                {get; set;}
    public int?     StatusDetailsID         {get; set;}
    public string   TriggerStatusID         {get; set;}
    public int?     TriggerDetailsID        {get; set;}
    public string   AckStatusID             {get; set;}
    public string   ChannelID               {get; set;}
    public string   BillingID               {get; set;}
    public DateTime? ScheduledTime           {get; set;}
    public DateTime? SentTime                {get; set;}
    public DateTime? ReceivedTime            {get; set;}
    public DateTime? LastUpdate              {get; set;}
    public int?     Priority                {get; set;}
    public int?     BatchID                 {get; set;}
    public int?     ConversationID          {get; set;}
    public string   Creator                 {get; set;}
    public int?     CustomField1            {get; set;}
    public string   CustomField2            {get; set;}
    public string   Trace                   {get; set;}
    public int?     Retries                 {get; set;}
    public List<AuAttachment>  Attachments  {get; set;}

    // more or less general
    public string   ToAddress               {get; set;}
    public string   FromAddress             {get; set;}

// SMS
    public bool?    RequestDeliveryReport   {get; set;}
    public string   DeliveryStatus          {get; set;}
    public int?     DataCoding              {get; set;}
    public int?     BodyFormat              {get; set;}
    public bool?    HasUdh                  {get; set;}
    public int?     TotalParts              {get; set;}
    public int?     PartNumber              {get; set;}
    public string   Reference               {get; set;}
    public string   Body                    { get; set; }

    // Email
    public int?     EmailPriority           {get; set; }
    public string   Organization            {get; set; }
    public string   ReadReceiptAddress      {get; set; }
    public string   FromName                {get; set; }
    public string   ReplyAddress            {get; set; }
    public string   Subject                 {get; set; }
    public string   CcAddress               {get; set; }
    public string   BccAddress              {get; set; }
    public string   BodyPlainText           {get; set; }
    public string   BodyHtml                {get; set; }
    public string   Header                  {get; set; }

  }
}
