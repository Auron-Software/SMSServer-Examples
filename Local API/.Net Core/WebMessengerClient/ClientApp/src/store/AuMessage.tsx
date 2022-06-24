export interface AuResultCode {
  lastError: number;
  lastErrorDescription: string;
}

export interface AuAttachment {
  id: number;
  fileName: string;
  mimeType: string;
}

// NOTE: watch out! using controller base changes casing for properties
// first letter is always lower case; ID is alwas id
export interface AuMessage {
  id: number;
  directionID: string;
  typeID: string;
  statusID: string;
  statusDetailsID: number;
  triggerStatusID: string;
  triggerDetailsID: number;
  ackStatusID: string;
  channelID: string;
  billingID: string;
  scheduledTime: Date;
  sentTime: Date;
  receivedTime: Date;
  lastUpdate: Date;
  priority: number;
  batchID: number;
  conversationID: number;
  creator: string;
  customField1: number;
  customField2: string;
  trace: string;
  retries: number;
  attachments: AuAttachment[];

  toAddress: string
  fromAddress: string

  requestDeliveryReport: boolean;
  deliveryStatus: number;
  dataCoding: string;
  bodyFormat: number;
  hasUdh: number;
  totalParts: number;
  partNumber: number;
  reference: string;
  body: string;

  emailPriority: number;
  organization: string;
  readReceiptAddress: string;
  fromName: string;
  replyAddress: string;
  subject: string;
  ccAddress: string;
  bccAddress: string;
  bodyPlainText: string;
  bodyHtml: string;
  header: string;
}
