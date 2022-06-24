// List.cpp : Defines the entry point for the console application.
//

#include <comdef.h>
#include <atlbase.h>
#include <ATLComTime.h>
#include <windows.h>
#include <stdio.h>

#import "..\..\include\AxMmCfg.tlb"
#include "..\..\Include\AxMmCfgConstants.h"

VOID PrintMessage(AXMMCFGLib::IMessagePtr &pMessage);

int main(int argc, char* argv[])
{  
  AXMMCFGLib::IMessagePtr pMessage = NULL;
  AXMMCFGLib::IMessageDBPtr pMessageDB = NULL;
  AXMMCFGLib::IDatabasePtr pDatabase = NULL;

  // initialize com
  CoInitialize(NULL);

  // create messagedb instance
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
  printf("Get result: %d\n", pDatabase->LastError);
  if (pDatabase->LastError != 0L)
    return 1;

	// Find the messages - no filter specified ("") since we want to list all messages
	pMessage = pMessageDB->FindFirstMessage(L"" , L"", L"", 100, FLAG_FINDFIRST_GENERICMESSAGE);
  printf("FindFirstMessage, result: %d\n", pMessageDB->LastError);
	while (pMessageDB->LastError == 0L)
	{
		PrintMessage(pMessage);

		pMessage = pMessageDB->FindNextMessage(); 		
	}

	printf("Ready.\n");

	return 0;
}


VOID PrintMessage(AXMMCFGLib::IMessagePtr &pMessage)
{
	printf( "\n" );
	printf( "%-22.22s : %ld\n", "ID", pMessage->ID);
	printf( "  %-20.20s : %ls\n", "Direction", (LPCWSTR)pMessage->DirectionID );
	printf( "  %-20.20s : %ls\n", "Type", (LPCWSTR)pMessage->TypeID );
	printf( "  %-20.20s : %ls\n", "Status", (LPCWSTR)pMessage->StatusID );
	printf( "  %-20.20s : %ls\n", "ChannelID", (LPCWSTR)pMessage->ChannelID );
	printf( "  %-20.20s : %s\n", "SentTime", COleDateTime(pMessage->SentTime).Format(_T("%Y-%m-%d %H:%M:%S")).GetBuffer() );
	printf( "  %-20.20s : %s\n", "ReceivedTime", COleDateTime(pMessage->ReceivedTime).Format(_T("%Y-%m-%d %H:%M:%S")).GetBuffer() );
	printf( "  %-20.20s : %s\n", "LastUpdate", COleDateTime(pMessage->LastUpdate).Format(_T("%Y-%m-%d %H:%M:%S")).GetBuffer() );
	printf( "  %-20.20s : %40.40ls (...)\n", "Trace", (LPCWSTR)pMessage->Trace);
}
