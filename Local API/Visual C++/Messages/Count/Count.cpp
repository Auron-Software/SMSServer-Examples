// Count.cpp : Defines the entry point for the console application.
//

#include <comdef.h>
#include <atlbase.h>
#include <windows.h>
#include <stdio.h>

#import "..\..\include\AxMmCfg.tlb"

int main(int argc, char* argv[])
{
  // initialize com
  CoInitialize(NULL);

  // create messagedb instance 
  AXMMCFGLib::IDatabasePtr pDatabase = NULL;
  HRESULT hr = pDatabase.CreateInstance(__uuidof(AXMMCFGLib::Database));
  if (FAILED(hr))
  {
    printf("Unable to create instance of the object.\n");
    return 1;
  }
  
  // print information
  printf("Module: %ls\n", (LPCWSTR)pDatabase->Module);
  printf("Build: %ls\n\n", (LPCWSTR)pDatabase->Build);
  
  // open message database
  AXMMCFGLib::IMessageDBPtr pMessageDB = pDatabase->GetMessageDB();
  printf("Get result: %d\n", pDatabase->LastError);
  if (pDatabase->LastError != 0L)
    return 1;
  
  // count messages
  long nCount = pMessageDB->Count(L"", L"");
  printf("Count result: %d\n", pMessageDB->LastError);
  if (pMessageDB->LastError != 0L)
    return 1;
    
  printf("There currently are %d messages in the database\n", nCount);

	return 0;
}

