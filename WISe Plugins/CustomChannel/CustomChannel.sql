/*
  This example only works in the Auron WISe!
  https://www.auronsoftware.com/products/auron-wise/

  With the Auron WISe you can setup custom channel types as wel as custom message types.
  This example sets up a new channel type. Find more information here:
  https://www.auronsoftware.com/kb/sms-server/configuration/add-new-channel-type-wise-only/
*/

-- Create a new channel definition. NOTE: Only the Auron WISe loads new channel definitions
INSERT INTO Channel_Types(ID, MessageTypeID, Description, LongDescription, 
  InfoUrl, DataTable, EditorPath, Icon, DisplayOrder, IsManaged, ProcessPath) 
VALUES(
  'CUSTOM_CHANNEL_TYPE',      -- ID
  'CUSTOM_MESSAGE_TYPE',      -- MessageTypeID
  'Custom channel',           -- Description
  '', '',                     -- LongDescription, InfoUrl
  'Channels_CustomChannel',   -- DataTable
  '"ChnCustomChannel.exe"',   -- EditorPath
  NULL, 1, 1,                 -- Icon, DisplayOrder, IsManaged
  'ChnProcCustomChannel.exe') -- ProcessPath

-- Create a data table for you your new channel type
CREATE TABLE Channels_CustomChannel
(
  ChannelID NVARCHAR(32),
  TestConfigString NVARCHAR(MAX)
  -- add more custom properties
)
