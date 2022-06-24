' // ========================================================================
' // CreateSmsFromExcel.vbs
' // ------------------------------------------------------------------------
' // This VBScript sample demonstrate how to retrieve persons from an Excel 
' // sheet and create a new SMS message for each person
' // ========================================================================

CONST STR_EXCELFILE = "Students.xls" 

' Create global objects
Set objDatabase = CreateObject( "AxMmServer.Database" ) 
Set objConstants = CreateObject( "AxMmServer.Constants" )

WScript.Echo "API Module: " & objDatabase.Module
WScript.Echo "API Build: " & objDatabase.Build & vbCrLf 

' Excel initializations
On Error Resume Next 
  Set objExcel    = CreateObject("Excel.Application")
If Err.Number <> 0 Then
  WScript.Echo "This example requires MS Excel to be installed."
  WScript.Quit
End If
On Error Goto 0 
Set objWorkbook = objExcel.Workbooks.Open( STR_EXCELFILE )
nExcelRow       = 1

' Open the Database
objMessageDB = objDatabase.GetMessageDB
WScript.Echo "Open, result: " & objDatabase.LastError
If( objDatabase.LastError <> 0 ) Then
   WScript.Quit
End If

Do Until objExcel.Cells(nExcelRow,1).Value = ""
  ' Create new message in the Message Database
  Set objMessage          = objMessageDB.Create("SMS")
  objMessage.DirectionID  = objConstants.MESSAGEDIRECTION_OUT
  objMessage.TypeID       = objConstants.MESSAGETYPE_SMS
  objMessage.StatusID     = objConstants.MESSAGESTATUS_PENDING
  objMessage.ChannelID    = 0  ' First available SMS channel
  objMessage.ToAddress    = objExcel.Cells( nExcelRow,2 ).Value 
  objMessage.Body         = "Hello " & objExcel.Cells( nExcelRow, 1 ).Value

  ' Save the new values that were just assigned
  objMessageDB.Save( objMessage )
  If( objMessageDB.LastError <> 0 ) Then
     WScript.Echo "Failed to create message, error: " & objMessageDB.LastError
     Exit Do
  End If

  WScript.Echo "New SMS created for " &  objExcel.Cells( nExcelRow, 1 ).Value & " with mobile number " & objExcel.Cells( nExcelRow, 2 ).Value
  
  nExcelRow = nExcelRow + 1
Loop

objExcel.Quit

WScript.Echo "Ready."



