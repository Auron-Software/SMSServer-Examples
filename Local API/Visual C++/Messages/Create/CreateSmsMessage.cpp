// CreateSmsMessage.cpp : Defines the entry point for the console application.
//

#include <comdef.h>
#include <atlbase.h>
#include <windows.h>
#include <stdio.h>

#import "..\..\include\AxMmCfg.tlb"

#define BUFFER_SIZE 500

int main(int argc, char* argv[])
{  
  CHAR szRecipient[BUFFER_SIZE] = { 0 };
  CHAR szBody[BUFFER_SIZE] = { 0 };
  AXMMCFGLib::IDatabasePtr pDatabase = NULL;
  AXMMCFGLib::ISmsMessagePtr pMessage = NULL;
  AXMMCFGLib::IMessageDBPtr pMessageDB = NULL;
  AXMMCFGLib::IConstantsPtr pConstants = NULL;
  _variant_t vt;

  // initialize com
  CoInitialize(NULL);

  // create messagedb instance
  HRESULT hr = pDatabase.CreateInstance(__uuidof(AXMMCFGLib::Database));
  if (FAILED(hr))
  {
    printf("Unable to create instance of the object.\n");
    return 1;
  }

  // create message constants instance  
  hr = pConstants.CreateInstance(__uuidof(AXMMCFGLib::Constants));
  if (FAILED(hr))
  {
    printf("Unable to create instance of the object.\n");
    return 1;
  }

  // printer information
  printf("Module: %ls\n", (LPCWSTR)pDatabase->Module);
  printf("Build: %ls\n\n", (LPCWSTR)pDatabase->Build);

  // prompt for recipient
  while (szRecipient[0] != '+')
  {
    printf("Enter the recipient's mobile number (like: +4412345678): ");
    fflush(stdin);
    scanf_s("%s", szRecipient, BUFFER_SIZE);
  }

  // prompts for message text
  while (szBody[0] == '\0')
  {
    printf("Enter the message text: ");
    fflush(stdin);
    scanf_s("%s", szBody, BUFFER_SIZE);
  }

  // open the Message Database for read/write
  pMessageDB = pDatabase->GetMessageDB();
  printf("Get result: %d\n", pDatabase->LastError);
  if (pDatabase->LastError != 0L)
    return 1;

  // create new message in message database
  vt = pMessageDB->Create(L"SMS", 0);
  pMessage = vt; // Reference this object through the ISmsMessage interface because it's an SMS message.
  printf("Create result: %d\n", pDatabase->LastError);
  if (pMessageDB->LastError != 0L)
    return 1;

  // set message properties
  pMessage->DirectionID = pConstants->MESSAGEDIRECTION_OUT;
  pMessage->StatusID = pConstants->MESSAGESTATUS_SCHEDULED;
  pMessage->ChannelID = L""; // choose channel automatically 
  pMessage->ToAddress = szRecipient;
  pMessage->Body = szBody;

  // save message
  pMessageDB->Save(&vt, 0); // Use the original variant type to save the modifications
  printf("Save, result: %d\n", pMessageDB->LastError);

	return 0;
}

