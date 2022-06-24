// CreateSmsMessage.cpp : Defines the entry point for the console application.
//

#include <comdef.h>
#include <atlbase.h>
#include <windows.h>
#include <stdio.h>

#import "..\..\include\AxMmCfg.tlb"
#include "..\..\Include\AxMmCfgConstants.h"

int main(int argc, char* argv[])
{
  AXMMCFGLib::IDatabasePtr pDatabase = NULL;
  AXMMCFGLib::IMessageDBPtr pMessageDB = NULL;
  AXMMCFGLib::IMessagePtr pMessage = NULL;
  _variant_t vt;
  
  // initialize com
  CoInitialize(NULL);

  // create database instance
  HRESULT hr = pDatabase.CreateInstance(__uuidof(AXMMCFGLib::Database));
  if (FAILED(hr))
  {
    printf("Unable to create instance of the object.\n");
    return 1;
  }

  // printer information
  printf("Module: %ls\n", (LPCWSTR)pDatabase->Module);
  printf("Build: %ls\n\n", (LPCWSTR)pDatabase->Build);

  // open the Message Database for read/write
  pMessageDB = pDatabase->GetMessageDB();
  printf("Get result: %d\n", pMessageDB->LastError);
  if (pDatabase->LastError != 0L)
    return 1;

	// load Mesage with ID=2
	vt = pMessageDB->Load(2, FLAG_LOAD_GENERICMESSAGE);
  pMessage = vt;
  printf("Load, result: %d\n", pMessageDB->LastError);
	if(pMessageDB->LastError)
  {
    printf("Message ID not found.\n");
    return 1;
  }    

	// modify the body of the Message
	pMessage->AddTrace(_bstr_t("Add trace line"));

	// save the Message
	pMessageDB->Save(&vt, 0);
	printf( "Save, result: %ld\n", pMessageDB->LastError );
	if(pMessageDB->LastError != 0L )
    return 1;

	printf("Ready.\n");

	return 0;
}

