/*
  This example only works in the Auron WISe!
  https://www.auronsoftware.com/products/auron-wise/

  With the Auron WISe you can setup custom channel types as wel as custom message types.
  This example sets up a new message type. Find more information here:
  https://www.auronsoftware.com/kb/sms-server/configuration/add-new-message-type-wise-only/
*/

-- Create a new message definition. NOTE: Only the Auron WISe loads new message definitions
INSERT INTO Message_Types(ID, Description, LongDescription, InfoUrl, DataTable,
 EditorPath, ProgramId, HasAttachments, SupportReply, SupportForward, Icon, DisplayOrder) 
VALUES (
  'CUSTOM_MESSAGE_TYPE',      -- ID
  'Custom Message Type',      -- Description
  '', '',                     -- LongDescription, InfoUrl
  'Messages_CustomMessage',   -- DataTable
  '"MsgCustomMessage.exe"',   -- EditorPath
  '',                         -- Program ID 
  1, 1, 1,                    -- HasAttachments, SupportReply, SupportForward
  NULL, 1)                    -- Icon, DisplayOrder


-- Create a data table for you your new message type
CREATE TABLE Messages_CustomMessage
(
    MessageID INT NOT NULL
  , TestField NVARCHAR(255)
  -- Other custom fields
  , CONSTRAINT pk_Messages_CustomMessage_MessageID PRIMARY KEY (MessageID)
)

-- Create archive table. This must be done in the archive database; which can be the same as the message database
CREATE TABLE ArchMessages_CustomMessage
(
    MessageID INT NOT NULL
  , TestField NVARCHAR(255)
  -- Other custom fields
  , CONSTRAINT pk_ArchMessages_CustomMessage_MessageID PRIMARY KEY (MessageID)
)

-- (Optional) create a view to more easily insert custom messages from the database
CREATE VIEW InsertCustomMessage AS 
  SELECT * FROM Messages M 
    INNER JOIN Messages_CustomMessage D ON M.ID = D.MessageID

EXECUTE CreateInsertTriggerForMessageView @sViewName='InsertCustomMessage', 
  @sDataTable='Messages_CustomMessage', 
  @sTypeID='CUSTOM_MESSAGE_TYPE'

