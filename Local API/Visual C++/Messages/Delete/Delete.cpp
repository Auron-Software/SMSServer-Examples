// Delete.cpp : Defines the entry point for the console application.
//

#include <comdef.h>
#include <atlbase.h>
#include <windows.h>
#include <stdio.h>

#import "..\..\include\AxMmCfg.tlb" \
rename("FindFirstFile", "AxFindFirstFile"), \
rename("FindNextFile", "AxFindNextFile"), \
rename("RValue", "AxRValue")

int main(int argc, char* argv[])
{
  // initialize com
  CoInitialize(NULL);

  // create database instance 
  AXMMCFGLib::IMessageDBPtr pMessageDB = NULL;
  AXMMCFGLib::IDatabasePtr pDatabase = NULL;
  HRESULT hr = pDatabase.CreateInstance(__uuidof(AXMMCFGLib::Database));
  if (FAILED(hr))
  {
    printf("Unable to create instance of the object.\n");
    return 1;
  }

  // printer information
  printf("Module: %ls\n", (LPCWSTR)pMessageDB->Module);
  printf("Build: %ls\n\n", (LPCWSTR)pMessageDB->Build);

  // open the Message Database for read/write
  pMessageDB = pDatabase->GetMessageDB();
  printf("Open result: %d\n", pMessageDB->LastError);
  if (pMessageDB->LastError != 0L)
    return 1;

	// delete message 50001
	pMessageDB->Delete(L"", L"ID > 50000 AND ID <= 500001");	// Specify a filter like 'ID > 2'
  printf("Delete, result: %d\n", pMessageDB->LastError);

	printf("Ready.\n");

	return 0;
}


