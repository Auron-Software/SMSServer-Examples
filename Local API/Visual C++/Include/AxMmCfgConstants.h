#ifndef _AXMMCFGCONSTANTS_H_
#define _AXMMCFGCONSTANTS_H_

// Http placeholders
#define MS_HTTP_PLACEHOLDER_TOADDRESS						L"%TOADDRESS%"				// From MMTK
#define MS_HTTP_PLACEHOLDER_TOADDRESSTON				L"%TOADDRESSTON%"			// From MMTK
#define MS_HTTP_PLACEHOLDER_TOADDRESSNPI				L"%TOADDRESSNPI%"			// From MMTK
#define MS_HTTP_PLACEHOLDER_FROMADDRESS					L"%FROMADDRESS%"		    // From MMTK
#define MS_HTTP_PLACEHOLDER_FROMADDRESSTON			L"%FROMADDRESSTON%"			// From MMTK
#define MS_HTTP_PLACEHOLDER_FROMADDRESSNPI			L"%FROMADDRESSNPI%"			// From MMTK
#define MS_HTTP_PLACEHOLDER_BODY							  L"%BODY%"					// From MMTK
#define MS_HTTP_PLACEHOLDER_BODYHEX							L"%BODYASHEX%"				// From MMTK
#define MS_HTTP_PLACEHOLDER_BODYBASE64					L"%BODYASBASE64%"			// From MMTK
#define MS_HTTP_PLACEHOLDER_UDHI							  L"%UDHI%"					// From MMTK
#define MS_HTTP_PLACEHOLDER_DATACODING					L"%DATACODING%"				// From MMTK
#define MS_HTTP_PLACEHOLDER_SUBJECT							L"%SUBJECT%"				// Specific
#define MS_HTTP_PLACEHOLDER_ID                  L"%ID%"
#define MS_HTTP_PLACEHOLDER_CUSTOMFIELD1				L"%CUSTOMFIELD1%"			// Specific
#define MS_HTTP_PLACEHOLDER_CUSTOMFIELD2				L"%CUSTOMFIELD2%"			// Specific

// Http contenttype
#define HTTPCONTENTTYPE_FORMURLENCODED			    0L
#define HTTPCONTENTTYPE_XML									    1L

// Database Type
#define DATABASETYPE_MSACCESS								    0L
#define DATABASETYPE_MSSQL									    1L
#define DATABASETYPE_MYSQL									    2L
#define DATABASETYPE_LOCALDB                    4L
#define DATABASETYPE_OTHER									   99L

// Delivery report constants
#define SMPPDLRFORMAT_DEFAULT								    0L // Message reference is treated as a string
#define SMPPDLRFORMAT_DECIMAL								    1L // Message reference is hex in submit_sm_resp -> dec in dlr (mBlox does this !)

#define MESSAGECHARSET_CHANNEL_DEFAULT				  1L	// Channel default character set
#define MESSAGECHARSET_UNICODE								  2L	// Unicode character set

// Modifiers
#define	MESSAGEMODIFIER_SMS_FLASH							  1L								// flash bit
#define MESSAGEMODIFIER_SMS_UDH								  2L								// udh header bit
#define MESSAGEMODIFIER_SMS_DELIVERYREPORT      4L                // is delivery report
#define MESSAGEMODIFIER_APPLY_VALIDITY(m, v)	  ((long)(m |= (v << 16)))
#define MESSAGEMODIFIER_GET_VALIDITY(m)				  ((long)((m & 0xffff0000) >> 16))

// View Types
#define VIEWTYPE_QUICK                           L"QUICK"
#define VIEWTYPE_ADVANCED                        L"ADVANCED"

// Channel type
#define CHANNELTYPE_FILESYSTEM                   L"FILESYSTEM"
#define CHANNELTYPE_GSM                          L"GSM"
#define CHANNELTYPE_HTTP_SMS                     L"HTTP_SMS"
#define CHANNELTYPE_SMPP                         L"SMPP"
#define CHANNELTYPE_SMPP_SERVER                  L"SMPP_SERVER"
#define CHANNELTYPE_POP3                         L"POP3"
#define CHANNELTYPE_IMAP                         L"IMAP"
#define CHANNELTYPE_SMTP                         L"SMTP"

// Message Type
#define MESSAGETYPE_UNDEFINED								     L"UNDEFINED"
#define MESSAGETYPE_SMS										       L"SMS"
#define MESSAGETYPE_MAIL									       L"EMAIL"
#define MESSAGETYPE_FILE									       L"FILE"
#define MESSAGETYPE_SMPPSERVERBIND               L"SMPPSERVERBIND"

// Message Direction
#define MESSAGEDIRECTION_IN                      L"IN"
#define MESSAGEDIRECTION_OUT                     L"OUT"

// Script Type
#define SCRIPT_TYPE_VBSCRIPT                     L"VBSCRIPT"
#define SCRIPT_TYPE_JAVASCRIPT                   L"JAVASCRIPT"
#define SCRIPT_TYPE_SQL                          L"SQL"

// Message StatusID
#define MESSAGESTATUS_CREATING                   L"CREATING"         // This message is incomplete and should not be processed
                                            
#define MESSAGESTATUS_SCHEDULED                  L"SCHEDULED"        // Will be routed when the scheduled time is there
#define MESSAGESTATUS_QUEUED                     L"QUEUED"           // 'To send' status; ready to be queued by channel (marked sending)
#define MESSAGESTATUS_SENDING                    L"SENDING"          // channel is sending these out
#define MESSAGESTATUS_SENT                       L"SENT"             // sent and and acked if ack was required
#define MESSAGESTATUS_FAILED                     L"FAILED"           // failed to send; can be any type of failure; trace will hold details
#define MESSAGESTATUS_BLOCKED                    L"BLOCKED"          // failed to send; matched by a blocking rule
#define MESSAGESTATUS_NOCHANNEL                  L"NOCHANNEL"        // failed to send; no channel available
#define MESSAGESTATUS_DAILYLIMIT                 L"DAILYLIMIT"       // failed to send; daily limit was reached
#define MESSAGESTATUS_RECEIVING                  L"RECEIVING"        // receiving; status reserved for when a received message needs to be acked on the protocol layer
#define MESSAGESTATUS_RECEIVED                   L"RECEIVED"         // received; ready for processing
                                            
#define MESSAGESTATUS_DELIVERED                  L"DELIVERED"        // delivered; in case of delivery report
#define MESSAGESTATUS_NOTDELIVERED               L"NOTDELIVERED"     // delivery failed; only in case of delivery report
#define MESSAGESTATUS_NOREPORT                   L"NOREPORT"         // no delivery report received         

#define MESSAGETRGSTATUS_NA                      L""                 // ready be processed
#define MESSAGETRGSTATUS_PENDING                 L"PENDING"          // ready for trigger
#define MESSAGETRGSTATUS_PROCESSING              L"PROCESSING"       // currently beeing processed by a trigger
#define MESSAGETRGSTATUS_PROCESSED               L"PROCESSED"        // triggers OK
#define MESSAGETRGSTATUS_FAILED                  L"FAILED"           // error with triggers
#define MESSAGETRGSTATUS_NOTRIGGERS              L"NOTRIGGERS"       // no triggers defined
#define MESSAGETRGSTATUS_NOMATCH                 L"NOMATCH"          // not matched to any trigger condition

#define MESSAGEACKSTATUS_NA                      L""                 // not ready to be acknowledged yet or not required
#define MESSAGEACKSTATUS_ACK                     L"ACK"              // acknowledged by the server
#define MESSAGEACKSTATUS_NACK                    L"NACK"             // not acknowledged by the server
#define MESSAGEACKSTATUS_WAITING                 L"WAITING"          // waiting for acknowledgement

#define MESSAGESTATUSDETAILS_OUT_FAILED_SUPPORT_ONLY_ONE          1

#define ISSET(c, f) ((c & f) == f)

#define FLAG_SAVE_AS_COPY                        1L   // Save message as a copy of the current message - Message ID be new message ID (because you can remember the old one)
#define FLAG_FINDFIRST_READ_UNCOMMITTED          2L   // Read cursor will be with nolock
#define FLAG_FINDFIRST_IGNORE_ATTACHMENTS        4L   // Attachments will not be read; messages will appear to have no attachments!
#define FLAG_LOAD_IGNORE_ATTACHMENTS             4L   // Attachments will not be read; messages will appear to have no attachments!
#define FLAG_LOAD_READ_UNCOMMITTED               2L   // Read cursor will be with nolock

#define FLAG_SAVE_CREATE                         8L   // Try to create a new record (only on NVARCHAR Id's)
#define FLAG_SAVE_MODIFY                         16L  // Try to update an existing record
#define FLAG_SAVE_AUTO                           0L   // Determine what to do by if the item was created or loaded

#define FLAG_SAVE_DONT_NORMALIZE                 32L   // Don't normalize processing order (call sort) on Routes and triggers

#define FLAG_CREATE_GENERICMESSAGE               64L   // Als load an IMessage as opposed to trying to create the ProgramID type of the Message
#define FLAG_LOAD_GENERICMESSAGE                 64L   // Als load an IMessage as opposed to trying to create the ProgramID type of the Message
#define FLAG_FINDFIRST_GENERICMESSAGE            64L   // Als load an IMessage as opposed to trying to create the ProgramID type of the Message

#define FLAG_RESET_ARCHIVEDATABASE              128L   // reset the archive database connection

#define FLAG_FINDFIRST_FROMARCHIVE              256L   // search in archive database rather than message database
#define FLAG_LOAD_FROMARCHIVE                   256L

// Message Body Format
#define MESSAGEBODYFORMAT_SMS_TEXT							  0L
#define MESSAGEBODYFORMAT_SMS_DATA							  2L
#define MESSAGEBODYFORMAT_SMS_WAPPUSH						  6L

#endif	// _AXMMCFGCONSTANTS_H_