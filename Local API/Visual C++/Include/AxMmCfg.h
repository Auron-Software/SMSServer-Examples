

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for AxMmCfg.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __AxMmCfg_h__
#define __AxMmCfg_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IConstants_FWD_DEFINED__
#define __IConstants_FWD_DEFINED__
typedef interface IConstants IConstants;

#endif 	/* __IConstants_FWD_DEFINED__ */


#ifndef __IInfo_FWD_DEFINED__
#define __IInfo_FWD_DEFINED__
typedef interface IInfo IInfo;

#endif 	/* __IInfo_FWD_DEFINED__ */


#ifndef __IAxStatic_FWD_DEFINED__
#define __IAxStatic_FWD_DEFINED__
typedef interface IAxStatic IAxStatic;

#endif 	/* __IAxStatic_FWD_DEFINED__ */


#ifndef __IChannel_FWD_DEFINED__
#define __IChannel_FWD_DEFINED__
typedef interface IChannel IChannel;

#endif 	/* __IChannel_FWD_DEFINED__ */


#ifndef __IChannels_FWD_DEFINED__
#define __IChannels_FWD_DEFINED__
typedef interface IChannels IChannels;

#endif 	/* __IChannels_FWD_DEFINED__ */


#ifndef __ICampaign_FWD_DEFINED__
#define __ICampaign_FWD_DEFINED__
typedef interface ICampaign ICampaign;

#endif 	/* __ICampaign_FWD_DEFINED__ */


#ifndef __ICampaigns_FWD_DEFINED__
#define __ICampaigns_FWD_DEFINED__
typedef interface ICampaigns ICampaigns;

#endif 	/* __ICampaigns_FWD_DEFINED__ */


#ifndef __IMessageType_FWD_DEFINED__
#define __IMessageType_FWD_DEFINED__
typedef interface IMessageType IMessageType;

#endif 	/* __IMessageType_FWD_DEFINED__ */


#ifndef __IMessageTypes_FWD_DEFINED__
#define __IMessageTypes_FWD_DEFINED__
typedef interface IMessageTypes IMessageTypes;

#endif 	/* __IMessageTypes_FWD_DEFINED__ */


#ifndef __IChannelType_FWD_DEFINED__
#define __IChannelType_FWD_DEFINED__
typedef interface IChannelType IChannelType;

#endif 	/* __IChannelType_FWD_DEFINED__ */


#ifndef __IChannelTypes_FWD_DEFINED__
#define __IChannelTypes_FWD_DEFINED__
typedef interface IChannelTypes IChannelTypes;

#endif 	/* __IChannelTypes_FWD_DEFINED__ */


#ifndef __IMessage_FWD_DEFINED__
#define __IMessage_FWD_DEFINED__
typedef interface IMessage IMessage;

#endif 	/* __IMessage_FWD_DEFINED__ */


#ifndef __ITlv_FWD_DEFINED__
#define __ITlv_FWD_DEFINED__
typedef interface ITlv ITlv;

#endif 	/* __ITlv_FWD_DEFINED__ */


#ifndef __ISmsMessage_FWD_DEFINED__
#define __ISmsMessage_FWD_DEFINED__
typedef interface ISmsMessage ISmsMessage;

#endif 	/* __ISmsMessage_FWD_DEFINED__ */


#ifndef __ISmppServerBindMessage_FWD_DEFINED__
#define __ISmppServerBindMessage_FWD_DEFINED__
typedef interface ISmppServerBindMessage ISmppServerBindMessage;

#endif 	/* __ISmppServerBindMessage_FWD_DEFINED__ */


#ifndef __IEmailMessage_FWD_DEFINED__
#define __IEmailMessage_FWD_DEFINED__
typedef interface IEmailMessage IEmailMessage;

#endif 	/* __IEmailMessage_FWD_DEFINED__ */


#ifndef __IFileMessage_FWD_DEFINED__
#define __IFileMessage_FWD_DEFINED__
typedef interface IFileMessage IFileMessage;

#endif 	/* __IFileMessage_FWD_DEFINED__ */


#ifndef __IMessageDB_FWD_DEFINED__
#define __IMessageDB_FWD_DEFINED__
typedef interface IMessageDB IMessageDB;

#endif 	/* __IMessageDB_FWD_DEFINED__ */


#ifndef __ITrigger_FWD_DEFINED__
#define __ITrigger_FWD_DEFINED__
typedef interface ITrigger ITrigger;

#endif 	/* __ITrigger_FWD_DEFINED__ */


#ifndef __ITriggers_FWD_DEFINED__
#define __ITriggers_FWD_DEFINED__
typedef interface ITriggers ITriggers;

#endif 	/* __ITriggers_FWD_DEFINED__ */


#ifndef __IRoute_FWD_DEFINED__
#define __IRoute_FWD_DEFINED__
typedef interface IRoute IRoute;

#endif 	/* __IRoute_FWD_DEFINED__ */


#ifndef __IRoutes_FWD_DEFINED__
#define __IRoutes_FWD_DEFINED__
typedef interface IRoutes IRoutes;

#endif 	/* __IRoutes_FWD_DEFINED__ */


#ifndef __IBlockedItem_FWD_DEFINED__
#define __IBlockedItem_FWD_DEFINED__
typedef interface IBlockedItem IBlockedItem;

#endif 	/* __IBlockedItem_FWD_DEFINED__ */


#ifndef __IBlockedItems_FWD_DEFINED__
#define __IBlockedItems_FWD_DEFINED__
typedef interface IBlockedItems IBlockedItems;

#endif 	/* __IBlockedItems_FWD_DEFINED__ */


#ifndef __IOptions_FWD_DEFINED__
#define __IOptions_FWD_DEFINED__
typedef interface IOptions IOptions;

#endif 	/* __IOptions_FWD_DEFINED__ */


#ifndef __IDatabase_FWD_DEFINED__
#define __IDatabase_FWD_DEFINED__
typedef interface IDatabase IDatabase;

#endif 	/* __IDatabase_FWD_DEFINED__ */


#ifndef __Constants_FWD_DEFINED__
#define __Constants_FWD_DEFINED__

#ifdef __cplusplus
typedef class Constants Constants;
#else
typedef struct Constants Constants;
#endif /* __cplusplus */

#endif 	/* __Constants_FWD_DEFINED__ */


#ifndef __Info_FWD_DEFINED__
#define __Info_FWD_DEFINED__

#ifdef __cplusplus
typedef class Info Info;
#else
typedef struct Info Info;
#endif /* __cplusplus */

#endif 	/* __Info_FWD_DEFINED__ */


#ifndef __AxStatic_FWD_DEFINED__
#define __AxStatic_FWD_DEFINED__

#ifdef __cplusplus
typedef class AxStatic AxStatic;
#else
typedef struct AxStatic AxStatic;
#endif /* __cplusplus */

#endif 	/* __AxStatic_FWD_DEFINED__ */


#ifndef __Channel_FWD_DEFINED__
#define __Channel_FWD_DEFINED__

#ifdef __cplusplus
typedef class Channel Channel;
#else
typedef struct Channel Channel;
#endif /* __cplusplus */

#endif 	/* __Channel_FWD_DEFINED__ */


#ifndef __Campaigns_FWD_DEFINED__
#define __Campaigns_FWD_DEFINED__

#ifdef __cplusplus
typedef class Campaigns Campaigns;
#else
typedef struct Campaigns Campaigns;
#endif /* __cplusplus */

#endif 	/* __Campaigns_FWD_DEFINED__ */


#ifndef __Campaign_FWD_DEFINED__
#define __Campaign_FWD_DEFINED__

#ifdef __cplusplus
typedef class Campaign Campaign;
#else
typedef struct Campaign Campaign;
#endif /* __cplusplus */

#endif 	/* __Campaign_FWD_DEFINED__ */


#ifndef __Channels_FWD_DEFINED__
#define __Channels_FWD_DEFINED__

#ifdef __cplusplus
typedef class Channels Channels;
#else
typedef struct Channels Channels;
#endif /* __cplusplus */

#endif 	/* __Channels_FWD_DEFINED__ */


#ifndef __MessageTypes_FWD_DEFINED__
#define __MessageTypes_FWD_DEFINED__

#ifdef __cplusplus
typedef class MessageTypes MessageTypes;
#else
typedef struct MessageTypes MessageTypes;
#endif /* __cplusplus */

#endif 	/* __MessageTypes_FWD_DEFINED__ */


#ifndef __MessageType_FWD_DEFINED__
#define __MessageType_FWD_DEFINED__

#ifdef __cplusplus
typedef class MessageType MessageType;
#else
typedef struct MessageType MessageType;
#endif /* __cplusplus */

#endif 	/* __MessageType_FWD_DEFINED__ */


#ifndef __ChannelTypes_FWD_DEFINED__
#define __ChannelTypes_FWD_DEFINED__

#ifdef __cplusplus
typedef class ChannelTypes ChannelTypes;
#else
typedef struct ChannelTypes ChannelTypes;
#endif /* __cplusplus */

#endif 	/* __ChannelTypes_FWD_DEFINED__ */


#ifndef __ChannelType_FWD_DEFINED__
#define __ChannelType_FWD_DEFINED__

#ifdef __cplusplus
typedef class ChannelType ChannelType;
#else
typedef struct ChannelType ChannelType;
#endif /* __cplusplus */

#endif 	/* __ChannelType_FWD_DEFINED__ */


#ifndef __Message_FWD_DEFINED__
#define __Message_FWD_DEFINED__

#ifdef __cplusplus
typedef class Message Message;
#else
typedef struct Message Message;
#endif /* __cplusplus */

#endif 	/* __Message_FWD_DEFINED__ */


#ifndef __FileMessage_FWD_DEFINED__
#define __FileMessage_FWD_DEFINED__

#ifdef __cplusplus
typedef class FileMessage FileMessage;
#else
typedef struct FileMessage FileMessage;
#endif /* __cplusplus */

#endif 	/* __FileMessage_FWD_DEFINED__ */


#ifndef __EmailMessage_FWD_DEFINED__
#define __EmailMessage_FWD_DEFINED__

#ifdef __cplusplus
typedef class EmailMessage EmailMessage;
#else
typedef struct EmailMessage EmailMessage;
#endif /* __cplusplus */

#endif 	/* __EmailMessage_FWD_DEFINED__ */


#ifndef __SmsMessage_FWD_DEFINED__
#define __SmsMessage_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmsMessage SmsMessage;
#else
typedef struct SmsMessage SmsMessage;
#endif /* __cplusplus */

#endif 	/* __SmsMessage_FWD_DEFINED__ */


#ifndef __SmppServerBindMessage_FWD_DEFINED__
#define __SmppServerBindMessage_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmppServerBindMessage SmppServerBindMessage;
#else
typedef struct SmppServerBindMessage SmppServerBindMessage;
#endif /* __cplusplus */

#endif 	/* __SmppServerBindMessage_FWD_DEFINED__ */


#ifndef __MessageDB_FWD_DEFINED__
#define __MessageDB_FWD_DEFINED__

#ifdef __cplusplus
typedef class MessageDB MessageDB;
#else
typedef struct MessageDB MessageDB;
#endif /* __cplusplus */

#endif 	/* __MessageDB_FWD_DEFINED__ */


#ifndef __Options_FWD_DEFINED__
#define __Options_FWD_DEFINED__

#ifdef __cplusplus
typedef class Options Options;
#else
typedef struct Options Options;
#endif /* __cplusplus */

#endif 	/* __Options_FWD_DEFINED__ */


#ifndef __Database_FWD_DEFINED__
#define __Database_FWD_DEFINED__

#ifdef __cplusplus
typedef class Database Database;
#else
typedef struct Database Database;
#endif /* __cplusplus */

#endif 	/* __Database_FWD_DEFINED__ */


#ifndef __Trigger_FWD_DEFINED__
#define __Trigger_FWD_DEFINED__

#ifdef __cplusplus
typedef class Trigger Trigger;
#else
typedef struct Trigger Trigger;
#endif /* __cplusplus */

#endif 	/* __Trigger_FWD_DEFINED__ */


#ifndef __Triggers_FWD_DEFINED__
#define __Triggers_FWD_DEFINED__

#ifdef __cplusplus
typedef class Triggers Triggers;
#else
typedef struct Triggers Triggers;
#endif /* __cplusplus */

#endif 	/* __Triggers_FWD_DEFINED__ */


#ifndef __Route_FWD_DEFINED__
#define __Route_FWD_DEFINED__

#ifdef __cplusplus
typedef class Route Route;
#else
typedef struct Route Route;
#endif /* __cplusplus */

#endif 	/* __Route_FWD_DEFINED__ */


#ifndef __Routes_FWD_DEFINED__
#define __Routes_FWD_DEFINED__

#ifdef __cplusplus
typedef class Routes Routes;
#else
typedef struct Routes Routes;
#endif /* __cplusplus */

#endif 	/* __Routes_FWD_DEFINED__ */


#ifndef __BlockedItem_FWD_DEFINED__
#define __BlockedItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class BlockedItem BlockedItem;
#else
typedef struct BlockedItem BlockedItem;
#endif /* __cplusplus */

#endif 	/* __BlockedItem_FWD_DEFINED__ */


#ifndef __BlockedItems_FWD_DEFINED__
#define __BlockedItems_FWD_DEFINED__

#ifdef __cplusplus
typedef class BlockedItems BlockedItems;
#else
typedef struct BlockedItems BlockedItems;
#endif /* __cplusplus */

#endif 	/* __BlockedItems_FWD_DEFINED__ */


#ifndef __Tlv_FWD_DEFINED__
#define __Tlv_FWD_DEFINED__

#ifdef __cplusplus
typedef class Tlv Tlv;
#else
typedef struct Tlv Tlv;
#endif /* __cplusplus */

#endif 	/* __Tlv_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IConstants_INTERFACE_DEFINED__
#define __IConstants_INTERFACE_DEFINED__

/* interface IConstants */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IConstants;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D71B8B47-F039-4324-BBDF-9782994BCA12")
    IConstants : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DATABASETYPE_MSACCESS( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DATABASETYPE_MSSQL( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DATABASETYPE_MYSQL( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DATABASETYPE_OTHER( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FLAG_CREATE_GENERICMESSAGE( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FLAG_SAVE_AS_COPY( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FLAG_SAVE_CREATE( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FLAG_SAVE_MODIFY( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FLAG_SAVE_NOSTATUS( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FLAG_SAVE_DONTNORMALIZE( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FLAG_FINDFIRST_READ_UNCOMMITTED( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FLAG_FINDFIRST_IGNORE_ATTACHMENTS( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FLAG_FINDFIRST_GENERICMESSAGE( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FLAG_FINDFIRST_FROMARCHIVE( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FLAG_LOAD_IGNORE_ATTACHMENTS( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FLAG_LOAD_READ_UNCOMMITTED( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FLAG_LOAD_GENERICMESSAGE( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FLAG_LOAD_FROM_ARCHIVE( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FLAG_RESET_ARCHIVEDATABASE( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SCRIPTTYPE_VBSCRIPT( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SCRIPTTYPE_JAVASCRIPT( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SCRIPTTYPE_SQL( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGEDIRECTION_IN( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGEDIRECTION_OUT( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGESTATUS_CREATING( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGESTATUS_SCHEDULED( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGESTATUS_QUEUED( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGESTATUS_SENDING( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGESTATUS_SENT( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGESTATUS_FAILED( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGESTATUS_BLOCKED( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGESTATUS_NOCHANNEL( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGESTATUS_DAILYLIMIT( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGESTATUS_RECEIVING( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGESTATUS_RECEIVED( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGESTATUS_DELIVERED( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGESTATUS_NOTDELIVERED( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGESTATUS_NOREPORT( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGETRGSTATUS_NA( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGETRGSTATUS_PENDING( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGETRGSTATUS_PROCESSING( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGETRGSTATUS_PROCESSED( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGETRGSTATUS_FAILED( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGETRGSTATUS_NOTRIGGERS( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGETRGSTATUS_NOMATCH( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGEACKSTATUS_NA( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGEACKSTATUS_ACK( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGEACKSTATUS_NACK( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGEACKSTATUS_WAITING( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGEBODYFORMAT_SMS_TEXT( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGEBODYFORMAT_SMS_DATA( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGEBODYFORMAT_SMS_WAPPUSH( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGETYPE_SMS( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGETYPE_EMAIL( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGETYPE_FILE( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MESSAGETYPE_SMPPSERVERBIND( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CHANNELSTATUS_DISCONNECTED( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CHANNELSTATUS_CONNECTING( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CHANNELSTATUS_CONNECTED( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CHANNELSTATUS_DISCONNECTING( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CHANNELSTATUS_ERROR( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BATCHSTATUS_SUCCESS( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BATCHSTATUS_CANCELLED( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BATCHSTATUS_FAILED( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BATCHSTATUS_OPEN( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IConstantsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConstants * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConstants * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConstants * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IConstants * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IConstants * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IConstants * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IConstants * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DATABASETYPE_MSACCESS )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DATABASETYPE_MSSQL )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DATABASETYPE_MYSQL )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DATABASETYPE_OTHER )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FLAG_CREATE_GENERICMESSAGE )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FLAG_SAVE_AS_COPY )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FLAG_SAVE_CREATE )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FLAG_SAVE_MODIFY )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FLAG_SAVE_NOSTATUS )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FLAG_SAVE_DONTNORMALIZE )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FLAG_FINDFIRST_READ_UNCOMMITTED )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FLAG_FINDFIRST_IGNORE_ATTACHMENTS )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FLAG_FINDFIRST_GENERICMESSAGE )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FLAG_FINDFIRST_FROMARCHIVE )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FLAG_LOAD_IGNORE_ATTACHMENTS )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FLAG_LOAD_READ_UNCOMMITTED )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FLAG_LOAD_GENERICMESSAGE )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FLAG_LOAD_FROM_ARCHIVE )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FLAG_RESET_ARCHIVEDATABASE )( 
            IConstants * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SCRIPTTYPE_VBSCRIPT )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SCRIPTTYPE_JAVASCRIPT )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SCRIPTTYPE_SQL )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGEDIRECTION_IN )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGEDIRECTION_OUT )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGESTATUS_CREATING )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGESTATUS_SCHEDULED )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGESTATUS_QUEUED )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGESTATUS_SENDING )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGESTATUS_SENT )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGESTATUS_FAILED )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGESTATUS_BLOCKED )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGESTATUS_NOCHANNEL )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGESTATUS_DAILYLIMIT )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGESTATUS_RECEIVING )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGESTATUS_RECEIVED )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGESTATUS_DELIVERED )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGESTATUS_NOTDELIVERED )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGESTATUS_NOREPORT )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGETRGSTATUS_NA )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGETRGSTATUS_PENDING )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGETRGSTATUS_PROCESSING )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGETRGSTATUS_PROCESSED )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGETRGSTATUS_FAILED )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGETRGSTATUS_NOTRIGGERS )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGETRGSTATUS_NOMATCH )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGEACKSTATUS_NA )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGEACKSTATUS_ACK )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGEACKSTATUS_NACK )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGEACKSTATUS_WAITING )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGEBODYFORMAT_SMS_TEXT )( 
            IConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGEBODYFORMAT_SMS_DATA )( 
            IConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGEBODYFORMAT_SMS_WAPPUSH )( 
            IConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGETYPE_SMS )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGETYPE_EMAIL )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGETYPE_FILE )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MESSAGETYPE_SMPPSERVERBIND )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CHANNELSTATUS_DISCONNECTED )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CHANNELSTATUS_CONNECTING )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CHANNELSTATUS_CONNECTED )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CHANNELSTATUS_DISCONNECTING )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CHANNELSTATUS_ERROR )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BATCHSTATUS_SUCCESS )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BATCHSTATUS_CANCELLED )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BATCHSTATUS_FAILED )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BATCHSTATUS_OPEN )( 
            IConstants * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IConstantsVtbl;

    interface IConstants
    {
        CONST_VTBL struct IConstantsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConstants_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConstants_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConstants_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConstants_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IConstants_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IConstants_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IConstants_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IConstants_get_DATABASETYPE_MSACCESS(This,Value)	\
    ( (This)->lpVtbl -> get_DATABASETYPE_MSACCESS(This,Value) ) 

#define IConstants_get_DATABASETYPE_MSSQL(This,Value)	\
    ( (This)->lpVtbl -> get_DATABASETYPE_MSSQL(This,Value) ) 

#define IConstants_get_DATABASETYPE_MYSQL(This,Value)	\
    ( (This)->lpVtbl -> get_DATABASETYPE_MYSQL(This,Value) ) 

#define IConstants_get_DATABASETYPE_OTHER(This,Value)	\
    ( (This)->lpVtbl -> get_DATABASETYPE_OTHER(This,Value) ) 

#define IConstants_get_FLAG_CREATE_GENERICMESSAGE(This,Value)	\
    ( (This)->lpVtbl -> get_FLAG_CREATE_GENERICMESSAGE(This,Value) ) 

#define IConstants_get_FLAG_SAVE_AS_COPY(This,Value)	\
    ( (This)->lpVtbl -> get_FLAG_SAVE_AS_COPY(This,Value) ) 

#define IConstants_get_FLAG_SAVE_CREATE(This,Value)	\
    ( (This)->lpVtbl -> get_FLAG_SAVE_CREATE(This,Value) ) 

#define IConstants_get_FLAG_SAVE_MODIFY(This,Value)	\
    ( (This)->lpVtbl -> get_FLAG_SAVE_MODIFY(This,Value) ) 

#define IConstants_get_FLAG_SAVE_NOSTATUS(This,Value)	\
    ( (This)->lpVtbl -> get_FLAG_SAVE_NOSTATUS(This,Value) ) 

#define IConstants_get_FLAG_SAVE_DONTNORMALIZE(This,Value)	\
    ( (This)->lpVtbl -> get_FLAG_SAVE_DONTNORMALIZE(This,Value) ) 

#define IConstants_get_FLAG_FINDFIRST_READ_UNCOMMITTED(This,Value)	\
    ( (This)->lpVtbl -> get_FLAG_FINDFIRST_READ_UNCOMMITTED(This,Value) ) 

#define IConstants_get_FLAG_FINDFIRST_IGNORE_ATTACHMENTS(This,Value)	\
    ( (This)->lpVtbl -> get_FLAG_FINDFIRST_IGNORE_ATTACHMENTS(This,Value) ) 

#define IConstants_get_FLAG_FINDFIRST_GENERICMESSAGE(This,Value)	\
    ( (This)->lpVtbl -> get_FLAG_FINDFIRST_GENERICMESSAGE(This,Value) ) 

#define IConstants_get_FLAG_FINDFIRST_FROMARCHIVE(This,Value)	\
    ( (This)->lpVtbl -> get_FLAG_FINDFIRST_FROMARCHIVE(This,Value) ) 

#define IConstants_get_FLAG_LOAD_IGNORE_ATTACHMENTS(This,Value)	\
    ( (This)->lpVtbl -> get_FLAG_LOAD_IGNORE_ATTACHMENTS(This,Value) ) 

#define IConstants_get_FLAG_LOAD_READ_UNCOMMITTED(This,Value)	\
    ( (This)->lpVtbl -> get_FLAG_LOAD_READ_UNCOMMITTED(This,Value) ) 

#define IConstants_get_FLAG_LOAD_GENERICMESSAGE(This,Value)	\
    ( (This)->lpVtbl -> get_FLAG_LOAD_GENERICMESSAGE(This,Value) ) 

#define IConstants_get_FLAG_LOAD_FROM_ARCHIVE(This,Value)	\
    ( (This)->lpVtbl -> get_FLAG_LOAD_FROM_ARCHIVE(This,Value) ) 

#define IConstants_get_FLAG_RESET_ARCHIVEDATABASE(This,Value)	\
    ( (This)->lpVtbl -> get_FLAG_RESET_ARCHIVEDATABASE(This,Value) ) 

#define IConstants_get_SCRIPTTYPE_VBSCRIPT(This,pVal)	\
    ( (This)->lpVtbl -> get_SCRIPTTYPE_VBSCRIPT(This,pVal) ) 

#define IConstants_get_SCRIPTTYPE_JAVASCRIPT(This,pVal)	\
    ( (This)->lpVtbl -> get_SCRIPTTYPE_JAVASCRIPT(This,pVal) ) 

#define IConstants_get_SCRIPTTYPE_SQL(This,pVal)	\
    ( (This)->lpVtbl -> get_SCRIPTTYPE_SQL(This,pVal) ) 

#define IConstants_get_MESSAGEDIRECTION_IN(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGEDIRECTION_IN(This,pVal) ) 

#define IConstants_get_MESSAGEDIRECTION_OUT(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGEDIRECTION_OUT(This,pVal) ) 

#define IConstants_get_MESSAGESTATUS_CREATING(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGESTATUS_CREATING(This,pVal) ) 

#define IConstants_get_MESSAGESTATUS_SCHEDULED(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGESTATUS_SCHEDULED(This,pVal) ) 

#define IConstants_get_MESSAGESTATUS_QUEUED(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGESTATUS_QUEUED(This,pVal) ) 

#define IConstants_get_MESSAGESTATUS_SENDING(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGESTATUS_SENDING(This,pVal) ) 

#define IConstants_get_MESSAGESTATUS_SENT(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGESTATUS_SENT(This,pVal) ) 

#define IConstants_get_MESSAGESTATUS_FAILED(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGESTATUS_FAILED(This,pVal) ) 

#define IConstants_get_MESSAGESTATUS_BLOCKED(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGESTATUS_BLOCKED(This,pVal) ) 

#define IConstants_get_MESSAGESTATUS_NOCHANNEL(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGESTATUS_NOCHANNEL(This,pVal) ) 

#define IConstants_get_MESSAGESTATUS_DAILYLIMIT(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGESTATUS_DAILYLIMIT(This,pVal) ) 

#define IConstants_get_MESSAGESTATUS_RECEIVING(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGESTATUS_RECEIVING(This,pVal) ) 

#define IConstants_get_MESSAGESTATUS_RECEIVED(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGESTATUS_RECEIVED(This,pVal) ) 

#define IConstants_get_MESSAGESTATUS_DELIVERED(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGESTATUS_DELIVERED(This,pVal) ) 

#define IConstants_get_MESSAGESTATUS_NOTDELIVERED(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGESTATUS_NOTDELIVERED(This,pVal) ) 

#define IConstants_get_MESSAGESTATUS_NOREPORT(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGESTATUS_NOREPORT(This,pVal) ) 

#define IConstants_get_MESSAGETRGSTATUS_NA(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGETRGSTATUS_NA(This,pVal) ) 

#define IConstants_get_MESSAGETRGSTATUS_PENDING(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGETRGSTATUS_PENDING(This,pVal) ) 

#define IConstants_get_MESSAGETRGSTATUS_PROCESSING(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGETRGSTATUS_PROCESSING(This,pVal) ) 

#define IConstants_get_MESSAGETRGSTATUS_PROCESSED(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGETRGSTATUS_PROCESSED(This,pVal) ) 

#define IConstants_get_MESSAGETRGSTATUS_FAILED(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGETRGSTATUS_FAILED(This,pVal) ) 

#define IConstants_get_MESSAGETRGSTATUS_NOTRIGGERS(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGETRGSTATUS_NOTRIGGERS(This,pVal) ) 

#define IConstants_get_MESSAGETRGSTATUS_NOMATCH(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGETRGSTATUS_NOMATCH(This,pVal) ) 

#define IConstants_get_MESSAGEACKSTATUS_NA(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGEACKSTATUS_NA(This,pVal) ) 

#define IConstants_get_MESSAGEACKSTATUS_ACK(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGEACKSTATUS_ACK(This,pVal) ) 

#define IConstants_get_MESSAGEACKSTATUS_NACK(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGEACKSTATUS_NACK(This,pVal) ) 

#define IConstants_get_MESSAGEACKSTATUS_WAITING(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGEACKSTATUS_WAITING(This,pVal) ) 

#define IConstants_get_MESSAGEBODYFORMAT_SMS_TEXT(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGEBODYFORMAT_SMS_TEXT(This,pVal) ) 

#define IConstants_get_MESSAGEBODYFORMAT_SMS_DATA(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGEBODYFORMAT_SMS_DATA(This,pVal) ) 

#define IConstants_get_MESSAGEBODYFORMAT_SMS_WAPPUSH(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGEBODYFORMAT_SMS_WAPPUSH(This,pVal) ) 

#define IConstants_get_MESSAGETYPE_SMS(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGETYPE_SMS(This,pVal) ) 

#define IConstants_get_MESSAGETYPE_EMAIL(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGETYPE_EMAIL(This,pVal) ) 

#define IConstants_get_MESSAGETYPE_FILE(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGETYPE_FILE(This,pVal) ) 

#define IConstants_get_MESSAGETYPE_SMPPSERVERBIND(This,pVal)	\
    ( (This)->lpVtbl -> get_MESSAGETYPE_SMPPSERVERBIND(This,pVal) ) 

#define IConstants_get_CHANNELSTATUS_DISCONNECTED(This,pVal)	\
    ( (This)->lpVtbl -> get_CHANNELSTATUS_DISCONNECTED(This,pVal) ) 

#define IConstants_get_CHANNELSTATUS_CONNECTING(This,pVal)	\
    ( (This)->lpVtbl -> get_CHANNELSTATUS_CONNECTING(This,pVal) ) 

#define IConstants_get_CHANNELSTATUS_CONNECTED(This,pVal)	\
    ( (This)->lpVtbl -> get_CHANNELSTATUS_CONNECTED(This,pVal) ) 

#define IConstants_get_CHANNELSTATUS_DISCONNECTING(This,pVal)	\
    ( (This)->lpVtbl -> get_CHANNELSTATUS_DISCONNECTING(This,pVal) ) 

#define IConstants_get_CHANNELSTATUS_ERROR(This,pVal)	\
    ( (This)->lpVtbl -> get_CHANNELSTATUS_ERROR(This,pVal) ) 

#define IConstants_get_BATCHSTATUS_SUCCESS(This,pVal)	\
    ( (This)->lpVtbl -> get_BATCHSTATUS_SUCCESS(This,pVal) ) 

#define IConstants_get_BATCHSTATUS_CANCELLED(This,pVal)	\
    ( (This)->lpVtbl -> get_BATCHSTATUS_CANCELLED(This,pVal) ) 

#define IConstants_get_BATCHSTATUS_FAILED(This,pVal)	\
    ( (This)->lpVtbl -> get_BATCHSTATUS_FAILED(This,pVal) ) 

#define IConstants_get_BATCHSTATUS_OPEN(This,pVal)	\
    ( (This)->lpVtbl -> get_BATCHSTATUS_OPEN(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConstants_INTERFACE_DEFINED__ */


#ifndef __IInfo_INTERFACE_DEFINED__
#define __IInfo_INTERFACE_DEFINED__

/* interface IInfo */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("623B97B9-7FD2-45D9-8679-EC8ED2C210D1")
    IInfo : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *Value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IInfo * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IInfo * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IInfo * This,
            /* [retval][out] */ BSTR *Value);
        
        END_INTERFACE
    } IInfoVtbl;

    interface IInfo
    {
        CONST_VTBL struct IInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInfo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IInfo_get_Version(This,Value)	\
    ( (This)->lpVtbl -> get_Version(This,Value) ) 

#define IInfo_get_Build(This,Value)	\
    ( (This)->lpVtbl -> get_Build(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInfo_INTERFACE_DEFINED__ */


#ifndef __IAxStatic_INTERFACE_DEFINED__
#define __IAxStatic_INTERFACE_DEFINED__

/* interface IAxStatic */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAxStatic;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E4A64838-5934-4D40-9729-E1AFAEE6F7D4")
    IAxStatic : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            long ErrorID,
            /* [retval][out] */ BSTR *ErrorString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSmsChannels( 
            /* [retval][out] */ BSTR *sChannels) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SendSms( 
            /* [in] */ BSTR sChannelID,
            /* [in] */ BSTR sToAddress,
            /* [in] */ BSTR sBody) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAxStaticVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAxStatic * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAxStatic * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAxStatic * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAxStatic * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAxStatic * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAxStatic * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAxStatic * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IAxStatic * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IAxStatic * This,
            long ErrorID,
            /* [retval][out] */ BSTR *ErrorString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSmsChannels )( 
            IAxStatic * This,
            /* [retval][out] */ BSTR *sChannels);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SendSms )( 
            IAxStatic * This,
            /* [in] */ BSTR sChannelID,
            /* [in] */ BSTR sToAddress,
            /* [in] */ BSTR sBody);
        
        END_INTERFACE
    } IAxStaticVtbl;

    interface IAxStatic
    {
        CONST_VTBL struct IAxStaticVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAxStatic_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAxStatic_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAxStatic_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAxStatic_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAxStatic_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAxStatic_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAxStatic_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAxStatic_get_LastError(This,Value)	\
    ( (This)->lpVtbl -> get_LastError(This,Value) ) 

#define IAxStatic_GetErrorDescription(This,ErrorID,ErrorString)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorID,ErrorString) ) 

#define IAxStatic_GetSmsChannels(This,sChannels)	\
    ( (This)->lpVtbl -> GetSmsChannels(This,sChannels) ) 

#define IAxStatic_SendSms(This,sChannelID,sToAddress,sBody)	\
    ( (This)->lpVtbl -> SendSms(This,sChannelID,sToAddress,sBody) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAxStatic_INTERFACE_DEFINED__ */


#ifndef __IChannel_INTERFACE_DEFINED__
#define __IChannel_INTERFACE_DEFINED__

/* interface IChannel */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IChannel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8167A519-EF17-4C38-BF4D-E1F97AEAC65A")
    IChannel : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ID( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ChannelTypeID( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DailyLimit( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DailyLimit( 
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableSend( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableSend( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableReceive( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableReceive( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MessageTypeID( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MessageTypeID( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Detached( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Detached( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxQueueSize( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_QueueTimeoutSec( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxQueueSize( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_QueueTimeoutSec( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StatusID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StatusID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectedSessions( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectedSessions( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FieldCount( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFieldNameFromIndex( 
            /* [in] */ long ID,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValueRequired( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValueType( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValue( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ BSTR sField,
            /* [in] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPasswordValue( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPasswordValue( 
            /* [in] */ BSTR sField,
            /* [in] */ BSTR Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IChannelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IChannel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IChannel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IChannel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IChannel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IChannel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IChannel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IChannel * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IChannel * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IChannel * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IChannel * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChannelTypeID )( 
            IChannel * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IChannel * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IChannel * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IChannel * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IChannel * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DailyLimit )( 
            IChannel * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DailyLimit )( 
            IChannel * This,
            /* [in] */ long Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableSend )( 
            IChannel * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableSend )( 
            IChannel * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableReceive )( 
            IChannel * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableReceive )( 
            IChannel * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MessageTypeID )( 
            IChannel * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MessageTypeID )( 
            IChannel * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Detached )( 
            IChannel * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Detached )( 
            IChannel * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxQueueSize )( 
            IChannel * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_QueueTimeoutSec )( 
            IChannel * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxQueueSize )( 
            IChannel * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_QueueTimeoutSec )( 
            IChannel * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusID )( 
            IChannel * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusID )( 
            IChannel * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedSessions )( 
            IChannel * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectedSessions )( 
            IChannel * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FieldCount )( 
            IChannel * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFieldNameFromIndex )( 
            IChannel * This,
            /* [in] */ long ID,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValueRequired )( 
            IChannel * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValueType )( 
            IChannel * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            IChannel * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            IChannel * This,
            /* [in] */ BSTR sField,
            /* [in] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPasswordValue )( 
            IChannel * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPasswordValue )( 
            IChannel * This,
            /* [in] */ BSTR sField,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } IChannelVtbl;

    interface IChannel
    {
        CONST_VTBL struct IChannelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IChannel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IChannel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IChannel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IChannel_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IChannel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IChannel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IChannel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IChannel_get_LastError(This,Value)	\
    ( (This)->lpVtbl -> get_LastError(This,Value) ) 

#define IChannel_get_ID(This,Value)	\
    ( (This)->lpVtbl -> get_ID(This,Value) ) 

#define IChannel_put_ID(This,Value)	\
    ( (This)->lpVtbl -> put_ID(This,Value) ) 

#define IChannel_get_ChannelTypeID(This,Value)	\
    ( (This)->lpVtbl -> get_ChannelTypeID(This,Value) ) 

#define IChannel_get_Enabled(This,Value)	\
    ( (This)->lpVtbl -> get_Enabled(This,Value) ) 

#define IChannel_put_Enabled(This,Value)	\
    ( (This)->lpVtbl -> put_Enabled(This,Value) ) 

#define IChannel_get_Description(This,Value)	\
    ( (This)->lpVtbl -> get_Description(This,Value) ) 

#define IChannel_put_Description(This,Value)	\
    ( (This)->lpVtbl -> put_Description(This,Value) ) 

#define IChannel_get_DailyLimit(This,Value)	\
    ( (This)->lpVtbl -> get_DailyLimit(This,Value) ) 

#define IChannel_put_DailyLimit(This,Value)	\
    ( (This)->lpVtbl -> put_DailyLimit(This,Value) ) 

#define IChannel_get_EnableSend(This,Value)	\
    ( (This)->lpVtbl -> get_EnableSend(This,Value) ) 

#define IChannel_put_EnableSend(This,Value)	\
    ( (This)->lpVtbl -> put_EnableSend(This,Value) ) 

#define IChannel_get_EnableReceive(This,Value)	\
    ( (This)->lpVtbl -> get_EnableReceive(This,Value) ) 

#define IChannel_put_EnableReceive(This,Value)	\
    ( (This)->lpVtbl -> put_EnableReceive(This,Value) ) 

#define IChannel_get_MessageTypeID(This,Value)	\
    ( (This)->lpVtbl -> get_MessageTypeID(This,Value) ) 

#define IChannel_put_MessageTypeID(This,Value)	\
    ( (This)->lpVtbl -> put_MessageTypeID(This,Value) ) 

#define IChannel_put_Detached(This,Val)	\
    ( (This)->lpVtbl -> put_Detached(This,Val) ) 

#define IChannel_get_Detached(This,pVal)	\
    ( (This)->lpVtbl -> get_Detached(This,pVal) ) 

#define IChannel_put_MaxQueueSize(This,Val)	\
    ( (This)->lpVtbl -> put_MaxQueueSize(This,Val) ) 

#define IChannel_put_QueueTimeoutSec(This,Val)	\
    ( (This)->lpVtbl -> put_QueueTimeoutSec(This,Val) ) 

#define IChannel_get_MaxQueueSize(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxQueueSize(This,pVal) ) 

#define IChannel_get_QueueTimeoutSec(This,pVal)	\
    ( (This)->lpVtbl -> get_QueueTimeoutSec(This,pVal) ) 

#define IChannel_get_StatusID(This,pVal)	\
    ( (This)->lpVtbl -> get_StatusID(This,pVal) ) 

#define IChannel_put_StatusID(This,Val)	\
    ( (This)->lpVtbl -> put_StatusID(This,Val) ) 

#define IChannel_get_ConnectedSessions(This,pVal)	\
    ( (This)->lpVtbl -> get_ConnectedSessions(This,pVal) ) 

#define IChannel_put_ConnectedSessions(This,Val)	\
    ( (This)->lpVtbl -> put_ConnectedSessions(This,Val) ) 

#define IChannel_get_FieldCount(This,Value)	\
    ( (This)->lpVtbl -> get_FieldCount(This,Value) ) 

#define IChannel_GetFieldNameFromIndex(This,ID,Value)	\
    ( (This)->lpVtbl -> GetFieldNameFromIndex(This,ID,Value) ) 

#define IChannel_GetValueRequired(This,sField,Value)	\
    ( (This)->lpVtbl -> GetValueRequired(This,sField,Value) ) 

#define IChannel_GetValueType(This,sField,Value)	\
    ( (This)->lpVtbl -> GetValueType(This,sField,Value) ) 

#define IChannel_GetValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> GetValue(This,sField,pVal) ) 

#define IChannel_SetValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> SetValue(This,sField,pVal) ) 

#define IChannel_GetPasswordValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> GetPasswordValue(This,sField,pVal) ) 

#define IChannel_SetPasswordValue(This,sField,Val)	\
    ( (This)->lpVtbl -> SetPasswordValue(This,sField,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IChannel_INTERFACE_DEFINED__ */


#ifndef __IChannels_INTERFACE_DEFINED__
#define __IChannels_INTERFACE_DEFINED__

/* interface IChannels */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IChannels;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C973BB81-BD42-44D5-8000-3378186A8D3F")
    IChannels : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ BSTR Type,
            /* [retval][out] */ IChannel **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR ChannelID,
            /* [retval][out] */ IChannel **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ IChannel *Channel,
            /* [defaultvalue][in] */ LONG Flags = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ BSTR Type,
            /* [in] */ BSTR Filter) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindFirstChannel( 
            /* [defaultvalue][in] */ BSTR Type,
            /* [defaultvalue][in] */ BSTR Filter,
            /* [retval][out] */ IChannel **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindNextChannel( 
            /* [retval][out] */ IChannel **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasUpdate( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasShutdown( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasStatusUpdate( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NotifyUpdate( 
            /* [defaultvalue][in] */ BSTR ChannelID = (BSTR)L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NotifyShutdown( 
            /* [defaultvalue][in] */ BSTR ChannelID = (BSTR)L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NotifyStatusUpdate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartChangeListening( 
            /* [defaultvalue][in] */ BSTR ChannelID = (BSTR)L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopChangeListening( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IChannelsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IChannels * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IChannels * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IChannels * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IChannels * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IChannels * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IChannels * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IChannels * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IChannels * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IChannels * This,
            /* [in] */ BSTR Type,
            /* [retval][out] */ IChannel **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IChannels * This,
            /* [in] */ BSTR ChannelID,
            /* [retval][out] */ IChannel **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IChannels * This,
            /* [in] */ IChannel *Channel,
            /* [defaultvalue][in] */ LONG Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IChannels * This,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR Filter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindFirstChannel )( 
            IChannels * This,
            /* [defaultvalue][in] */ BSTR Type,
            /* [defaultvalue][in] */ BSTR Filter,
            /* [retval][out] */ IChannel **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindNextChannel )( 
            IChannels * This,
            /* [retval][out] */ IChannel **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasUpdate )( 
            IChannels * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasShutdown )( 
            IChannels * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasStatusUpdate )( 
            IChannels * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NotifyUpdate )( 
            IChannels * This,
            /* [defaultvalue][in] */ BSTR ChannelID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NotifyShutdown )( 
            IChannels * This,
            /* [defaultvalue][in] */ BSTR ChannelID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NotifyStatusUpdate )( 
            IChannels * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartChangeListening )( 
            IChannels * This,
            /* [defaultvalue][in] */ BSTR ChannelID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StopChangeListening )( 
            IChannels * This);
        
        END_INTERFACE
    } IChannelsVtbl;

    interface IChannels
    {
        CONST_VTBL struct IChannelsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IChannels_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IChannels_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IChannels_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IChannels_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IChannels_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IChannels_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IChannels_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IChannels_get_LastError(This,Value)	\
    ( (This)->lpVtbl -> get_LastError(This,Value) ) 

#define IChannels_Create(This,Type,ppVal)	\
    ( (This)->lpVtbl -> Create(This,Type,ppVal) ) 

#define IChannels_Load(This,ChannelID,ppVal)	\
    ( (This)->lpVtbl -> Load(This,ChannelID,ppVal) ) 

#define IChannels_Save(This,Channel,Flags)	\
    ( (This)->lpVtbl -> Save(This,Channel,Flags) ) 

#define IChannels_Delete(This,Type,Filter)	\
    ( (This)->lpVtbl -> Delete(This,Type,Filter) ) 

#define IChannels_FindFirstChannel(This,Type,Filter,ppVal)	\
    ( (This)->lpVtbl -> FindFirstChannel(This,Type,Filter,ppVal) ) 

#define IChannels_FindNextChannel(This,ppVal)	\
    ( (This)->lpVtbl -> FindNextChannel(This,ppVal) ) 

#define IChannels_HasUpdate(This,pVal)	\
    ( (This)->lpVtbl -> HasUpdate(This,pVal) ) 

#define IChannels_HasShutdown(This,pVal)	\
    ( (This)->lpVtbl -> HasShutdown(This,pVal) ) 

#define IChannels_HasStatusUpdate(This,pVal)	\
    ( (This)->lpVtbl -> HasStatusUpdate(This,pVal) ) 

#define IChannels_NotifyUpdate(This,ChannelID)	\
    ( (This)->lpVtbl -> NotifyUpdate(This,ChannelID) ) 

#define IChannels_NotifyShutdown(This,ChannelID)	\
    ( (This)->lpVtbl -> NotifyShutdown(This,ChannelID) ) 

#define IChannels_NotifyStatusUpdate(This)	\
    ( (This)->lpVtbl -> NotifyStatusUpdate(This) ) 

#define IChannels_StartChangeListening(This,ChannelID)	\
    ( (This)->lpVtbl -> StartChangeListening(This,ChannelID) ) 

#define IChannels_StopChangeListening(This)	\
    ( (This)->lpVtbl -> StopChangeListening(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IChannels_INTERFACE_DEFINED__ */


#ifndef __ICampaign_INTERFACE_DEFINED__
#define __ICampaign_INTERFACE_DEFINED__

/* interface ICampaign */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICampaign;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FD971594-50A4-4377-AA58-DB3EFBD642D4")
    ICampaign : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ChannelID( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MessageTypeID( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GenerateBatchRecord( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DataSource( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DatabaseEngine( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AccessDatabasePath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AccessDatabasePassword( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AccessDatabaseTable( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MsSqlServer( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MsSqlUseWindowsAuth( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MsSqlLogin( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MsSqlPassword( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MsSqlDatabase( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MsSqlTable( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MySqlServer( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MySqlPort( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MySqlLogin( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MySqlPassword( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MySqlDatabase( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MySqlTable( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GenericDbConnectionString( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GenericDbTable( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExcelPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExcelSheet( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExcelFirstRowIsHeader( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExcelSkipDuplicates( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CsvFile( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CsvDelimiter( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CsvTextQualifier( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CsvFirstRowIsHeader( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CsvSkipDuplicateRows( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LdapHost( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LdapLogin( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LdapPassword( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmsRecipientField( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmsFormat( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmsCharacterSet( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmsPriority( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmsValidityMin( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmsFlash( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmsUdh( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EmailRecipientField( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EmailCc( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EmailBcc( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EmailPriority( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EmailHtmlToPlainText( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EmailSubject( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmsMaxLength( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmsMessage( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EmailAttachments( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EmailMessagePlain( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EmailMessageHtml( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmsAttachments( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ID( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ChannelID( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MessageTypeID( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GenerateBatchRecord( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DataSource( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DatabaseEngine( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AccessDatabasePath( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AccessDatabasePassword( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AccessDatabaseTable( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MsSqlServer( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MsSqlUseWindowsAuth( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MsSqlLogin( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MsSqlPassword( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MsSqlDatabase( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MsSqlTable( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MySqlServer( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MySqlPort( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MySqlLogin( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MySqlPassword( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MySqlDatabase( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MySqlTable( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GenericDbConnectionString( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GenericDbTable( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExcelPath( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExcelSheet( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExcelFirstRowIsHeader( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExcelSkipDuplicates( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CsvFile( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CsvDelimiter( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CsvTextQualifier( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CsvFirstRowIsHeader( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CsvSkipDuplicateRows( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LdapHost( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LdapLogin( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LdapPassword( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmsRecipientField( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmsFormat( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmsCharacterSet( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmsPriority( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmsValidityMin( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmsFlash( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmsUdh( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EmailRecipientField( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EmailCc( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EmailBcc( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EmailPriority( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EmailHtmlToPlainText( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EmailSubject( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmsMaxLength( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmsMessage( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EmailAttachments( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EmailMessagePlain( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EmailMessageHtml( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmsAttachments( 
            /* [in] */ BSTR Value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICampaignVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICampaign * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICampaign * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICampaign * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICampaign * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICampaign * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICampaign * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICampaign * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ICampaign * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChannelID )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MessageTypeID )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GenerateBatchRecord )( 
            ICampaign * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSource )( 
            ICampaign * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DatabaseEngine )( 
            ICampaign * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AccessDatabasePath )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AccessDatabasePassword )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AccessDatabaseTable )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MsSqlServer )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MsSqlUseWindowsAuth )( 
            ICampaign * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MsSqlLogin )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MsSqlPassword )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MsSqlDatabase )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MsSqlTable )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MySqlServer )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MySqlPort )( 
            ICampaign * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MySqlLogin )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MySqlPassword )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MySqlDatabase )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MySqlTable )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GenericDbConnectionString )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GenericDbTable )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExcelPath )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExcelSheet )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExcelFirstRowIsHeader )( 
            ICampaign * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExcelSkipDuplicates )( 
            ICampaign * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CsvFile )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CsvDelimiter )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CsvTextQualifier )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CsvFirstRowIsHeader )( 
            ICampaign * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CsvSkipDuplicateRows )( 
            ICampaign * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LdapHost )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LdapLogin )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LdapPassword )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmsRecipientField )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmsFormat )( 
            ICampaign * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmsCharacterSet )( 
            ICampaign * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmsPriority )( 
            ICampaign * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmsValidityMin )( 
            ICampaign * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmsFlash )( 
            ICampaign * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmsUdh )( 
            ICampaign * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EmailRecipientField )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EmailCc )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EmailBcc )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EmailPriority )( 
            ICampaign * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EmailHtmlToPlainText )( 
            ICampaign * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EmailSubject )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmsMaxLength )( 
            ICampaign * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmsMessage )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EmailAttachments )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EmailMessagePlain )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EmailMessageHtml )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmsAttachments )( 
            ICampaign * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ChannelID )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MessageTypeID )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GenerateBatchRecord )( 
            ICampaign * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSource )( 
            ICampaign * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DatabaseEngine )( 
            ICampaign * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AccessDatabasePath )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AccessDatabasePassword )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AccessDatabaseTable )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MsSqlServer )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MsSqlUseWindowsAuth )( 
            ICampaign * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MsSqlLogin )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MsSqlPassword )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MsSqlDatabase )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MsSqlTable )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MySqlServer )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MySqlPort )( 
            ICampaign * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MySqlLogin )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MySqlPassword )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MySqlDatabase )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MySqlTable )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GenericDbConnectionString )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GenericDbTable )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExcelPath )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExcelSheet )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExcelFirstRowIsHeader )( 
            ICampaign * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExcelSkipDuplicates )( 
            ICampaign * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CsvFile )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CsvDelimiter )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CsvTextQualifier )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CsvFirstRowIsHeader )( 
            ICampaign * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CsvSkipDuplicateRows )( 
            ICampaign * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LdapHost )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LdapLogin )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LdapPassword )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmsRecipientField )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmsFormat )( 
            ICampaign * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmsCharacterSet )( 
            ICampaign * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmsPriority )( 
            ICampaign * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmsValidityMin )( 
            ICampaign * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmsFlash )( 
            ICampaign * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmsUdh )( 
            ICampaign * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EmailRecipientField )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EmailCc )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EmailBcc )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EmailPriority )( 
            ICampaign * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EmailHtmlToPlainText )( 
            ICampaign * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EmailSubject )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmsMaxLength )( 
            ICampaign * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmsMessage )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EmailAttachments )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EmailMessagePlain )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EmailMessageHtml )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmsAttachments )( 
            ICampaign * This,
            /* [in] */ BSTR Value);
        
        END_INTERFACE
    } ICampaignVtbl;

    interface ICampaign
    {
        CONST_VTBL struct ICampaignVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICampaign_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICampaign_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICampaign_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICampaign_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICampaign_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICampaign_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICampaign_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICampaign_get_LastError(This,Value)	\
    ( (This)->lpVtbl -> get_LastError(This,Value) ) 

#define ICampaign_get_ID(This,Value)	\
    ( (This)->lpVtbl -> get_ID(This,Value) ) 

#define ICampaign_get_Description(This,Value)	\
    ( (This)->lpVtbl -> get_Description(This,Value) ) 

#define ICampaign_get_ChannelID(This,Value)	\
    ( (This)->lpVtbl -> get_ChannelID(This,Value) ) 

#define ICampaign_get_MessageTypeID(This,Value)	\
    ( (This)->lpVtbl -> get_MessageTypeID(This,Value) ) 

#define ICampaign_get_GenerateBatchRecord(This,Value)	\
    ( (This)->lpVtbl -> get_GenerateBatchRecord(This,Value) ) 

#define ICampaign_get_DataSource(This,Value)	\
    ( (This)->lpVtbl -> get_DataSource(This,Value) ) 

#define ICampaign_get_DatabaseEngine(This,Value)	\
    ( (This)->lpVtbl -> get_DatabaseEngine(This,Value) ) 

#define ICampaign_get_AccessDatabasePath(This,Value)	\
    ( (This)->lpVtbl -> get_AccessDatabasePath(This,Value) ) 

#define ICampaign_get_AccessDatabasePassword(This,Value)	\
    ( (This)->lpVtbl -> get_AccessDatabasePassword(This,Value) ) 

#define ICampaign_get_AccessDatabaseTable(This,Value)	\
    ( (This)->lpVtbl -> get_AccessDatabaseTable(This,Value) ) 

#define ICampaign_get_MsSqlServer(This,Value)	\
    ( (This)->lpVtbl -> get_MsSqlServer(This,Value) ) 

#define ICampaign_get_MsSqlUseWindowsAuth(This,Value)	\
    ( (This)->lpVtbl -> get_MsSqlUseWindowsAuth(This,Value) ) 

#define ICampaign_get_MsSqlLogin(This,Value)	\
    ( (This)->lpVtbl -> get_MsSqlLogin(This,Value) ) 

#define ICampaign_get_MsSqlPassword(This,Value)	\
    ( (This)->lpVtbl -> get_MsSqlPassword(This,Value) ) 

#define ICampaign_get_MsSqlDatabase(This,Value)	\
    ( (This)->lpVtbl -> get_MsSqlDatabase(This,Value) ) 

#define ICampaign_get_MsSqlTable(This,Value)	\
    ( (This)->lpVtbl -> get_MsSqlTable(This,Value) ) 

#define ICampaign_get_MySqlServer(This,Value)	\
    ( (This)->lpVtbl -> get_MySqlServer(This,Value) ) 

#define ICampaign_get_MySqlPort(This,Value)	\
    ( (This)->lpVtbl -> get_MySqlPort(This,Value) ) 

#define ICampaign_get_MySqlLogin(This,Value)	\
    ( (This)->lpVtbl -> get_MySqlLogin(This,Value) ) 

#define ICampaign_get_MySqlPassword(This,Value)	\
    ( (This)->lpVtbl -> get_MySqlPassword(This,Value) ) 

#define ICampaign_get_MySqlDatabase(This,Value)	\
    ( (This)->lpVtbl -> get_MySqlDatabase(This,Value) ) 

#define ICampaign_get_MySqlTable(This,Value)	\
    ( (This)->lpVtbl -> get_MySqlTable(This,Value) ) 

#define ICampaign_get_GenericDbConnectionString(This,Value)	\
    ( (This)->lpVtbl -> get_GenericDbConnectionString(This,Value) ) 

#define ICampaign_get_GenericDbTable(This,Value)	\
    ( (This)->lpVtbl -> get_GenericDbTable(This,Value) ) 

#define ICampaign_get_ExcelPath(This,Value)	\
    ( (This)->lpVtbl -> get_ExcelPath(This,Value) ) 

#define ICampaign_get_ExcelSheet(This,Value)	\
    ( (This)->lpVtbl -> get_ExcelSheet(This,Value) ) 

#define ICampaign_get_ExcelFirstRowIsHeader(This,Value)	\
    ( (This)->lpVtbl -> get_ExcelFirstRowIsHeader(This,Value) ) 

#define ICampaign_get_ExcelSkipDuplicates(This,Value)	\
    ( (This)->lpVtbl -> get_ExcelSkipDuplicates(This,Value) ) 

#define ICampaign_get_CsvFile(This,Value)	\
    ( (This)->lpVtbl -> get_CsvFile(This,Value) ) 

#define ICampaign_get_CsvDelimiter(This,Value)	\
    ( (This)->lpVtbl -> get_CsvDelimiter(This,Value) ) 

#define ICampaign_get_CsvTextQualifier(This,Value)	\
    ( (This)->lpVtbl -> get_CsvTextQualifier(This,Value) ) 

#define ICampaign_get_CsvFirstRowIsHeader(This,Value)	\
    ( (This)->lpVtbl -> get_CsvFirstRowIsHeader(This,Value) ) 

#define ICampaign_get_CsvSkipDuplicateRows(This,Value)	\
    ( (This)->lpVtbl -> get_CsvSkipDuplicateRows(This,Value) ) 

#define ICampaign_get_LdapHost(This,Value)	\
    ( (This)->lpVtbl -> get_LdapHost(This,Value) ) 

#define ICampaign_get_LdapLogin(This,Value)	\
    ( (This)->lpVtbl -> get_LdapLogin(This,Value) ) 

#define ICampaign_get_LdapPassword(This,Value)	\
    ( (This)->lpVtbl -> get_LdapPassword(This,Value) ) 

#define ICampaign_get_SmsRecipientField(This,Value)	\
    ( (This)->lpVtbl -> get_SmsRecipientField(This,Value) ) 

#define ICampaign_get_SmsFormat(This,Value)	\
    ( (This)->lpVtbl -> get_SmsFormat(This,Value) ) 

#define ICampaign_get_SmsCharacterSet(This,Value)	\
    ( (This)->lpVtbl -> get_SmsCharacterSet(This,Value) ) 

#define ICampaign_get_SmsPriority(This,Value)	\
    ( (This)->lpVtbl -> get_SmsPriority(This,Value) ) 

#define ICampaign_get_SmsValidityMin(This,Value)	\
    ( (This)->lpVtbl -> get_SmsValidityMin(This,Value) ) 

#define ICampaign_get_SmsFlash(This,Value)	\
    ( (This)->lpVtbl -> get_SmsFlash(This,Value) ) 

#define ICampaign_get_SmsUdh(This,Value)	\
    ( (This)->lpVtbl -> get_SmsUdh(This,Value) ) 

#define ICampaign_get_EmailRecipientField(This,Value)	\
    ( (This)->lpVtbl -> get_EmailRecipientField(This,Value) ) 

#define ICampaign_get_EmailCc(This,Value)	\
    ( (This)->lpVtbl -> get_EmailCc(This,Value) ) 

#define ICampaign_get_EmailBcc(This,Value)	\
    ( (This)->lpVtbl -> get_EmailBcc(This,Value) ) 

#define ICampaign_get_EmailPriority(This,Value)	\
    ( (This)->lpVtbl -> get_EmailPriority(This,Value) ) 

#define ICampaign_get_EmailHtmlToPlainText(This,Value)	\
    ( (This)->lpVtbl -> get_EmailHtmlToPlainText(This,Value) ) 

#define ICampaign_get_EmailSubject(This,Value)	\
    ( (This)->lpVtbl -> get_EmailSubject(This,Value) ) 

#define ICampaign_get_SmsMaxLength(This,Value)	\
    ( (This)->lpVtbl -> get_SmsMaxLength(This,Value) ) 

#define ICampaign_get_SmsMessage(This,Value)	\
    ( (This)->lpVtbl -> get_SmsMessage(This,Value) ) 

#define ICampaign_get_EmailAttachments(This,Value)	\
    ( (This)->lpVtbl -> get_EmailAttachments(This,Value) ) 

#define ICampaign_get_EmailMessagePlain(This,Value)	\
    ( (This)->lpVtbl -> get_EmailMessagePlain(This,Value) ) 

#define ICampaign_get_EmailMessageHtml(This,Value)	\
    ( (This)->lpVtbl -> get_EmailMessageHtml(This,Value) ) 

#define ICampaign_get_SmsAttachments(This,Value)	\
    ( (This)->lpVtbl -> get_SmsAttachments(This,Value) ) 

#define ICampaign_put_ID(This,Value)	\
    ( (This)->lpVtbl -> put_ID(This,Value) ) 

#define ICampaign_put_Description(This,Value)	\
    ( (This)->lpVtbl -> put_Description(This,Value) ) 

#define ICampaign_put_ChannelID(This,Value)	\
    ( (This)->lpVtbl -> put_ChannelID(This,Value) ) 

#define ICampaign_put_MessageTypeID(This,Value)	\
    ( (This)->lpVtbl -> put_MessageTypeID(This,Value) ) 

#define ICampaign_put_GenerateBatchRecord(This,Value)	\
    ( (This)->lpVtbl -> put_GenerateBatchRecord(This,Value) ) 

#define ICampaign_put_DataSource(This,Value)	\
    ( (This)->lpVtbl -> put_DataSource(This,Value) ) 

#define ICampaign_put_DatabaseEngine(This,Value)	\
    ( (This)->lpVtbl -> put_DatabaseEngine(This,Value) ) 

#define ICampaign_put_AccessDatabasePath(This,Value)	\
    ( (This)->lpVtbl -> put_AccessDatabasePath(This,Value) ) 

#define ICampaign_put_AccessDatabasePassword(This,Value)	\
    ( (This)->lpVtbl -> put_AccessDatabasePassword(This,Value) ) 

#define ICampaign_put_AccessDatabaseTable(This,Value)	\
    ( (This)->lpVtbl -> put_AccessDatabaseTable(This,Value) ) 

#define ICampaign_put_MsSqlServer(This,Value)	\
    ( (This)->lpVtbl -> put_MsSqlServer(This,Value) ) 

#define ICampaign_put_MsSqlUseWindowsAuth(This,Value)	\
    ( (This)->lpVtbl -> put_MsSqlUseWindowsAuth(This,Value) ) 

#define ICampaign_put_MsSqlLogin(This,Value)	\
    ( (This)->lpVtbl -> put_MsSqlLogin(This,Value) ) 

#define ICampaign_put_MsSqlPassword(This,Value)	\
    ( (This)->lpVtbl -> put_MsSqlPassword(This,Value) ) 

#define ICampaign_put_MsSqlDatabase(This,Value)	\
    ( (This)->lpVtbl -> put_MsSqlDatabase(This,Value) ) 

#define ICampaign_put_MsSqlTable(This,Value)	\
    ( (This)->lpVtbl -> put_MsSqlTable(This,Value) ) 

#define ICampaign_put_MySqlServer(This,Value)	\
    ( (This)->lpVtbl -> put_MySqlServer(This,Value) ) 

#define ICampaign_put_MySqlPort(This,Value)	\
    ( (This)->lpVtbl -> put_MySqlPort(This,Value) ) 

#define ICampaign_put_MySqlLogin(This,Value)	\
    ( (This)->lpVtbl -> put_MySqlLogin(This,Value) ) 

#define ICampaign_put_MySqlPassword(This,Value)	\
    ( (This)->lpVtbl -> put_MySqlPassword(This,Value) ) 

#define ICampaign_put_MySqlDatabase(This,Value)	\
    ( (This)->lpVtbl -> put_MySqlDatabase(This,Value) ) 

#define ICampaign_put_MySqlTable(This,Value)	\
    ( (This)->lpVtbl -> put_MySqlTable(This,Value) ) 

#define ICampaign_put_GenericDbConnectionString(This,Value)	\
    ( (This)->lpVtbl -> put_GenericDbConnectionString(This,Value) ) 

#define ICampaign_put_GenericDbTable(This,Value)	\
    ( (This)->lpVtbl -> put_GenericDbTable(This,Value) ) 

#define ICampaign_put_ExcelPath(This,Value)	\
    ( (This)->lpVtbl -> put_ExcelPath(This,Value) ) 

#define ICampaign_put_ExcelSheet(This,Value)	\
    ( (This)->lpVtbl -> put_ExcelSheet(This,Value) ) 

#define ICampaign_put_ExcelFirstRowIsHeader(This,Value)	\
    ( (This)->lpVtbl -> put_ExcelFirstRowIsHeader(This,Value) ) 

#define ICampaign_put_ExcelSkipDuplicates(This,Value)	\
    ( (This)->lpVtbl -> put_ExcelSkipDuplicates(This,Value) ) 

#define ICampaign_put_CsvFile(This,Value)	\
    ( (This)->lpVtbl -> put_CsvFile(This,Value) ) 

#define ICampaign_put_CsvDelimiter(This,Value)	\
    ( (This)->lpVtbl -> put_CsvDelimiter(This,Value) ) 

#define ICampaign_put_CsvTextQualifier(This,Value)	\
    ( (This)->lpVtbl -> put_CsvTextQualifier(This,Value) ) 

#define ICampaign_put_CsvFirstRowIsHeader(This,Value)	\
    ( (This)->lpVtbl -> put_CsvFirstRowIsHeader(This,Value) ) 

#define ICampaign_put_CsvSkipDuplicateRows(This,Value)	\
    ( (This)->lpVtbl -> put_CsvSkipDuplicateRows(This,Value) ) 

#define ICampaign_put_LdapHost(This,Value)	\
    ( (This)->lpVtbl -> put_LdapHost(This,Value) ) 

#define ICampaign_put_LdapLogin(This,Value)	\
    ( (This)->lpVtbl -> put_LdapLogin(This,Value) ) 

#define ICampaign_put_LdapPassword(This,Value)	\
    ( (This)->lpVtbl -> put_LdapPassword(This,Value) ) 

#define ICampaign_put_SmsRecipientField(This,Value)	\
    ( (This)->lpVtbl -> put_SmsRecipientField(This,Value) ) 

#define ICampaign_put_SmsFormat(This,Value)	\
    ( (This)->lpVtbl -> put_SmsFormat(This,Value) ) 

#define ICampaign_put_SmsCharacterSet(This,Value)	\
    ( (This)->lpVtbl -> put_SmsCharacterSet(This,Value) ) 

#define ICampaign_put_SmsPriority(This,Value)	\
    ( (This)->lpVtbl -> put_SmsPriority(This,Value) ) 

#define ICampaign_put_SmsValidityMin(This,Value)	\
    ( (This)->lpVtbl -> put_SmsValidityMin(This,Value) ) 

#define ICampaign_put_SmsFlash(This,Value)	\
    ( (This)->lpVtbl -> put_SmsFlash(This,Value) ) 

#define ICampaign_put_SmsUdh(This,Value)	\
    ( (This)->lpVtbl -> put_SmsUdh(This,Value) ) 

#define ICampaign_put_EmailRecipientField(This,Value)	\
    ( (This)->lpVtbl -> put_EmailRecipientField(This,Value) ) 

#define ICampaign_put_EmailCc(This,Value)	\
    ( (This)->lpVtbl -> put_EmailCc(This,Value) ) 

#define ICampaign_put_EmailBcc(This,Value)	\
    ( (This)->lpVtbl -> put_EmailBcc(This,Value) ) 

#define ICampaign_put_EmailPriority(This,Value)	\
    ( (This)->lpVtbl -> put_EmailPriority(This,Value) ) 

#define ICampaign_put_EmailHtmlToPlainText(This,Value)	\
    ( (This)->lpVtbl -> put_EmailHtmlToPlainText(This,Value) ) 

#define ICampaign_put_EmailSubject(This,Value)	\
    ( (This)->lpVtbl -> put_EmailSubject(This,Value) ) 

#define ICampaign_put_SmsMaxLength(This,Value)	\
    ( (This)->lpVtbl -> put_SmsMaxLength(This,Value) ) 

#define ICampaign_put_SmsMessage(This,Value)	\
    ( (This)->lpVtbl -> put_SmsMessage(This,Value) ) 

#define ICampaign_put_EmailAttachments(This,Value)	\
    ( (This)->lpVtbl -> put_EmailAttachments(This,Value) ) 

#define ICampaign_put_EmailMessagePlain(This,Value)	\
    ( (This)->lpVtbl -> put_EmailMessagePlain(This,Value) ) 

#define ICampaign_put_EmailMessageHtml(This,Value)	\
    ( (This)->lpVtbl -> put_EmailMessageHtml(This,Value) ) 

#define ICampaign_put_SmsAttachments(This,Value)	\
    ( (This)->lpVtbl -> put_SmsAttachments(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICampaign_INTERFACE_DEFINED__ */


#ifndef __ICampaigns_INTERFACE_DEFINED__
#define __ICampaigns_INTERFACE_DEFINED__

/* interface ICampaigns */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICampaigns;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AE795E50-84F0-4B6D-B7D7-BE64968340EE")
    ICampaigns : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [retval][out] */ ICampaign **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR ID,
            /* [retval][out] */ ICampaign **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ ICampaign *Campaign,
            /* [defaultvalue][in] */ LONG Flags = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ BSTR Filter) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindFirstCampaign( 
            /* [defaultvalue][in] */ BSTR Filter,
            /* [retval][out] */ ICampaign **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindNextCampaign( 
            /* [retval][out] */ ICampaign **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartBatch( 
            /* [in] */ BSTR Description,
            /* [in] */ LONG Messages,
            /* [defaultvalue][in] */ BSTR CampaignID,
            /* [retval][out] */ LONG *pBatchID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopBatch( 
            /* [in] */ LONG BatchID,
            /* [defaultvalue][in] */ BSTR StatusID = (BSTR)L"SUCCESS") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasUpdate( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NotifyUpdate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartChangeListening( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopChangeListening( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICampaignsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICampaigns * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICampaigns * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICampaigns * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICampaigns * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICampaigns * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICampaigns * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICampaigns * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ICampaigns * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            ICampaigns * This,
            /* [retval][out] */ ICampaign **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            ICampaigns * This,
            /* [in] */ BSTR ID,
            /* [retval][out] */ ICampaign **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            ICampaigns * This,
            /* [in] */ ICampaign *Campaign,
            /* [defaultvalue][in] */ LONG Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ICampaigns * This,
            /* [in] */ BSTR Filter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindFirstCampaign )( 
            ICampaigns * This,
            /* [defaultvalue][in] */ BSTR Filter,
            /* [retval][out] */ ICampaign **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindNextCampaign )( 
            ICampaigns * This,
            /* [retval][out] */ ICampaign **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartBatch )( 
            ICampaigns * This,
            /* [in] */ BSTR Description,
            /* [in] */ LONG Messages,
            /* [defaultvalue][in] */ BSTR CampaignID,
            /* [retval][out] */ LONG *pBatchID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StopBatch )( 
            ICampaigns * This,
            /* [in] */ LONG BatchID,
            /* [defaultvalue][in] */ BSTR StatusID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasUpdate )( 
            ICampaigns * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NotifyUpdate )( 
            ICampaigns * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartChangeListening )( 
            ICampaigns * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StopChangeListening )( 
            ICampaigns * This);
        
        END_INTERFACE
    } ICampaignsVtbl;

    interface ICampaigns
    {
        CONST_VTBL struct ICampaignsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICampaigns_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICampaigns_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICampaigns_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICampaigns_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICampaigns_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICampaigns_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICampaigns_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICampaigns_get_LastError(This,Value)	\
    ( (This)->lpVtbl -> get_LastError(This,Value) ) 

#define ICampaigns_Create(This,ppVal)	\
    ( (This)->lpVtbl -> Create(This,ppVal) ) 

#define ICampaigns_Load(This,ID,ppVal)	\
    ( (This)->lpVtbl -> Load(This,ID,ppVal) ) 

#define ICampaigns_Save(This,Campaign,Flags)	\
    ( (This)->lpVtbl -> Save(This,Campaign,Flags) ) 

#define ICampaigns_Delete(This,Filter)	\
    ( (This)->lpVtbl -> Delete(This,Filter) ) 

#define ICampaigns_FindFirstCampaign(This,Filter,ppVal)	\
    ( (This)->lpVtbl -> FindFirstCampaign(This,Filter,ppVal) ) 

#define ICampaigns_FindNextCampaign(This,ppVal)	\
    ( (This)->lpVtbl -> FindNextCampaign(This,ppVal) ) 

#define ICampaigns_StartBatch(This,Description,Messages,CampaignID,pBatchID)	\
    ( (This)->lpVtbl -> StartBatch(This,Description,Messages,CampaignID,pBatchID) ) 

#define ICampaigns_StopBatch(This,BatchID,StatusID)	\
    ( (This)->lpVtbl -> StopBatch(This,BatchID,StatusID) ) 

#define ICampaigns_HasUpdate(This,pVal)	\
    ( (This)->lpVtbl -> HasUpdate(This,pVal) ) 

#define ICampaigns_NotifyUpdate(This)	\
    ( (This)->lpVtbl -> NotifyUpdate(This) ) 

#define ICampaigns_StartChangeListening(This)	\
    ( (This)->lpVtbl -> StartChangeListening(This) ) 

#define ICampaigns_StopChangeListening(This)	\
    ( (This)->lpVtbl -> StopChangeListening(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICampaigns_INTERFACE_DEFINED__ */


#ifndef __IMessageType_INTERFACE_DEFINED__
#define __IMessageType_INTERFACE_DEFINED__

/* interface IMessageType */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMessageType;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("048E71F5-8C44-4755-B49C-F4D06951509E")
    IMessageType : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EditorPath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EditorPath( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_InfoUrl( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LongDescription( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DataTable( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProgramId( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HasAttachments( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayOrder( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InfoUrl( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LongDescription( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DataTable( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProgramId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasAttachments( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayOrder( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SupportReply( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SupportForward( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SupportReply( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SupportForward( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetIcon( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveIcon( 
            /* [in] */ BSTR Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMessageTypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMessageType * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMessageType * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMessageType * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMessageType * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMessageType * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMessageType * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMessageType * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IMessageType * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IMessageType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IMessageType * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IMessageType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IMessageType * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EditorPath )( 
            IMessageType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EditorPath )( 
            IMessageType * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InfoUrl )( 
            IMessageType * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LongDescription )( 
            IMessageType * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataTable )( 
            IMessageType * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProgramId )( 
            IMessageType * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HasAttachments )( 
            IMessageType * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayOrder )( 
            IMessageType * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InfoUrl )( 
            IMessageType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LongDescription )( 
            IMessageType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataTable )( 
            IMessageType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProgramId )( 
            IMessageType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasAttachments )( 
            IMessageType * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayOrder )( 
            IMessageType * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SupportReply )( 
            IMessageType * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SupportForward )( 
            IMessageType * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SupportReply )( 
            IMessageType * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SupportForward )( 
            IMessageType * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetIcon )( 
            IMessageType * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveIcon )( 
            IMessageType * This,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } IMessageTypeVtbl;

    interface IMessageType
    {
        CONST_VTBL struct IMessageTypeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessageType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMessageType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMessageType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMessageType_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMessageType_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMessageType_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMessageType_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMessageType_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IMessageType_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define IMessageType_put_ID(This,Val)	\
    ( (This)->lpVtbl -> put_ID(This,Val) ) 

#define IMessageType_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define IMessageType_put_Description(This,Val)	\
    ( (This)->lpVtbl -> put_Description(This,Val) ) 

#define IMessageType_get_EditorPath(This,pVal)	\
    ( (This)->lpVtbl -> get_EditorPath(This,pVal) ) 

#define IMessageType_put_EditorPath(This,Val)	\
    ( (This)->lpVtbl -> put_EditorPath(This,Val) ) 

#define IMessageType_put_InfoUrl(This,Val)	\
    ( (This)->lpVtbl -> put_InfoUrl(This,Val) ) 

#define IMessageType_put_LongDescription(This,Val)	\
    ( (This)->lpVtbl -> put_LongDescription(This,Val) ) 

#define IMessageType_put_DataTable(This,Val)	\
    ( (This)->lpVtbl -> put_DataTable(This,Val) ) 

#define IMessageType_put_ProgramId(This,Val)	\
    ( (This)->lpVtbl -> put_ProgramId(This,Val) ) 

#define IMessageType_put_HasAttachments(This,Val)	\
    ( (This)->lpVtbl -> put_HasAttachments(This,Val) ) 

#define IMessageType_put_DisplayOrder(This,Val)	\
    ( (This)->lpVtbl -> put_DisplayOrder(This,Val) ) 

#define IMessageType_get_InfoUrl(This,pVal)	\
    ( (This)->lpVtbl -> get_InfoUrl(This,pVal) ) 

#define IMessageType_get_LongDescription(This,pVal)	\
    ( (This)->lpVtbl -> get_LongDescription(This,pVal) ) 

#define IMessageType_get_DataTable(This,pVal)	\
    ( (This)->lpVtbl -> get_DataTable(This,pVal) ) 

#define IMessageType_get_ProgramId(This,pVal)	\
    ( (This)->lpVtbl -> get_ProgramId(This,pVal) ) 

#define IMessageType_get_HasAttachments(This,pVal)	\
    ( (This)->lpVtbl -> get_HasAttachments(This,pVal) ) 

#define IMessageType_get_DisplayOrder(This,pVal)	\
    ( (This)->lpVtbl -> get_DisplayOrder(This,pVal) ) 

#define IMessageType_put_SupportReply(This,Val)	\
    ( (This)->lpVtbl -> put_SupportReply(This,Val) ) 

#define IMessageType_put_SupportForward(This,Val)	\
    ( (This)->lpVtbl -> put_SupportForward(This,Val) ) 

#define IMessageType_get_SupportReply(This,pVal)	\
    ( (This)->lpVtbl -> get_SupportReply(This,pVal) ) 

#define IMessageType_get_SupportForward(This,pVal)	\
    ( (This)->lpVtbl -> get_SupportForward(This,pVal) ) 

#define IMessageType_SetIcon(This,Val)	\
    ( (This)->lpVtbl -> SetIcon(This,Val) ) 

#define IMessageType_SaveIcon(This,Val)	\
    ( (This)->lpVtbl -> SaveIcon(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMessageType_INTERFACE_DEFINED__ */


#ifndef __IMessageTypes_INTERFACE_DEFINED__
#define __IMessageTypes_INTERFACE_DEFINED__

/* interface IMessageTypes */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMessageTypes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AECFB04D-7F7B-44B5-B54F-913F0736027D")
    IMessageTypes : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR MessageTypeID,
            /* [retval][out] */ IMessageType **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindFirstMessageType( 
            /* [defaultvalue][in] */ BSTR Filter,
            /* [retval][out] */ IMessageType **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindNextMessageType( 
            /* [retval][out] */ IMessageType **ppVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMessageTypesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMessageTypes * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMessageTypes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMessageTypes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMessageTypes * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMessageTypes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMessageTypes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMessageTypes * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IMessageTypes * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IMessageTypes * This,
            /* [in] */ BSTR MessageTypeID,
            /* [retval][out] */ IMessageType **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindFirstMessageType )( 
            IMessageTypes * This,
            /* [defaultvalue][in] */ BSTR Filter,
            /* [retval][out] */ IMessageType **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindNextMessageType )( 
            IMessageTypes * This,
            /* [retval][out] */ IMessageType **ppVal);
        
        END_INTERFACE
    } IMessageTypesVtbl;

    interface IMessageTypes
    {
        CONST_VTBL struct IMessageTypesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessageTypes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMessageTypes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMessageTypes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMessageTypes_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMessageTypes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMessageTypes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMessageTypes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMessageTypes_get_LastError(This,Value)	\
    ( (This)->lpVtbl -> get_LastError(This,Value) ) 

#define IMessageTypes_Load(This,MessageTypeID,ppVal)	\
    ( (This)->lpVtbl -> Load(This,MessageTypeID,ppVal) ) 

#define IMessageTypes_FindFirstMessageType(This,Filter,ppVal)	\
    ( (This)->lpVtbl -> FindFirstMessageType(This,Filter,ppVal) ) 

#define IMessageTypes_FindNextMessageType(This,ppVal)	\
    ( (This)->lpVtbl -> FindNextMessageType(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMessageTypes_INTERFACE_DEFINED__ */


#ifndef __IChannelType_INTERFACE_DEFINED__
#define __IChannelType_INTERFACE_DEFINED__

/* interface IChannelType */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IChannelType;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2F067ACE-1A29-4EE1-8696-3E36AE577CF5")
    IChannelType : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MessageTypeID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MessageTypeID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DataTable( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DataTable( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EditorPath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EditorPath( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LongDescription( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LongDescription( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InfoUrl( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_InfoUrl( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayOrder( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayOrder( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProcessPath( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsManaged( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProcessPath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsManaged( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetIcon( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveIcon( 
            /* [in] */ BSTR Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IChannelTypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IChannelType * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IChannelType * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IChannelType * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IChannelType * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IChannelType * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IChannelType * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IChannelType * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IChannelType * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IChannelType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IChannelType * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MessageTypeID )( 
            IChannelType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MessageTypeID )( 
            IChannelType * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IChannelType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IChannelType * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataTable )( 
            IChannelType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataTable )( 
            IChannelType * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EditorPath )( 
            IChannelType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EditorPath )( 
            IChannelType * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LongDescription )( 
            IChannelType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LongDescription )( 
            IChannelType * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InfoUrl )( 
            IChannelType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InfoUrl )( 
            IChannelType * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayOrder )( 
            IChannelType * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayOrder )( 
            IChannelType * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProcessPath )( 
            IChannelType * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsManaged )( 
            IChannelType * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProcessPath )( 
            IChannelType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsManaged )( 
            IChannelType * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetIcon )( 
            IChannelType * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveIcon )( 
            IChannelType * This,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } IChannelTypeVtbl;

    interface IChannelType
    {
        CONST_VTBL struct IChannelTypeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IChannelType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IChannelType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IChannelType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IChannelType_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IChannelType_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IChannelType_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IChannelType_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IChannelType_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IChannelType_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define IChannelType_put_ID(This,Val)	\
    ( (This)->lpVtbl -> put_ID(This,Val) ) 

#define IChannelType_get_MessageTypeID(This,pVal)	\
    ( (This)->lpVtbl -> get_MessageTypeID(This,pVal) ) 

#define IChannelType_put_MessageTypeID(This,Val)	\
    ( (This)->lpVtbl -> put_MessageTypeID(This,Val) ) 

#define IChannelType_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define IChannelType_put_Description(This,Val)	\
    ( (This)->lpVtbl -> put_Description(This,Val) ) 

#define IChannelType_get_DataTable(This,pVal)	\
    ( (This)->lpVtbl -> get_DataTable(This,pVal) ) 

#define IChannelType_put_DataTable(This,Val)	\
    ( (This)->lpVtbl -> put_DataTable(This,Val) ) 

#define IChannelType_get_EditorPath(This,pVal)	\
    ( (This)->lpVtbl -> get_EditorPath(This,pVal) ) 

#define IChannelType_put_EditorPath(This,Val)	\
    ( (This)->lpVtbl -> put_EditorPath(This,Val) ) 

#define IChannelType_get_LongDescription(This,pVal)	\
    ( (This)->lpVtbl -> get_LongDescription(This,pVal) ) 

#define IChannelType_put_LongDescription(This,Val)	\
    ( (This)->lpVtbl -> put_LongDescription(This,Val) ) 

#define IChannelType_get_InfoUrl(This,pVal)	\
    ( (This)->lpVtbl -> get_InfoUrl(This,pVal) ) 

#define IChannelType_put_InfoUrl(This,Val)	\
    ( (This)->lpVtbl -> put_InfoUrl(This,Val) ) 

#define IChannelType_get_DisplayOrder(This,pVal)	\
    ( (This)->lpVtbl -> get_DisplayOrder(This,pVal) ) 

#define IChannelType_put_DisplayOrder(This,Val)	\
    ( (This)->lpVtbl -> put_DisplayOrder(This,Val) ) 

#define IChannelType_put_ProcessPath(This,Val)	\
    ( (This)->lpVtbl -> put_ProcessPath(This,Val) ) 

#define IChannelType_put_IsManaged(This,Val)	\
    ( (This)->lpVtbl -> put_IsManaged(This,Val) ) 

#define IChannelType_get_ProcessPath(This,pVal)	\
    ( (This)->lpVtbl -> get_ProcessPath(This,pVal) ) 

#define IChannelType_get_IsManaged(This,pVal)	\
    ( (This)->lpVtbl -> get_IsManaged(This,pVal) ) 

#define IChannelType_SetIcon(This,Val)	\
    ( (This)->lpVtbl -> SetIcon(This,Val) ) 

#define IChannelType_SaveIcon(This,Val)	\
    ( (This)->lpVtbl -> SaveIcon(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IChannelType_INTERFACE_DEFINED__ */


#ifndef __IChannelTypes_INTERFACE_DEFINED__
#define __IChannelTypes_INTERFACE_DEFINED__

/* interface IChannelTypes */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IChannelTypes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83E8097E-9362-4E53-93D7-ADDB69838120")
    IChannelTypes : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [retval][out] */ IChannelType **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR ChannelTypeID,
            /* [retval][out] */ IChannelType **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ IChannelType *ChannelType,
            /* [defaultvalue][in] */ LONG Flags = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ BSTR Filter) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindFirstChannelType( 
            /* [defaultvalue][in] */ BSTR Filter,
            /* [retval][out] */ IChannelType **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindNextChannelType( 
            /* [retval][out] */ IChannelType **ppVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IChannelTypesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IChannelTypes * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IChannelTypes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IChannelTypes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IChannelTypes * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IChannelTypes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IChannelTypes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IChannelTypes * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IChannelTypes * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IChannelTypes * This,
            /* [retval][out] */ IChannelType **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IChannelTypes * This,
            /* [in] */ BSTR ChannelTypeID,
            /* [retval][out] */ IChannelType **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IChannelTypes * This,
            /* [in] */ IChannelType *ChannelType,
            /* [defaultvalue][in] */ LONG Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IChannelTypes * This,
            /* [in] */ BSTR Filter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindFirstChannelType )( 
            IChannelTypes * This,
            /* [defaultvalue][in] */ BSTR Filter,
            /* [retval][out] */ IChannelType **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindNextChannelType )( 
            IChannelTypes * This,
            /* [retval][out] */ IChannelType **ppVal);
        
        END_INTERFACE
    } IChannelTypesVtbl;

    interface IChannelTypes
    {
        CONST_VTBL struct IChannelTypesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IChannelTypes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IChannelTypes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IChannelTypes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IChannelTypes_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IChannelTypes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IChannelTypes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IChannelTypes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IChannelTypes_get_LastError(This,Value)	\
    ( (This)->lpVtbl -> get_LastError(This,Value) ) 

#define IChannelTypes_Create(This,ppVal)	\
    ( (This)->lpVtbl -> Create(This,ppVal) ) 

#define IChannelTypes_Load(This,ChannelTypeID,ppVal)	\
    ( (This)->lpVtbl -> Load(This,ChannelTypeID,ppVal) ) 

#define IChannelTypes_Save(This,ChannelType,Flags)	\
    ( (This)->lpVtbl -> Save(This,ChannelType,Flags) ) 

#define IChannelTypes_Delete(This,Filter)	\
    ( (This)->lpVtbl -> Delete(This,Filter) ) 

#define IChannelTypes_FindFirstChannelType(This,Filter,ppVal)	\
    ( (This)->lpVtbl -> FindFirstChannelType(This,Filter,ppVal) ) 

#define IChannelTypes_FindNextChannelType(This,ppVal)	\
    ( (This)->lpVtbl -> FindNextChannelType(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IChannelTypes_INTERFACE_DEFINED__ */


#ifndef __IMessage_INTERFACE_DEFINED__
#define __IMessage_INTERFACE_DEFINED__

/* interface IMessage */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5CC6D36E-6FB2-42AB-8372-4B9CAED663C4")
    IMessage : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DirectionID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StatusID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerStatusID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AckStatusID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ChannelID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BillingID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScheduledTime( 
            /* [in] */ DATE Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SentTime( 
            /* [in] */ DATE Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReceivedTime( 
            /* [in] */ DATE Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Priority( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BatchID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ConversationID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Hash( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Creator( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Archive( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CustomField1( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CustomField2( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StatusDetailsID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerDetailsID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DirectionID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TypeID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StatusID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerStatusID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AckStatusID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ChannelID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BillingID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScheduledTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SentTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReceivedTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastUpdate( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Priority( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BatchID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConversationID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Hash( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Creator( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Archive( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Trace( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomField1( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomField2( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StatusDetailsID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerDetailsID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Retries( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Retries( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTrace( 
            /* [in] */ BSTR TraceString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CountAttachments( 
            /* [retval][out] */ LONG *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentName( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentSize( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAttachment( 
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Name = (BSTR)L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveAttachment( 
            /* [in] */ LONG IDX,
            /* [in] */ BSTR SaveAsFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearAttachments( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentID( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *ID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAttachmentBase64( 
            /* [in] */ BSTR Base64,
            /* [defaultvalue][in] */ BSTR Name = (BSTR)L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentBase64( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Base64) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FieldCount( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFieldNameFromIndex( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValueRequired( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValueType( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValue( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ BSTR sField,
            /* [in] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPasswordValue( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPasswordValue( 
            /* [in] */ BSTR sField,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTypeObject( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMessage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMessage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMessage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMessage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMessage * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DirectionID )( 
            IMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusID )( 
            IMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerStatusID )( 
            IMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AckStatusID )( 
            IMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ChannelID )( 
            IMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BillingID )( 
            IMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScheduledTime )( 
            IMessage * This,
            /* [in] */ DATE Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SentTime )( 
            IMessage * This,
            /* [in] */ DATE Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReceivedTime )( 
            IMessage * This,
            /* [in] */ DATE Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Priority )( 
            IMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BatchID )( 
            IMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConversationID )( 
            IMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Hash )( 
            IMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Creator )( 
            IMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Archive )( 
            IMessage * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomField1 )( 
            IMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomField2 )( 
            IMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusDetailsID )( 
            IMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerDetailsID )( 
            IMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DirectionID )( 
            IMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TypeID )( 
            IMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusID )( 
            IMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerStatusID )( 
            IMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AckStatusID )( 
            IMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChannelID )( 
            IMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BillingID )( 
            IMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScheduledTime )( 
            IMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SentTime )( 
            IMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReceivedTime )( 
            IMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpdate )( 
            IMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Priority )( 
            IMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BatchID )( 
            IMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConversationID )( 
            IMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Hash )( 
            IMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Creator )( 
            IMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Archive )( 
            IMessage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trace )( 
            IMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomField1 )( 
            IMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomField2 )( 
            IMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusDetailsID )( 
            IMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerDetailsID )( 
            IMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Retries )( 
            IMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Retries )( 
            IMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTrace )( 
            IMessage * This,
            /* [in] */ BSTR TraceString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CountAttachments )( 
            IMessage * This,
            /* [retval][out] */ LONG *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentName )( 
            IMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentSize )( 
            IMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAttachment )( 
            IMessage * This,
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveAttachment )( 
            IMessage * This,
            /* [in] */ LONG IDX,
            /* [in] */ BSTR SaveAsFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ClearAttachments )( 
            IMessage * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentID )( 
            IMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAttachmentBase64 )( 
            IMessage * This,
            /* [in] */ BSTR Base64,
            /* [defaultvalue][in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentBase64 )( 
            IMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Base64);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FieldCount )( 
            IMessage * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFieldNameFromIndex )( 
            IMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValueRequired )( 
            IMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValueType )( 
            IMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            IMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            IMessage * This,
            /* [in] */ BSTR sField,
            /* [in] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPasswordValue )( 
            IMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPasswordValue )( 
            IMessage * This,
            /* [in] */ BSTR sField,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTypeObject )( 
            IMessage * This,
            /* [retval][out] */ VARIANT *pVal);
        
        END_INTERFACE
    } IMessageVtbl;

    interface IMessage
    {
        CONST_VTBL struct IMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMessage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMessage_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IMessage_put_DirectionID(This,Val)	\
    ( (This)->lpVtbl -> put_DirectionID(This,Val) ) 

#define IMessage_put_StatusID(This,Val)	\
    ( (This)->lpVtbl -> put_StatusID(This,Val) ) 

#define IMessage_put_TriggerStatusID(This,Val)	\
    ( (This)->lpVtbl -> put_TriggerStatusID(This,Val) ) 

#define IMessage_put_AckStatusID(This,Val)	\
    ( (This)->lpVtbl -> put_AckStatusID(This,Val) ) 

#define IMessage_put_ChannelID(This,Val)	\
    ( (This)->lpVtbl -> put_ChannelID(This,Val) ) 

#define IMessage_put_BillingID(This,Val)	\
    ( (This)->lpVtbl -> put_BillingID(This,Val) ) 

#define IMessage_put_ScheduledTime(This,Val)	\
    ( (This)->lpVtbl -> put_ScheduledTime(This,Val) ) 

#define IMessage_put_SentTime(This,Val)	\
    ( (This)->lpVtbl -> put_SentTime(This,Val) ) 

#define IMessage_put_ReceivedTime(This,Val)	\
    ( (This)->lpVtbl -> put_ReceivedTime(This,Val) ) 

#define IMessage_put_Priority(This,Val)	\
    ( (This)->lpVtbl -> put_Priority(This,Val) ) 

#define IMessage_put_BatchID(This,Val)	\
    ( (This)->lpVtbl -> put_BatchID(This,Val) ) 

#define IMessage_put_ConversationID(This,Val)	\
    ( (This)->lpVtbl -> put_ConversationID(This,Val) ) 

#define IMessage_put_Hash(This,Val)	\
    ( (This)->lpVtbl -> put_Hash(This,Val) ) 

#define IMessage_put_Creator(This,Val)	\
    ( (This)->lpVtbl -> put_Creator(This,Val) ) 

#define IMessage_put_Archive(This,Val)	\
    ( (This)->lpVtbl -> put_Archive(This,Val) ) 

#define IMessage_put_CustomField1(This,Val)	\
    ( (This)->lpVtbl -> put_CustomField1(This,Val) ) 

#define IMessage_put_CustomField2(This,Val)	\
    ( (This)->lpVtbl -> put_CustomField2(This,Val) ) 

#define IMessage_put_StatusDetailsID(This,Val)	\
    ( (This)->lpVtbl -> put_StatusDetailsID(This,Val) ) 

#define IMessage_put_TriggerDetailsID(This,Val)	\
    ( (This)->lpVtbl -> put_TriggerDetailsID(This,Val) ) 

#define IMessage_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define IMessage_get_DirectionID(This,pVal)	\
    ( (This)->lpVtbl -> get_DirectionID(This,pVal) ) 

#define IMessage_get_TypeID(This,pVal)	\
    ( (This)->lpVtbl -> get_TypeID(This,pVal) ) 

#define IMessage_get_StatusID(This,pVal)	\
    ( (This)->lpVtbl -> get_StatusID(This,pVal) ) 

#define IMessage_get_TriggerStatusID(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggerStatusID(This,pVal) ) 

#define IMessage_get_AckStatusID(This,pVal)	\
    ( (This)->lpVtbl -> get_AckStatusID(This,pVal) ) 

#define IMessage_get_ChannelID(This,pVal)	\
    ( (This)->lpVtbl -> get_ChannelID(This,pVal) ) 

#define IMessage_get_BillingID(This,pVal)	\
    ( (This)->lpVtbl -> get_BillingID(This,pVal) ) 

#define IMessage_get_ScheduledTime(This,pVal)	\
    ( (This)->lpVtbl -> get_ScheduledTime(This,pVal) ) 

#define IMessage_get_SentTime(This,pVal)	\
    ( (This)->lpVtbl -> get_SentTime(This,pVal) ) 

#define IMessage_get_ReceivedTime(This,pVal)	\
    ( (This)->lpVtbl -> get_ReceivedTime(This,pVal) ) 

#define IMessage_get_LastUpdate(This,pVal)	\
    ( (This)->lpVtbl -> get_LastUpdate(This,pVal) ) 

#define IMessage_get_Priority(This,pVal)	\
    ( (This)->lpVtbl -> get_Priority(This,pVal) ) 

#define IMessage_get_BatchID(This,pVal)	\
    ( (This)->lpVtbl -> get_BatchID(This,pVal) ) 

#define IMessage_get_ConversationID(This,pVal)	\
    ( (This)->lpVtbl -> get_ConversationID(This,pVal) ) 

#define IMessage_get_Hash(This,pVal)	\
    ( (This)->lpVtbl -> get_Hash(This,pVal) ) 

#define IMessage_get_Creator(This,pVal)	\
    ( (This)->lpVtbl -> get_Creator(This,pVal) ) 

#define IMessage_get_Archive(This,pVal)	\
    ( (This)->lpVtbl -> get_Archive(This,pVal) ) 

#define IMessage_get_Trace(This,pVal)	\
    ( (This)->lpVtbl -> get_Trace(This,pVal) ) 

#define IMessage_get_CustomField1(This,pVal)	\
    ( (This)->lpVtbl -> get_CustomField1(This,pVal) ) 

#define IMessage_get_CustomField2(This,pVal)	\
    ( (This)->lpVtbl -> get_CustomField2(This,pVal) ) 

#define IMessage_get_StatusDetailsID(This,pVal)	\
    ( (This)->lpVtbl -> get_StatusDetailsID(This,pVal) ) 

#define IMessage_get_TriggerDetailsID(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggerDetailsID(This,pVal) ) 

#define IMessage_put_Retries(This,Val)	\
    ( (This)->lpVtbl -> put_Retries(This,Val) ) 

#define IMessage_get_Retries(This,pVal)	\
    ( (This)->lpVtbl -> get_Retries(This,pVal) ) 

#define IMessage_AddTrace(This,TraceString)	\
    ( (This)->lpVtbl -> AddTrace(This,TraceString) ) 

#define IMessage_CountAttachments(This,Count)	\
    ( (This)->lpVtbl -> CountAttachments(This,Count) ) 

#define IMessage_GetAttachmentName(This,IDX,Name)	\
    ( (This)->lpVtbl -> GetAttachmentName(This,IDX,Name) ) 

#define IMessage_GetAttachmentSize(This,IDX,Size)	\
    ( (This)->lpVtbl -> GetAttachmentSize(This,IDX,Size) ) 

#define IMessage_AddAttachment(This,FileName,Name)	\
    ( (This)->lpVtbl -> AddAttachment(This,FileName,Name) ) 

#define IMessage_SaveAttachment(This,IDX,SaveAsFile)	\
    ( (This)->lpVtbl -> SaveAttachment(This,IDX,SaveAsFile) ) 

#define IMessage_ClearAttachments(This)	\
    ( (This)->lpVtbl -> ClearAttachments(This) ) 

#define IMessage_GetAttachmentID(This,IDX,ID)	\
    ( (This)->lpVtbl -> GetAttachmentID(This,IDX,ID) ) 

#define IMessage_AddAttachmentBase64(This,Base64,Name)	\
    ( (This)->lpVtbl -> AddAttachmentBase64(This,Base64,Name) ) 

#define IMessage_GetAttachmentBase64(This,IDX,Base64)	\
    ( (This)->lpVtbl -> GetAttachmentBase64(This,IDX,Base64) ) 

#define IMessage_get_FieldCount(This,Value)	\
    ( (This)->lpVtbl -> get_FieldCount(This,Value) ) 

#define IMessage_GetFieldNameFromIndex(This,IDX,Value)	\
    ( (This)->lpVtbl -> GetFieldNameFromIndex(This,IDX,Value) ) 

#define IMessage_GetValueRequired(This,sField,Value)	\
    ( (This)->lpVtbl -> GetValueRequired(This,sField,Value) ) 

#define IMessage_GetValueType(This,sField,Value)	\
    ( (This)->lpVtbl -> GetValueType(This,sField,Value) ) 

#define IMessage_GetValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> GetValue(This,sField,pVal) ) 

#define IMessage_SetValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> SetValue(This,sField,pVal) ) 

#define IMessage_GetPasswordValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> GetPasswordValue(This,sField,pVal) ) 

#define IMessage_SetPasswordValue(This,sField,Val)	\
    ( (This)->lpVtbl -> SetPasswordValue(This,sField,Val) ) 

#define IMessage_GetTypeObject(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeObject(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMessage_INTERFACE_DEFINED__ */


#ifndef __ITlv_INTERFACE_DEFINED__
#define __ITlv_INTERFACE_DEFINED__

/* interface ITlv */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITlv;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8717BDF4-4607-44C7-8AE8-C3D0129C0186")
    ITlv : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Tag( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Tag( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValueAsString( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ValueAsString( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValueAsHexString( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ValueAsHexString( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValueAsInt32( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ValueAsInt32( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValueAsInt16( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ValueAsInt16( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValueAsInt8( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ValueAsInt8( 
            /* [in] */ LONG Value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITlvVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITlv * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITlv * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITlv * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITlv * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITlv * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITlv * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITlv * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ITlv * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            ITlv * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tag )( 
            ITlv * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Tag )( 
            ITlv * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueAsString )( 
            ITlv * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ValueAsString )( 
            ITlv * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueAsHexString )( 
            ITlv * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ValueAsHexString )( 
            ITlv * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueAsInt32 )( 
            ITlv * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ValueAsInt32 )( 
            ITlv * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueAsInt16 )( 
            ITlv * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ValueAsInt16 )( 
            ITlv * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueAsInt8 )( 
            ITlv * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ValueAsInt8 )( 
            ITlv * This,
            /* [in] */ LONG Value);
        
        END_INTERFACE
    } ITlvVtbl;

    interface ITlv
    {
        CONST_VTBL struct ITlvVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITlv_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITlv_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITlv_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITlv_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITlv_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITlv_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITlv_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITlv_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ITlv_get_Length(This,pVal)	\
    ( (This)->lpVtbl -> get_Length(This,pVal) ) 

#define ITlv_get_Tag(This,Value)	\
    ( (This)->lpVtbl -> get_Tag(This,Value) ) 

#define ITlv_put_Tag(This,Value)	\
    ( (This)->lpVtbl -> put_Tag(This,Value) ) 

#define ITlv_get_ValueAsString(This,Value)	\
    ( (This)->lpVtbl -> get_ValueAsString(This,Value) ) 

#define ITlv_put_ValueAsString(This,Value)	\
    ( (This)->lpVtbl -> put_ValueAsString(This,Value) ) 

#define ITlv_get_ValueAsHexString(This,Value)	\
    ( (This)->lpVtbl -> get_ValueAsHexString(This,Value) ) 

#define ITlv_put_ValueAsHexString(This,Value)	\
    ( (This)->lpVtbl -> put_ValueAsHexString(This,Value) ) 

#define ITlv_get_ValueAsInt32(This,Value)	\
    ( (This)->lpVtbl -> get_ValueAsInt32(This,Value) ) 

#define ITlv_put_ValueAsInt32(This,Value)	\
    ( (This)->lpVtbl -> put_ValueAsInt32(This,Value) ) 

#define ITlv_get_ValueAsInt16(This,Value)	\
    ( (This)->lpVtbl -> get_ValueAsInt16(This,Value) ) 

#define ITlv_put_ValueAsInt16(This,Value)	\
    ( (This)->lpVtbl -> put_ValueAsInt16(This,Value) ) 

#define ITlv_get_ValueAsInt8(This,Value)	\
    ( (This)->lpVtbl -> get_ValueAsInt8(This,Value) ) 

#define ITlv_put_ValueAsInt8(This,Value)	\
    ( (This)->lpVtbl -> put_ValueAsInt8(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITlv_INTERFACE_DEFINED__ */


#ifndef __ISmsMessage_INTERFACE_DEFINED__
#define __ISmsMessage_INTERFACE_DEFINED__

/* interface ISmsMessage */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmsMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FA66E587-EA30-4EF9-AD3C-BB47F52B809E")
    ISmsMessage : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetMessageObject( 
            /* [in] */ IMessage *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMessageObject( 
            /* [retval][out] */ IMessage **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFirstTlv( 
            /* [retval][out] */ ITlv **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNextTlv( 
            /* [retval][out] */ ITlv **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTlv( 
            /* [in] */ ITlv *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTlv( 
            /* [in] */ LONG lTag,
            /* [retval][out] */ ITlv **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteTlv( 
            /* [in] */ LONG lTag) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearTlvs( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DirectionID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StatusID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerStatusID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AckStatusID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ChannelID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BillingID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScheduledTime( 
            /* [in] */ DATE Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SentTime( 
            /* [in] */ DATE Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReceivedTime( 
            /* [in] */ DATE Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Priority( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BatchID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ConversationID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Hash( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Creator( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Archive( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CustomField1( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CustomField2( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StatusDetailsID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerDetailsID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DirectionID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TypeID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StatusID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerStatusID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AckStatusID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ChannelID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BillingID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScheduledTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SentTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReceivedTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastUpdate( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Priority( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BatchID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConversationID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Hash( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Creator( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Archive( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Trace( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomField1( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomField2( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StatusDetailsID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerDetailsID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Retries( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Retries( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTrace( 
            /* [in] */ BSTR TraceString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CountAttachments( 
            /* [retval][out] */ LONG *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentName( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentSize( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAttachment( 
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Name = (BSTR)L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveAttachment( 
            /* [in] */ LONG IDX,
            /* [in] */ BSTR SaveAsFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearAttachments( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentID( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *ID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAttachmentBase64( 
            /* [in] */ BSTR Base64,
            /* [defaultvalue][in] */ BSTR Name = (BSTR)L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentBase64( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Base64) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FieldCount( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFieldNameFromIndex( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValueRequired( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValueType( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValue( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ BSTR sField,
            /* [in] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPasswordValue( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPasswordValue( 
            /* [in] */ BSTR sField,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ToAddress( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ToAddressTon( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ToAddressNpi( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FromAddress( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FromAddressTon( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FromAddressNpi( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RequestDeliveryReport( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsDeliveryReport( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DeliveryStatus( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ValidityPeriod( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DataCoding( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BodyFormat( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HasUdh( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TotalParts( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PartNumber( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MultipartReference( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GsmSmscAddress( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GsmSmscAddressTon( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GsmSmscAddressNpi( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmppPriority( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmppServiceType( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmppTlvs( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Body( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Reference( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmppStatusCode( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmppClient( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmppSequenceNumber( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LanguageLockingShift( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LanguageSingleShift( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ToAddress( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ToAddressTon( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ToAddressNpi( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FromAddress( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FromAddressTon( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FromAddressNpi( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestDeliveryReport( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsDeliveryReport( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DeliveryStatus( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValidityPeriod( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DataCoding( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BodyFormat( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasUdh( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TotalParts( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PartNumber( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MultipartReference( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GsmSmscAddress( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GsmSmscAddressTon( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GsmSmscAddressNpi( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmppPriority( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmppServiceType( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmppTlvs( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Body( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Reference( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmppStatusCode( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmppClient( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmppSequenceNumber( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LanguageLockingShift( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LanguageSingleShift( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISmsMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmsMessage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmsMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmsMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmsMessage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmsMessage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmsMessage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmsMessage * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetMessageObject )( 
            ISmsMessage * This,
            /* [in] */ IMessage *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMessageObject )( 
            ISmsMessage * This,
            /* [retval][out] */ IMessage **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstTlv )( 
            ISmsMessage * This,
            /* [retval][out] */ ITlv **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNextTlv )( 
            ISmsMessage * This,
            /* [retval][out] */ ITlv **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTlv )( 
            ISmsMessage * This,
            /* [in] */ ITlv *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTlv )( 
            ISmsMessage * This,
            /* [in] */ LONG lTag,
            /* [retval][out] */ ITlv **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteTlv )( 
            ISmsMessage * This,
            /* [in] */ LONG lTag);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ClearTlvs )( 
            ISmsMessage * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DirectionID )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusID )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerStatusID )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AckStatusID )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ChannelID )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BillingID )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScheduledTime )( 
            ISmsMessage * This,
            /* [in] */ DATE Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SentTime )( 
            ISmsMessage * This,
            /* [in] */ DATE Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReceivedTime )( 
            ISmsMessage * This,
            /* [in] */ DATE Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Priority )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BatchID )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConversationID )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Hash )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Creator )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Archive )( 
            ISmsMessage * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomField1 )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomField2 )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusDetailsID )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerDetailsID )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DirectionID )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TypeID )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusID )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerStatusID )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AckStatusID )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChannelID )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BillingID )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScheduledTime )( 
            ISmsMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SentTime )( 
            ISmsMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReceivedTime )( 
            ISmsMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpdate )( 
            ISmsMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Priority )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BatchID )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConversationID )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Hash )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Creator )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Archive )( 
            ISmsMessage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trace )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomField1 )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomField2 )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusDetailsID )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerDetailsID )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Retries )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Retries )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTrace )( 
            ISmsMessage * This,
            /* [in] */ BSTR TraceString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CountAttachments )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentName )( 
            ISmsMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentSize )( 
            ISmsMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAttachment )( 
            ISmsMessage * This,
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveAttachment )( 
            ISmsMessage * This,
            /* [in] */ LONG IDX,
            /* [in] */ BSTR SaveAsFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ClearAttachments )( 
            ISmsMessage * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentID )( 
            ISmsMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAttachmentBase64 )( 
            ISmsMessage * This,
            /* [in] */ BSTR Base64,
            /* [defaultvalue][in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentBase64 )( 
            ISmsMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Base64);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FieldCount )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFieldNameFromIndex )( 
            ISmsMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValueRequired )( 
            ISmsMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValueType )( 
            ISmsMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            ISmsMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            ISmsMessage * This,
            /* [in] */ BSTR sField,
            /* [in] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPasswordValue )( 
            ISmsMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPasswordValue )( 
            ISmsMessage * This,
            /* [in] */ BSTR sField,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ToAddress )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ToAddressTon )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ToAddressNpi )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FromAddress )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FromAddressTon )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FromAddressNpi )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RequestDeliveryReport )( 
            ISmsMessage * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsDeliveryReport )( 
            ISmsMessage * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeliveryStatus )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ValidityPeriod )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataCoding )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BodyFormat )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HasUdh )( 
            ISmsMessage * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TotalParts )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PartNumber )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MultipartReference )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GsmSmscAddress )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GsmSmscAddressTon )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GsmSmscAddressNpi )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmppPriority )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmppServiceType )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmppTlvs )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Body )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reference )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmppStatusCode )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmppClient )( 
            ISmsMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmppSequenceNumber )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LanguageLockingShift )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LanguageSingleShift )( 
            ISmsMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ToAddress )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ToAddressTon )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ToAddressNpi )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FromAddress )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FromAddressTon )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FromAddressNpi )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestDeliveryReport )( 
            ISmsMessage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDeliveryReport )( 
            ISmsMessage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeliveryStatus )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValidityPeriod )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataCoding )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BodyFormat )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasUdh )( 
            ISmsMessage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TotalParts )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartNumber )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MultipartReference )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GsmSmscAddress )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GsmSmscAddressTon )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GsmSmscAddressNpi )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmppPriority )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmppServiceType )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmppTlvs )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Body )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Reference )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmppStatusCode )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmppClient )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmppSequenceNumber )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LanguageLockingShift )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LanguageSingleShift )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } ISmsMessageVtbl;

    interface ISmsMessage
    {
        CONST_VTBL struct ISmsMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmsMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmsMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmsMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmsMessage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmsMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmsMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmsMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmsMessage_SetMessageObject(This,pVal)	\
    ( (This)->lpVtbl -> SetMessageObject(This,pVal) ) 

#define ISmsMessage_GetMessageObject(This,ppVal)	\
    ( (This)->lpVtbl -> GetMessageObject(This,ppVal) ) 

#define ISmsMessage_GetFirstTlv(This,ppVal)	\
    ( (This)->lpVtbl -> GetFirstTlv(This,ppVal) ) 

#define ISmsMessage_GetNextTlv(This,ppVal)	\
    ( (This)->lpVtbl -> GetNextTlv(This,ppVal) ) 

#define ISmsMessage_AddTlv(This,pVal)	\
    ( (This)->lpVtbl -> AddTlv(This,pVal) ) 

#define ISmsMessage_GetTlv(This,lTag,ppVal)	\
    ( (This)->lpVtbl -> GetTlv(This,lTag,ppVal) ) 

#define ISmsMessage_DeleteTlv(This,lTag)	\
    ( (This)->lpVtbl -> DeleteTlv(This,lTag) ) 

#define ISmsMessage_ClearTlvs(This)	\
    ( (This)->lpVtbl -> ClearTlvs(This) ) 

#define ISmsMessage_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISmsMessage_put_DirectionID(This,Val)	\
    ( (This)->lpVtbl -> put_DirectionID(This,Val) ) 

#define ISmsMessage_put_StatusID(This,Val)	\
    ( (This)->lpVtbl -> put_StatusID(This,Val) ) 

#define ISmsMessage_put_TriggerStatusID(This,Val)	\
    ( (This)->lpVtbl -> put_TriggerStatusID(This,Val) ) 

#define ISmsMessage_put_AckStatusID(This,Val)	\
    ( (This)->lpVtbl -> put_AckStatusID(This,Val) ) 

#define ISmsMessage_put_ChannelID(This,Val)	\
    ( (This)->lpVtbl -> put_ChannelID(This,Val) ) 

#define ISmsMessage_put_BillingID(This,Val)	\
    ( (This)->lpVtbl -> put_BillingID(This,Val) ) 

#define ISmsMessage_put_ScheduledTime(This,Val)	\
    ( (This)->lpVtbl -> put_ScheduledTime(This,Val) ) 

#define ISmsMessage_put_SentTime(This,Val)	\
    ( (This)->lpVtbl -> put_SentTime(This,Val) ) 

#define ISmsMessage_put_ReceivedTime(This,Val)	\
    ( (This)->lpVtbl -> put_ReceivedTime(This,Val) ) 

#define ISmsMessage_put_Priority(This,Val)	\
    ( (This)->lpVtbl -> put_Priority(This,Val) ) 

#define ISmsMessage_put_BatchID(This,Val)	\
    ( (This)->lpVtbl -> put_BatchID(This,Val) ) 

#define ISmsMessage_put_ConversationID(This,Val)	\
    ( (This)->lpVtbl -> put_ConversationID(This,Val) ) 

#define ISmsMessage_put_Hash(This,Val)	\
    ( (This)->lpVtbl -> put_Hash(This,Val) ) 

#define ISmsMessage_put_Creator(This,Val)	\
    ( (This)->lpVtbl -> put_Creator(This,Val) ) 

#define ISmsMessage_put_Archive(This,Val)	\
    ( (This)->lpVtbl -> put_Archive(This,Val) ) 

#define ISmsMessage_put_CustomField1(This,Val)	\
    ( (This)->lpVtbl -> put_CustomField1(This,Val) ) 

#define ISmsMessage_put_CustomField2(This,Val)	\
    ( (This)->lpVtbl -> put_CustomField2(This,Val) ) 

#define ISmsMessage_put_StatusDetailsID(This,Val)	\
    ( (This)->lpVtbl -> put_StatusDetailsID(This,Val) ) 

#define ISmsMessage_put_TriggerDetailsID(This,Val)	\
    ( (This)->lpVtbl -> put_TriggerDetailsID(This,Val) ) 

#define ISmsMessage_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define ISmsMessage_get_DirectionID(This,pVal)	\
    ( (This)->lpVtbl -> get_DirectionID(This,pVal) ) 

#define ISmsMessage_get_TypeID(This,pVal)	\
    ( (This)->lpVtbl -> get_TypeID(This,pVal) ) 

#define ISmsMessage_get_StatusID(This,pVal)	\
    ( (This)->lpVtbl -> get_StatusID(This,pVal) ) 

#define ISmsMessage_get_TriggerStatusID(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggerStatusID(This,pVal) ) 

#define ISmsMessage_get_AckStatusID(This,pVal)	\
    ( (This)->lpVtbl -> get_AckStatusID(This,pVal) ) 

#define ISmsMessage_get_ChannelID(This,pVal)	\
    ( (This)->lpVtbl -> get_ChannelID(This,pVal) ) 

#define ISmsMessage_get_BillingID(This,pVal)	\
    ( (This)->lpVtbl -> get_BillingID(This,pVal) ) 

#define ISmsMessage_get_ScheduledTime(This,pVal)	\
    ( (This)->lpVtbl -> get_ScheduledTime(This,pVal) ) 

#define ISmsMessage_get_SentTime(This,pVal)	\
    ( (This)->lpVtbl -> get_SentTime(This,pVal) ) 

#define ISmsMessage_get_ReceivedTime(This,pVal)	\
    ( (This)->lpVtbl -> get_ReceivedTime(This,pVal) ) 

#define ISmsMessage_get_LastUpdate(This,pVal)	\
    ( (This)->lpVtbl -> get_LastUpdate(This,pVal) ) 

#define ISmsMessage_get_Priority(This,pVal)	\
    ( (This)->lpVtbl -> get_Priority(This,pVal) ) 

#define ISmsMessage_get_BatchID(This,pVal)	\
    ( (This)->lpVtbl -> get_BatchID(This,pVal) ) 

#define ISmsMessage_get_ConversationID(This,pVal)	\
    ( (This)->lpVtbl -> get_ConversationID(This,pVal) ) 

#define ISmsMessage_get_Hash(This,pVal)	\
    ( (This)->lpVtbl -> get_Hash(This,pVal) ) 

#define ISmsMessage_get_Creator(This,pVal)	\
    ( (This)->lpVtbl -> get_Creator(This,pVal) ) 

#define ISmsMessage_get_Archive(This,pVal)	\
    ( (This)->lpVtbl -> get_Archive(This,pVal) ) 

#define ISmsMessage_get_Trace(This,pVal)	\
    ( (This)->lpVtbl -> get_Trace(This,pVal) ) 

#define ISmsMessage_get_CustomField1(This,pVal)	\
    ( (This)->lpVtbl -> get_CustomField1(This,pVal) ) 

#define ISmsMessage_get_CustomField2(This,pVal)	\
    ( (This)->lpVtbl -> get_CustomField2(This,pVal) ) 

#define ISmsMessage_get_StatusDetailsID(This,pVal)	\
    ( (This)->lpVtbl -> get_StatusDetailsID(This,pVal) ) 

#define ISmsMessage_get_TriggerDetailsID(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggerDetailsID(This,pVal) ) 

#define ISmsMessage_put_Retries(This,Val)	\
    ( (This)->lpVtbl -> put_Retries(This,Val) ) 

#define ISmsMessage_get_Retries(This,pVal)	\
    ( (This)->lpVtbl -> get_Retries(This,pVal) ) 

#define ISmsMessage_AddTrace(This,TraceString)	\
    ( (This)->lpVtbl -> AddTrace(This,TraceString) ) 

#define ISmsMessage_CountAttachments(This,Count)	\
    ( (This)->lpVtbl -> CountAttachments(This,Count) ) 

#define ISmsMessage_GetAttachmentName(This,IDX,Name)	\
    ( (This)->lpVtbl -> GetAttachmentName(This,IDX,Name) ) 

#define ISmsMessage_GetAttachmentSize(This,IDX,Size)	\
    ( (This)->lpVtbl -> GetAttachmentSize(This,IDX,Size) ) 

#define ISmsMessage_AddAttachment(This,FileName,Name)	\
    ( (This)->lpVtbl -> AddAttachment(This,FileName,Name) ) 

#define ISmsMessage_SaveAttachment(This,IDX,SaveAsFile)	\
    ( (This)->lpVtbl -> SaveAttachment(This,IDX,SaveAsFile) ) 

#define ISmsMessage_ClearAttachments(This)	\
    ( (This)->lpVtbl -> ClearAttachments(This) ) 

#define ISmsMessage_GetAttachmentID(This,IDX,ID)	\
    ( (This)->lpVtbl -> GetAttachmentID(This,IDX,ID) ) 

#define ISmsMessage_AddAttachmentBase64(This,Base64,Name)	\
    ( (This)->lpVtbl -> AddAttachmentBase64(This,Base64,Name) ) 

#define ISmsMessage_GetAttachmentBase64(This,IDX,Base64)	\
    ( (This)->lpVtbl -> GetAttachmentBase64(This,IDX,Base64) ) 

#define ISmsMessage_get_FieldCount(This,Value)	\
    ( (This)->lpVtbl -> get_FieldCount(This,Value) ) 

#define ISmsMessage_GetFieldNameFromIndex(This,IDX,Value)	\
    ( (This)->lpVtbl -> GetFieldNameFromIndex(This,IDX,Value) ) 

#define ISmsMessage_GetValueRequired(This,sField,Value)	\
    ( (This)->lpVtbl -> GetValueRequired(This,sField,Value) ) 

#define ISmsMessage_GetValueType(This,sField,Value)	\
    ( (This)->lpVtbl -> GetValueType(This,sField,Value) ) 

#define ISmsMessage_GetValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> GetValue(This,sField,pVal) ) 

#define ISmsMessage_SetValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> SetValue(This,sField,pVal) ) 

#define ISmsMessage_GetPasswordValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> GetPasswordValue(This,sField,pVal) ) 

#define ISmsMessage_SetPasswordValue(This,sField,Val)	\
    ( (This)->lpVtbl -> SetPasswordValue(This,sField,Val) ) 

#define ISmsMessage_put_ToAddress(This,Val)	\
    ( (This)->lpVtbl -> put_ToAddress(This,Val) ) 

#define ISmsMessage_put_ToAddressTon(This,Val)	\
    ( (This)->lpVtbl -> put_ToAddressTon(This,Val) ) 

#define ISmsMessage_put_ToAddressNpi(This,Val)	\
    ( (This)->lpVtbl -> put_ToAddressNpi(This,Val) ) 

#define ISmsMessage_put_FromAddress(This,Val)	\
    ( (This)->lpVtbl -> put_FromAddress(This,Val) ) 

#define ISmsMessage_put_FromAddressTon(This,Val)	\
    ( (This)->lpVtbl -> put_FromAddressTon(This,Val) ) 

#define ISmsMessage_put_FromAddressNpi(This,Val)	\
    ( (This)->lpVtbl -> put_FromAddressNpi(This,Val) ) 

#define ISmsMessage_put_RequestDeliveryReport(This,Val)	\
    ( (This)->lpVtbl -> put_RequestDeliveryReport(This,Val) ) 

#define ISmsMessage_put_IsDeliveryReport(This,Val)	\
    ( (This)->lpVtbl -> put_IsDeliveryReport(This,Val) ) 

#define ISmsMessage_put_DeliveryStatus(This,Val)	\
    ( (This)->lpVtbl -> put_DeliveryStatus(This,Val) ) 

#define ISmsMessage_put_ValidityPeriod(This,Val)	\
    ( (This)->lpVtbl -> put_ValidityPeriod(This,Val) ) 

#define ISmsMessage_put_DataCoding(This,Val)	\
    ( (This)->lpVtbl -> put_DataCoding(This,Val) ) 

#define ISmsMessage_put_BodyFormat(This,Val)	\
    ( (This)->lpVtbl -> put_BodyFormat(This,Val) ) 

#define ISmsMessage_put_HasUdh(This,Val)	\
    ( (This)->lpVtbl -> put_HasUdh(This,Val) ) 

#define ISmsMessage_put_TotalParts(This,Val)	\
    ( (This)->lpVtbl -> put_TotalParts(This,Val) ) 

#define ISmsMessage_put_PartNumber(This,Val)	\
    ( (This)->lpVtbl -> put_PartNumber(This,Val) ) 

#define ISmsMessage_put_MultipartReference(This,Val)	\
    ( (This)->lpVtbl -> put_MultipartReference(This,Val) ) 

#define ISmsMessage_put_GsmSmscAddress(This,Val)	\
    ( (This)->lpVtbl -> put_GsmSmscAddress(This,Val) ) 

#define ISmsMessage_put_GsmSmscAddressTon(This,Val)	\
    ( (This)->lpVtbl -> put_GsmSmscAddressTon(This,Val) ) 

#define ISmsMessage_put_GsmSmscAddressNpi(This,Val)	\
    ( (This)->lpVtbl -> put_GsmSmscAddressNpi(This,Val) ) 

#define ISmsMessage_put_SmppPriority(This,Val)	\
    ( (This)->lpVtbl -> put_SmppPriority(This,Val) ) 

#define ISmsMessage_put_SmppServiceType(This,Val)	\
    ( (This)->lpVtbl -> put_SmppServiceType(This,Val) ) 

#define ISmsMessage_put_SmppTlvs(This,Val)	\
    ( (This)->lpVtbl -> put_SmppTlvs(This,Val) ) 

#define ISmsMessage_put_Body(This,Val)	\
    ( (This)->lpVtbl -> put_Body(This,Val) ) 

#define ISmsMessage_put_Reference(This,Val)	\
    ( (This)->lpVtbl -> put_Reference(This,Val) ) 

#define ISmsMessage_put_SmppStatusCode(This,Val)	\
    ( (This)->lpVtbl -> put_SmppStatusCode(This,Val) ) 

#define ISmsMessage_put_SmppClient(This,Val)	\
    ( (This)->lpVtbl -> put_SmppClient(This,Val) ) 

#define ISmsMessage_put_SmppSequenceNumber(This,Val)	\
    ( (This)->lpVtbl -> put_SmppSequenceNumber(This,Val) ) 

#define ISmsMessage_put_LanguageLockingShift(This,Val)	\
    ( (This)->lpVtbl -> put_LanguageLockingShift(This,Val) ) 

#define ISmsMessage_put_LanguageSingleShift(This,Val)	\
    ( (This)->lpVtbl -> put_LanguageSingleShift(This,Val) ) 

#define ISmsMessage_get_ToAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_ToAddress(This,pVal) ) 

#define ISmsMessage_get_ToAddressTon(This,pVal)	\
    ( (This)->lpVtbl -> get_ToAddressTon(This,pVal) ) 

#define ISmsMessage_get_ToAddressNpi(This,pVal)	\
    ( (This)->lpVtbl -> get_ToAddressNpi(This,pVal) ) 

#define ISmsMessage_get_FromAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_FromAddress(This,pVal) ) 

#define ISmsMessage_get_FromAddressTon(This,pVal)	\
    ( (This)->lpVtbl -> get_FromAddressTon(This,pVal) ) 

#define ISmsMessage_get_FromAddressNpi(This,pVal)	\
    ( (This)->lpVtbl -> get_FromAddressNpi(This,pVal) ) 

#define ISmsMessage_get_RequestDeliveryReport(This,pVal)	\
    ( (This)->lpVtbl -> get_RequestDeliveryReport(This,pVal) ) 

#define ISmsMessage_get_IsDeliveryReport(This,pVal)	\
    ( (This)->lpVtbl -> get_IsDeliveryReport(This,pVal) ) 

#define ISmsMessage_get_DeliveryStatus(This,pVal)	\
    ( (This)->lpVtbl -> get_DeliveryStatus(This,pVal) ) 

#define ISmsMessage_get_ValidityPeriod(This,pVal)	\
    ( (This)->lpVtbl -> get_ValidityPeriod(This,pVal) ) 

#define ISmsMessage_get_DataCoding(This,pVal)	\
    ( (This)->lpVtbl -> get_DataCoding(This,pVal) ) 

#define ISmsMessage_get_BodyFormat(This,pVal)	\
    ( (This)->lpVtbl -> get_BodyFormat(This,pVal) ) 

#define ISmsMessage_get_HasUdh(This,pVal)	\
    ( (This)->lpVtbl -> get_HasUdh(This,pVal) ) 

#define ISmsMessage_get_TotalParts(This,pVal)	\
    ( (This)->lpVtbl -> get_TotalParts(This,pVal) ) 

#define ISmsMessage_get_PartNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_PartNumber(This,pVal) ) 

#define ISmsMessage_get_MultipartReference(This,pVal)	\
    ( (This)->lpVtbl -> get_MultipartReference(This,pVal) ) 

#define ISmsMessage_get_GsmSmscAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_GsmSmscAddress(This,pVal) ) 

#define ISmsMessage_get_GsmSmscAddressTon(This,pVal)	\
    ( (This)->lpVtbl -> get_GsmSmscAddressTon(This,pVal) ) 

#define ISmsMessage_get_GsmSmscAddressNpi(This,pVal)	\
    ( (This)->lpVtbl -> get_GsmSmscAddressNpi(This,pVal) ) 

#define ISmsMessage_get_SmppPriority(This,pVal)	\
    ( (This)->lpVtbl -> get_SmppPriority(This,pVal) ) 

#define ISmsMessage_get_SmppServiceType(This,pVal)	\
    ( (This)->lpVtbl -> get_SmppServiceType(This,pVal) ) 

#define ISmsMessage_get_SmppTlvs(This,pVal)	\
    ( (This)->lpVtbl -> get_SmppTlvs(This,pVal) ) 

#define ISmsMessage_get_Body(This,pVal)	\
    ( (This)->lpVtbl -> get_Body(This,pVal) ) 

#define ISmsMessage_get_Reference(This,pVal)	\
    ( (This)->lpVtbl -> get_Reference(This,pVal) ) 

#define ISmsMessage_get_SmppStatusCode(This,pVal)	\
    ( (This)->lpVtbl -> get_SmppStatusCode(This,pVal) ) 

#define ISmsMessage_get_SmppClient(This,pVal)	\
    ( (This)->lpVtbl -> get_SmppClient(This,pVal) ) 

#define ISmsMessage_get_SmppSequenceNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_SmppSequenceNumber(This,pVal) ) 

#define ISmsMessage_get_LanguageLockingShift(This,pVal)	\
    ( (This)->lpVtbl -> get_LanguageLockingShift(This,pVal) ) 

#define ISmsMessage_get_LanguageSingleShift(This,pVal)	\
    ( (This)->lpVtbl -> get_LanguageSingleShift(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISmsMessage_get_SmppTlvs_Proxy( 
    ISmsMessage * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISmsMessage_get_SmppTlvs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISmsMessage_get_Body_Proxy( 
    ISmsMessage * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISmsMessage_get_Body_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISmsMessage_get_Reference_Proxy( 
    ISmsMessage * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISmsMessage_get_Reference_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISmsMessage_get_SmppStatusCode_Proxy( 
    ISmsMessage * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISmsMessage_get_SmppStatusCode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISmsMessage_get_SmppClient_Proxy( 
    ISmsMessage * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISmsMessage_get_SmppClient_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISmsMessage_get_SmppSequenceNumber_Proxy( 
    ISmsMessage * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISmsMessage_get_SmppSequenceNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISmsMessage_get_LanguageLockingShift_Proxy( 
    ISmsMessage * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISmsMessage_get_LanguageLockingShift_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISmsMessage_get_LanguageSingleShift_Proxy( 
    ISmsMessage * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISmsMessage_get_LanguageSingleShift_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISmsMessage_INTERFACE_DEFINED__ */


#ifndef __ISmppServerBindMessage_INTERFACE_DEFINED__
#define __ISmppServerBindMessage_INTERFACE_DEFINED__

/* interface ISmppServerBindMessage */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmppServerBindMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4B22ED87-4BBF-4BF7-8C32-94509C6427DB")
    ISmppServerBindMessage : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetMessageObject( 
            /* [in] */ IMessage *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMessageObject( 
            /* [retval][out] */ IMessage **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFirstTlv( 
            /* [retval][out] */ ITlv **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNextTlv( 
            /* [retval][out] */ ITlv **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTlv( 
            /* [in] */ ITlv *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTlv( 
            /* [in] */ LONG lTag,
            /* [retval][out] */ ITlv **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteTlv( 
            /* [in] */ LONG lTag) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DirectionID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StatusID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerStatusID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AckStatusID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ChannelID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BillingID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScheduledTime( 
            /* [in] */ DATE Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SentTime( 
            /* [in] */ DATE Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReceivedTime( 
            /* [in] */ DATE Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Priority( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BatchID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ConversationID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Hash( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Creator( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Archive( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CustomField1( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CustomField2( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StatusDetailsID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerDetailsID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DirectionID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TypeID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StatusID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerStatusID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AckStatusID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ChannelID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BillingID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScheduledTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SentTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReceivedTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastUpdate( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Priority( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BatchID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConversationID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Hash( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Creator( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Archive( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Trace( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomField1( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomField2( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StatusDetailsID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerDetailsID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Retries( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Retries( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTrace( 
            /* [in] */ BSTR TraceString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CountAttachments( 
            /* [retval][out] */ LONG *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentName( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentSize( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAttachment( 
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Name = (BSTR)L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveAttachment( 
            /* [in] */ LONG IDX,
            /* [in] */ BSTR SaveAsFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearAttachments( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentID( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *ID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAttachmentBase64( 
            /* [in] */ BSTR Base64,
            /* [defaultvalue][in] */ BSTR Name = (BSTR)L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentBase64( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Base64) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FieldCount( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFieldNameFromIndex( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValueRequired( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValueType( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValue( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ BSTR sField,
            /* [in] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPasswordValue( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPasswordValue( 
            /* [in] */ BSTR sField,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BindType( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Client( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SystemId( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Password( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SystemType( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AddressRange( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AddressRangeNPI( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AddressRangeTON( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Version( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Tlvs( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StatusCode( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BindType( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Client( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Password( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemType( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AddressRange( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AddressRangeNPI( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AddressRangeTON( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Tlvs( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StatusCode( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISmppServerBindMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmppServerBindMessage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmppServerBindMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmppServerBindMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmppServerBindMessage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmppServerBindMessage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmppServerBindMessage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmppServerBindMessage * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetMessageObject )( 
            ISmppServerBindMessage * This,
            /* [in] */ IMessage *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMessageObject )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ IMessage **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstTlv )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ ITlv **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNextTlv )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ ITlv **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTlv )( 
            ISmppServerBindMessage * This,
            /* [in] */ ITlv *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTlv )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG lTag,
            /* [retval][out] */ ITlv **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteTlv )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG lTag);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DirectionID )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusID )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerStatusID )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AckStatusID )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ChannelID )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BillingID )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScheduledTime )( 
            ISmppServerBindMessage * This,
            /* [in] */ DATE Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SentTime )( 
            ISmppServerBindMessage * This,
            /* [in] */ DATE Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReceivedTime )( 
            ISmppServerBindMessage * This,
            /* [in] */ DATE Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Priority )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BatchID )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConversationID )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Hash )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Creator )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Archive )( 
            ISmppServerBindMessage * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomField1 )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomField2 )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusDetailsID )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerDetailsID )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DirectionID )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TypeID )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusID )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerStatusID )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AckStatusID )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChannelID )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BillingID )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScheduledTime )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SentTime )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReceivedTime )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpdate )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Priority )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BatchID )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConversationID )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Hash )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Creator )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Archive )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trace )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomField1 )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomField2 )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusDetailsID )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerDetailsID )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Retries )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Retries )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTrace )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR TraceString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CountAttachments )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ LONG *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentName )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentSize )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAttachment )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveAttachment )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG IDX,
            /* [in] */ BSTR SaveAsFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ClearAttachments )( 
            ISmppServerBindMessage * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentID )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAttachmentBase64 )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR Base64,
            /* [defaultvalue][in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentBase64 )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Base64);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FieldCount )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFieldNameFromIndex )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValueRequired )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValueType )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR sField,
            /* [in] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPasswordValue )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPasswordValue )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR sField,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BindType )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Client )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SystemId )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Password )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SystemType )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AddressRange )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AddressRangeNPI )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AddressRangeTON )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Version )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Tlvs )( 
            ISmppServerBindMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusCode )( 
            ISmppServerBindMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BindType )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Client )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemId )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Password )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemType )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressRange )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressRangeNPI )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressRangeTON )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tlvs )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusCode )( 
            ISmppServerBindMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } ISmppServerBindMessageVtbl;

    interface ISmppServerBindMessage
    {
        CONST_VTBL struct ISmppServerBindMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmppServerBindMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmppServerBindMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmppServerBindMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmppServerBindMessage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmppServerBindMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmppServerBindMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmppServerBindMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmppServerBindMessage_SetMessageObject(This,pVal)	\
    ( (This)->lpVtbl -> SetMessageObject(This,pVal) ) 

#define ISmppServerBindMessage_GetMessageObject(This,ppVal)	\
    ( (This)->lpVtbl -> GetMessageObject(This,ppVal) ) 

#define ISmppServerBindMessage_GetFirstTlv(This,ppVal)	\
    ( (This)->lpVtbl -> GetFirstTlv(This,ppVal) ) 

#define ISmppServerBindMessage_GetNextTlv(This,ppVal)	\
    ( (This)->lpVtbl -> GetNextTlv(This,ppVal) ) 

#define ISmppServerBindMessage_AddTlv(This,pVal)	\
    ( (This)->lpVtbl -> AddTlv(This,pVal) ) 

#define ISmppServerBindMessage_GetTlv(This,lTag,ppVal)	\
    ( (This)->lpVtbl -> GetTlv(This,lTag,ppVal) ) 

#define ISmppServerBindMessage_DeleteTlv(This,lTag)	\
    ( (This)->lpVtbl -> DeleteTlv(This,lTag) ) 

#define ISmppServerBindMessage_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISmppServerBindMessage_put_DirectionID(This,Val)	\
    ( (This)->lpVtbl -> put_DirectionID(This,Val) ) 

#define ISmppServerBindMessage_put_StatusID(This,Val)	\
    ( (This)->lpVtbl -> put_StatusID(This,Val) ) 

#define ISmppServerBindMessage_put_TriggerStatusID(This,Val)	\
    ( (This)->lpVtbl -> put_TriggerStatusID(This,Val) ) 

#define ISmppServerBindMessage_put_AckStatusID(This,Val)	\
    ( (This)->lpVtbl -> put_AckStatusID(This,Val) ) 

#define ISmppServerBindMessage_put_ChannelID(This,Val)	\
    ( (This)->lpVtbl -> put_ChannelID(This,Val) ) 

#define ISmppServerBindMessage_put_BillingID(This,Val)	\
    ( (This)->lpVtbl -> put_BillingID(This,Val) ) 

#define ISmppServerBindMessage_put_ScheduledTime(This,Val)	\
    ( (This)->lpVtbl -> put_ScheduledTime(This,Val) ) 

#define ISmppServerBindMessage_put_SentTime(This,Val)	\
    ( (This)->lpVtbl -> put_SentTime(This,Val) ) 

#define ISmppServerBindMessage_put_ReceivedTime(This,Val)	\
    ( (This)->lpVtbl -> put_ReceivedTime(This,Val) ) 

#define ISmppServerBindMessage_put_Priority(This,Val)	\
    ( (This)->lpVtbl -> put_Priority(This,Val) ) 

#define ISmppServerBindMessage_put_BatchID(This,Val)	\
    ( (This)->lpVtbl -> put_BatchID(This,Val) ) 

#define ISmppServerBindMessage_put_ConversationID(This,Val)	\
    ( (This)->lpVtbl -> put_ConversationID(This,Val) ) 

#define ISmppServerBindMessage_put_Hash(This,Val)	\
    ( (This)->lpVtbl -> put_Hash(This,Val) ) 

#define ISmppServerBindMessage_put_Creator(This,Val)	\
    ( (This)->lpVtbl -> put_Creator(This,Val) ) 

#define ISmppServerBindMessage_put_Archive(This,Val)	\
    ( (This)->lpVtbl -> put_Archive(This,Val) ) 

#define ISmppServerBindMessage_put_CustomField1(This,Val)	\
    ( (This)->lpVtbl -> put_CustomField1(This,Val) ) 

#define ISmppServerBindMessage_put_CustomField2(This,Val)	\
    ( (This)->lpVtbl -> put_CustomField2(This,Val) ) 

#define ISmppServerBindMessage_put_StatusDetailsID(This,Val)	\
    ( (This)->lpVtbl -> put_StatusDetailsID(This,Val) ) 

#define ISmppServerBindMessage_put_TriggerDetailsID(This,Val)	\
    ( (This)->lpVtbl -> put_TriggerDetailsID(This,Val) ) 

#define ISmppServerBindMessage_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define ISmppServerBindMessage_get_DirectionID(This,pVal)	\
    ( (This)->lpVtbl -> get_DirectionID(This,pVal) ) 

#define ISmppServerBindMessage_get_TypeID(This,pVal)	\
    ( (This)->lpVtbl -> get_TypeID(This,pVal) ) 

#define ISmppServerBindMessage_get_StatusID(This,pVal)	\
    ( (This)->lpVtbl -> get_StatusID(This,pVal) ) 

#define ISmppServerBindMessage_get_TriggerStatusID(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggerStatusID(This,pVal) ) 

#define ISmppServerBindMessage_get_AckStatusID(This,pVal)	\
    ( (This)->lpVtbl -> get_AckStatusID(This,pVal) ) 

#define ISmppServerBindMessage_get_ChannelID(This,pVal)	\
    ( (This)->lpVtbl -> get_ChannelID(This,pVal) ) 

#define ISmppServerBindMessage_get_BillingID(This,pVal)	\
    ( (This)->lpVtbl -> get_BillingID(This,pVal) ) 

#define ISmppServerBindMessage_get_ScheduledTime(This,pVal)	\
    ( (This)->lpVtbl -> get_ScheduledTime(This,pVal) ) 

#define ISmppServerBindMessage_get_SentTime(This,pVal)	\
    ( (This)->lpVtbl -> get_SentTime(This,pVal) ) 

#define ISmppServerBindMessage_get_ReceivedTime(This,pVal)	\
    ( (This)->lpVtbl -> get_ReceivedTime(This,pVal) ) 

#define ISmppServerBindMessage_get_LastUpdate(This,pVal)	\
    ( (This)->lpVtbl -> get_LastUpdate(This,pVal) ) 

#define ISmppServerBindMessage_get_Priority(This,pVal)	\
    ( (This)->lpVtbl -> get_Priority(This,pVal) ) 

#define ISmppServerBindMessage_get_BatchID(This,pVal)	\
    ( (This)->lpVtbl -> get_BatchID(This,pVal) ) 

#define ISmppServerBindMessage_get_ConversationID(This,pVal)	\
    ( (This)->lpVtbl -> get_ConversationID(This,pVal) ) 

#define ISmppServerBindMessage_get_Hash(This,pVal)	\
    ( (This)->lpVtbl -> get_Hash(This,pVal) ) 

#define ISmppServerBindMessage_get_Creator(This,pVal)	\
    ( (This)->lpVtbl -> get_Creator(This,pVal) ) 

#define ISmppServerBindMessage_get_Archive(This,pVal)	\
    ( (This)->lpVtbl -> get_Archive(This,pVal) ) 

#define ISmppServerBindMessage_get_Trace(This,pVal)	\
    ( (This)->lpVtbl -> get_Trace(This,pVal) ) 

#define ISmppServerBindMessage_get_CustomField1(This,pVal)	\
    ( (This)->lpVtbl -> get_CustomField1(This,pVal) ) 

#define ISmppServerBindMessage_get_CustomField2(This,pVal)	\
    ( (This)->lpVtbl -> get_CustomField2(This,pVal) ) 

#define ISmppServerBindMessage_get_StatusDetailsID(This,pVal)	\
    ( (This)->lpVtbl -> get_StatusDetailsID(This,pVal) ) 

#define ISmppServerBindMessage_get_TriggerDetailsID(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggerDetailsID(This,pVal) ) 

#define ISmppServerBindMessage_put_Retries(This,Val)	\
    ( (This)->lpVtbl -> put_Retries(This,Val) ) 

#define ISmppServerBindMessage_get_Retries(This,pVal)	\
    ( (This)->lpVtbl -> get_Retries(This,pVal) ) 

#define ISmppServerBindMessage_AddTrace(This,TraceString)	\
    ( (This)->lpVtbl -> AddTrace(This,TraceString) ) 

#define ISmppServerBindMessage_CountAttachments(This,Count)	\
    ( (This)->lpVtbl -> CountAttachments(This,Count) ) 

#define ISmppServerBindMessage_GetAttachmentName(This,IDX,Name)	\
    ( (This)->lpVtbl -> GetAttachmentName(This,IDX,Name) ) 

#define ISmppServerBindMessage_GetAttachmentSize(This,IDX,Size)	\
    ( (This)->lpVtbl -> GetAttachmentSize(This,IDX,Size) ) 

#define ISmppServerBindMessage_AddAttachment(This,FileName,Name)	\
    ( (This)->lpVtbl -> AddAttachment(This,FileName,Name) ) 

#define ISmppServerBindMessage_SaveAttachment(This,IDX,SaveAsFile)	\
    ( (This)->lpVtbl -> SaveAttachment(This,IDX,SaveAsFile) ) 

#define ISmppServerBindMessage_ClearAttachments(This)	\
    ( (This)->lpVtbl -> ClearAttachments(This) ) 

#define ISmppServerBindMessage_GetAttachmentID(This,IDX,ID)	\
    ( (This)->lpVtbl -> GetAttachmentID(This,IDX,ID) ) 

#define ISmppServerBindMessage_AddAttachmentBase64(This,Base64,Name)	\
    ( (This)->lpVtbl -> AddAttachmentBase64(This,Base64,Name) ) 

#define ISmppServerBindMessage_GetAttachmentBase64(This,IDX,Base64)	\
    ( (This)->lpVtbl -> GetAttachmentBase64(This,IDX,Base64) ) 

#define ISmppServerBindMessage_get_FieldCount(This,Value)	\
    ( (This)->lpVtbl -> get_FieldCount(This,Value) ) 

#define ISmppServerBindMessage_GetFieldNameFromIndex(This,IDX,Value)	\
    ( (This)->lpVtbl -> GetFieldNameFromIndex(This,IDX,Value) ) 

#define ISmppServerBindMessage_GetValueRequired(This,sField,Value)	\
    ( (This)->lpVtbl -> GetValueRequired(This,sField,Value) ) 

#define ISmppServerBindMessage_GetValueType(This,sField,Value)	\
    ( (This)->lpVtbl -> GetValueType(This,sField,Value) ) 

#define ISmppServerBindMessage_GetValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> GetValue(This,sField,pVal) ) 

#define ISmppServerBindMessage_SetValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> SetValue(This,sField,pVal) ) 

#define ISmppServerBindMessage_GetPasswordValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> GetPasswordValue(This,sField,pVal) ) 

#define ISmppServerBindMessage_SetPasswordValue(This,sField,Val)	\
    ( (This)->lpVtbl -> SetPasswordValue(This,sField,Val) ) 

#define ISmppServerBindMessage_put_BindType(This,Val)	\
    ( (This)->lpVtbl -> put_BindType(This,Val) ) 

#define ISmppServerBindMessage_put_Client(This,Val)	\
    ( (This)->lpVtbl -> put_Client(This,Val) ) 

#define ISmppServerBindMessage_put_SystemId(This,Val)	\
    ( (This)->lpVtbl -> put_SystemId(This,Val) ) 

#define ISmppServerBindMessage_put_Password(This,Val)	\
    ( (This)->lpVtbl -> put_Password(This,Val) ) 

#define ISmppServerBindMessage_put_SystemType(This,Val)	\
    ( (This)->lpVtbl -> put_SystemType(This,Val) ) 

#define ISmppServerBindMessage_put_AddressRange(This,Val)	\
    ( (This)->lpVtbl -> put_AddressRange(This,Val) ) 

#define ISmppServerBindMessage_put_AddressRangeNPI(This,Val)	\
    ( (This)->lpVtbl -> put_AddressRangeNPI(This,Val) ) 

#define ISmppServerBindMessage_put_AddressRangeTON(This,Val)	\
    ( (This)->lpVtbl -> put_AddressRangeTON(This,Val) ) 

#define ISmppServerBindMessage_put_Version(This,Val)	\
    ( (This)->lpVtbl -> put_Version(This,Val) ) 

#define ISmppServerBindMessage_put_Tlvs(This,Val)	\
    ( (This)->lpVtbl -> put_Tlvs(This,Val) ) 

#define ISmppServerBindMessage_put_StatusCode(This,Val)	\
    ( (This)->lpVtbl -> put_StatusCode(This,Val) ) 

#define ISmppServerBindMessage_get_BindType(This,pVal)	\
    ( (This)->lpVtbl -> get_BindType(This,pVal) ) 

#define ISmppServerBindMessage_get_Client(This,pVal)	\
    ( (This)->lpVtbl -> get_Client(This,pVal) ) 

#define ISmppServerBindMessage_get_SystemId(This,pVal)	\
    ( (This)->lpVtbl -> get_SystemId(This,pVal) ) 

#define ISmppServerBindMessage_get_Password(This,pVal)	\
    ( (This)->lpVtbl -> get_Password(This,pVal) ) 

#define ISmppServerBindMessage_get_SystemType(This,pVal)	\
    ( (This)->lpVtbl -> get_SystemType(This,pVal) ) 

#define ISmppServerBindMessage_get_AddressRange(This,pVal)	\
    ( (This)->lpVtbl -> get_AddressRange(This,pVal) ) 

#define ISmppServerBindMessage_get_AddressRangeNPI(This,pVal)	\
    ( (This)->lpVtbl -> get_AddressRangeNPI(This,pVal) ) 

#define ISmppServerBindMessage_get_AddressRangeTON(This,pVal)	\
    ( (This)->lpVtbl -> get_AddressRangeTON(This,pVal) ) 

#define ISmppServerBindMessage_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ISmppServerBindMessage_get_Tlvs(This,pVal)	\
    ( (This)->lpVtbl -> get_Tlvs(This,pVal) ) 

#define ISmppServerBindMessage_get_StatusCode(This,pVal)	\
    ( (This)->lpVtbl -> get_StatusCode(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmppServerBindMessage_INTERFACE_DEFINED__ */


#ifndef __IEmailMessage_INTERFACE_DEFINED__
#define __IEmailMessage_INTERFACE_DEFINED__

/* interface IEmailMessage */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IEmailMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5D0EEB66-D90A-4B7F-BB74-DC72622D3FB7")
    IEmailMessage : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetMessageObject( 
            /* [in] */ IMessage *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMessageObject( 
            /* [retval][out] */ IMessage **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DirectionID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StatusID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerStatusID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AckStatusID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ChannelID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BillingID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScheduledTime( 
            /* [in] */ DATE Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SentTime( 
            /* [in] */ DATE Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReceivedTime( 
            /* [in] */ DATE Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Priority( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BatchID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ConversationID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Hash( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Creator( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Archive( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CustomField1( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CustomField2( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StatusDetailsID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerDetailsID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DirectionID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TypeID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StatusID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerStatusID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AckStatusID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ChannelID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BillingID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScheduledTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SentTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReceivedTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastUpdate( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Priority( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BatchID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConversationID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Hash( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Creator( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Archive( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Trace( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomField1( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomField2( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StatusDetailsID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerDetailsID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Retries( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Retries( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTrace( 
            /* [in] */ BSTR TraceString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CountAttachments( 
            /* [retval][out] */ LONG *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentName( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentSize( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAttachment( 
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Name = (BSTR)L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveAttachment( 
            /* [in] */ LONG IDX,
            /* [in] */ BSTR SaveAsFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearAttachments( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentID( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *ID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAttachmentBase64( 
            /* [in] */ BSTR Base64,
            /* [defaultvalue][in] */ BSTR Name = (BSTR)L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentBase64( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Base64) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FieldCount( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFieldNameFromIndex( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValueRequired( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValueType( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValue( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ BSTR sField,
            /* [in] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPasswordValue( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPasswordValue( 
            /* [in] */ BSTR sField,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ImapUID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Pop3ID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Organization( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReadReceiptAddress( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FromName( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReplyAddress( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Subject( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ToAddress( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FromAddress( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CcAddress( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BccAddress( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BodyPlainText( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BodyHtml( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Header( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EmailPriority( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ImapUID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Pop3ID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Organization( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReadReceiptAddress( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FromName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReplyAddress( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Subject( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ToAddress( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FromAddress( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CcAddress( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BccAddress( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BodyPlainText( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BodyHtml( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Header( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EmailPriority( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEmailMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEmailMessage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEmailMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEmailMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEmailMessage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEmailMessage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEmailMessage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEmailMessage * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetMessageObject )( 
            IEmailMessage * This,
            /* [in] */ IMessage *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMessageObject )( 
            IEmailMessage * This,
            /* [retval][out] */ IMessage **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IEmailMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DirectionID )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusID )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerStatusID )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AckStatusID )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ChannelID )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BillingID )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScheduledTime )( 
            IEmailMessage * This,
            /* [in] */ DATE Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SentTime )( 
            IEmailMessage * This,
            /* [in] */ DATE Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReceivedTime )( 
            IEmailMessage * This,
            /* [in] */ DATE Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Priority )( 
            IEmailMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BatchID )( 
            IEmailMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConversationID )( 
            IEmailMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Hash )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Creator )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Archive )( 
            IEmailMessage * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomField1 )( 
            IEmailMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomField2 )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusDetailsID )( 
            IEmailMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerDetailsID )( 
            IEmailMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IEmailMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DirectionID )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TypeID )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusID )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerStatusID )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AckStatusID )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChannelID )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BillingID )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScheduledTime )( 
            IEmailMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SentTime )( 
            IEmailMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReceivedTime )( 
            IEmailMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpdate )( 
            IEmailMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Priority )( 
            IEmailMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BatchID )( 
            IEmailMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConversationID )( 
            IEmailMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Hash )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Creator )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Archive )( 
            IEmailMessage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trace )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomField1 )( 
            IEmailMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomField2 )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusDetailsID )( 
            IEmailMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerDetailsID )( 
            IEmailMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Retries )( 
            IEmailMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Retries )( 
            IEmailMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTrace )( 
            IEmailMessage * This,
            /* [in] */ BSTR TraceString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CountAttachments )( 
            IEmailMessage * This,
            /* [retval][out] */ LONG *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentName )( 
            IEmailMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentSize )( 
            IEmailMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAttachment )( 
            IEmailMessage * This,
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveAttachment )( 
            IEmailMessage * This,
            /* [in] */ LONG IDX,
            /* [in] */ BSTR SaveAsFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ClearAttachments )( 
            IEmailMessage * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentID )( 
            IEmailMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAttachmentBase64 )( 
            IEmailMessage * This,
            /* [in] */ BSTR Base64,
            /* [defaultvalue][in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentBase64 )( 
            IEmailMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Base64);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FieldCount )( 
            IEmailMessage * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFieldNameFromIndex )( 
            IEmailMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValueRequired )( 
            IEmailMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValueType )( 
            IEmailMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            IEmailMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            IEmailMessage * This,
            /* [in] */ BSTR sField,
            /* [in] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPasswordValue )( 
            IEmailMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPasswordValue )( 
            IEmailMessage * This,
            /* [in] */ BSTR sField,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ImapUID )( 
            IEmailMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Pop3ID )( 
            IEmailMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Organization )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReadReceiptAddress )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FromName )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReplyAddress )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Subject )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ToAddress )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FromAddress )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CcAddress )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BccAddress )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BodyPlainText )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BodyHtml )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Header )( 
            IEmailMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EmailPriority )( 
            IEmailMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImapUID )( 
            IEmailMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Pop3ID )( 
            IEmailMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Organization )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReadReceiptAddress )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FromName )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReplyAddress )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Subject )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ToAddress )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FromAddress )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CcAddress )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BccAddress )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BodyPlainText )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BodyHtml )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Header )( 
            IEmailMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EmailPriority )( 
            IEmailMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IEmailMessageVtbl;

    interface IEmailMessage
    {
        CONST_VTBL struct IEmailMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEmailMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEmailMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEmailMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEmailMessage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEmailMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEmailMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEmailMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEmailMessage_SetMessageObject(This,pVal)	\
    ( (This)->lpVtbl -> SetMessageObject(This,pVal) ) 

#define IEmailMessage_GetMessageObject(This,ppVal)	\
    ( (This)->lpVtbl -> GetMessageObject(This,ppVal) ) 

#define IEmailMessage_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IEmailMessage_put_DirectionID(This,Val)	\
    ( (This)->lpVtbl -> put_DirectionID(This,Val) ) 

#define IEmailMessage_put_StatusID(This,Val)	\
    ( (This)->lpVtbl -> put_StatusID(This,Val) ) 

#define IEmailMessage_put_TriggerStatusID(This,Val)	\
    ( (This)->lpVtbl -> put_TriggerStatusID(This,Val) ) 

#define IEmailMessage_put_AckStatusID(This,Val)	\
    ( (This)->lpVtbl -> put_AckStatusID(This,Val) ) 

#define IEmailMessage_put_ChannelID(This,Val)	\
    ( (This)->lpVtbl -> put_ChannelID(This,Val) ) 

#define IEmailMessage_put_BillingID(This,Val)	\
    ( (This)->lpVtbl -> put_BillingID(This,Val) ) 

#define IEmailMessage_put_ScheduledTime(This,Val)	\
    ( (This)->lpVtbl -> put_ScheduledTime(This,Val) ) 

#define IEmailMessage_put_SentTime(This,Val)	\
    ( (This)->lpVtbl -> put_SentTime(This,Val) ) 

#define IEmailMessage_put_ReceivedTime(This,Val)	\
    ( (This)->lpVtbl -> put_ReceivedTime(This,Val) ) 

#define IEmailMessage_put_Priority(This,Val)	\
    ( (This)->lpVtbl -> put_Priority(This,Val) ) 

#define IEmailMessage_put_BatchID(This,Val)	\
    ( (This)->lpVtbl -> put_BatchID(This,Val) ) 

#define IEmailMessage_put_ConversationID(This,Val)	\
    ( (This)->lpVtbl -> put_ConversationID(This,Val) ) 

#define IEmailMessage_put_Hash(This,Val)	\
    ( (This)->lpVtbl -> put_Hash(This,Val) ) 

#define IEmailMessage_put_Creator(This,Val)	\
    ( (This)->lpVtbl -> put_Creator(This,Val) ) 

#define IEmailMessage_put_Archive(This,Val)	\
    ( (This)->lpVtbl -> put_Archive(This,Val) ) 

#define IEmailMessage_put_CustomField1(This,Val)	\
    ( (This)->lpVtbl -> put_CustomField1(This,Val) ) 

#define IEmailMessage_put_CustomField2(This,Val)	\
    ( (This)->lpVtbl -> put_CustomField2(This,Val) ) 

#define IEmailMessage_put_StatusDetailsID(This,Val)	\
    ( (This)->lpVtbl -> put_StatusDetailsID(This,Val) ) 

#define IEmailMessage_put_TriggerDetailsID(This,Val)	\
    ( (This)->lpVtbl -> put_TriggerDetailsID(This,Val) ) 

#define IEmailMessage_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define IEmailMessage_get_DirectionID(This,pVal)	\
    ( (This)->lpVtbl -> get_DirectionID(This,pVal) ) 

#define IEmailMessage_get_TypeID(This,pVal)	\
    ( (This)->lpVtbl -> get_TypeID(This,pVal) ) 

#define IEmailMessage_get_StatusID(This,pVal)	\
    ( (This)->lpVtbl -> get_StatusID(This,pVal) ) 

#define IEmailMessage_get_TriggerStatusID(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggerStatusID(This,pVal) ) 

#define IEmailMessage_get_AckStatusID(This,pVal)	\
    ( (This)->lpVtbl -> get_AckStatusID(This,pVal) ) 

#define IEmailMessage_get_ChannelID(This,pVal)	\
    ( (This)->lpVtbl -> get_ChannelID(This,pVal) ) 

#define IEmailMessage_get_BillingID(This,pVal)	\
    ( (This)->lpVtbl -> get_BillingID(This,pVal) ) 

#define IEmailMessage_get_ScheduledTime(This,pVal)	\
    ( (This)->lpVtbl -> get_ScheduledTime(This,pVal) ) 

#define IEmailMessage_get_SentTime(This,pVal)	\
    ( (This)->lpVtbl -> get_SentTime(This,pVal) ) 

#define IEmailMessage_get_ReceivedTime(This,pVal)	\
    ( (This)->lpVtbl -> get_ReceivedTime(This,pVal) ) 

#define IEmailMessage_get_LastUpdate(This,pVal)	\
    ( (This)->lpVtbl -> get_LastUpdate(This,pVal) ) 

#define IEmailMessage_get_Priority(This,pVal)	\
    ( (This)->lpVtbl -> get_Priority(This,pVal) ) 

#define IEmailMessage_get_BatchID(This,pVal)	\
    ( (This)->lpVtbl -> get_BatchID(This,pVal) ) 

#define IEmailMessage_get_ConversationID(This,pVal)	\
    ( (This)->lpVtbl -> get_ConversationID(This,pVal) ) 

#define IEmailMessage_get_Hash(This,pVal)	\
    ( (This)->lpVtbl -> get_Hash(This,pVal) ) 

#define IEmailMessage_get_Creator(This,pVal)	\
    ( (This)->lpVtbl -> get_Creator(This,pVal) ) 

#define IEmailMessage_get_Archive(This,pVal)	\
    ( (This)->lpVtbl -> get_Archive(This,pVal) ) 

#define IEmailMessage_get_Trace(This,pVal)	\
    ( (This)->lpVtbl -> get_Trace(This,pVal) ) 

#define IEmailMessage_get_CustomField1(This,pVal)	\
    ( (This)->lpVtbl -> get_CustomField1(This,pVal) ) 

#define IEmailMessage_get_CustomField2(This,pVal)	\
    ( (This)->lpVtbl -> get_CustomField2(This,pVal) ) 

#define IEmailMessage_get_StatusDetailsID(This,pVal)	\
    ( (This)->lpVtbl -> get_StatusDetailsID(This,pVal) ) 

#define IEmailMessage_get_TriggerDetailsID(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggerDetailsID(This,pVal) ) 

#define IEmailMessage_put_Retries(This,Val)	\
    ( (This)->lpVtbl -> put_Retries(This,Val) ) 

#define IEmailMessage_get_Retries(This,pVal)	\
    ( (This)->lpVtbl -> get_Retries(This,pVal) ) 

#define IEmailMessage_AddTrace(This,TraceString)	\
    ( (This)->lpVtbl -> AddTrace(This,TraceString) ) 

#define IEmailMessage_CountAttachments(This,Count)	\
    ( (This)->lpVtbl -> CountAttachments(This,Count) ) 

#define IEmailMessage_GetAttachmentName(This,IDX,Name)	\
    ( (This)->lpVtbl -> GetAttachmentName(This,IDX,Name) ) 

#define IEmailMessage_GetAttachmentSize(This,IDX,Size)	\
    ( (This)->lpVtbl -> GetAttachmentSize(This,IDX,Size) ) 

#define IEmailMessage_AddAttachment(This,FileName,Name)	\
    ( (This)->lpVtbl -> AddAttachment(This,FileName,Name) ) 

#define IEmailMessage_SaveAttachment(This,IDX,SaveAsFile)	\
    ( (This)->lpVtbl -> SaveAttachment(This,IDX,SaveAsFile) ) 

#define IEmailMessage_ClearAttachments(This)	\
    ( (This)->lpVtbl -> ClearAttachments(This) ) 

#define IEmailMessage_GetAttachmentID(This,IDX,ID)	\
    ( (This)->lpVtbl -> GetAttachmentID(This,IDX,ID) ) 

#define IEmailMessage_AddAttachmentBase64(This,Base64,Name)	\
    ( (This)->lpVtbl -> AddAttachmentBase64(This,Base64,Name) ) 

#define IEmailMessage_GetAttachmentBase64(This,IDX,Base64)	\
    ( (This)->lpVtbl -> GetAttachmentBase64(This,IDX,Base64) ) 

#define IEmailMessage_get_FieldCount(This,Value)	\
    ( (This)->lpVtbl -> get_FieldCount(This,Value) ) 

#define IEmailMessage_GetFieldNameFromIndex(This,IDX,Value)	\
    ( (This)->lpVtbl -> GetFieldNameFromIndex(This,IDX,Value) ) 

#define IEmailMessage_GetValueRequired(This,sField,Value)	\
    ( (This)->lpVtbl -> GetValueRequired(This,sField,Value) ) 

#define IEmailMessage_GetValueType(This,sField,Value)	\
    ( (This)->lpVtbl -> GetValueType(This,sField,Value) ) 

#define IEmailMessage_GetValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> GetValue(This,sField,pVal) ) 

#define IEmailMessage_SetValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> SetValue(This,sField,pVal) ) 

#define IEmailMessage_GetPasswordValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> GetPasswordValue(This,sField,pVal) ) 

#define IEmailMessage_SetPasswordValue(This,sField,Val)	\
    ( (This)->lpVtbl -> SetPasswordValue(This,sField,Val) ) 

#define IEmailMessage_put_ImapUID(This,Val)	\
    ( (This)->lpVtbl -> put_ImapUID(This,Val) ) 

#define IEmailMessage_put_Pop3ID(This,Val)	\
    ( (This)->lpVtbl -> put_Pop3ID(This,Val) ) 

#define IEmailMessage_put_Organization(This,Val)	\
    ( (This)->lpVtbl -> put_Organization(This,Val) ) 

#define IEmailMessage_put_ReadReceiptAddress(This,Val)	\
    ( (This)->lpVtbl -> put_ReadReceiptAddress(This,Val) ) 

#define IEmailMessage_put_FromName(This,Val)	\
    ( (This)->lpVtbl -> put_FromName(This,Val) ) 

#define IEmailMessage_put_ReplyAddress(This,Val)	\
    ( (This)->lpVtbl -> put_ReplyAddress(This,Val) ) 

#define IEmailMessage_put_Subject(This,Val)	\
    ( (This)->lpVtbl -> put_Subject(This,Val) ) 

#define IEmailMessage_put_ToAddress(This,Val)	\
    ( (This)->lpVtbl -> put_ToAddress(This,Val) ) 

#define IEmailMessage_put_FromAddress(This,Val)	\
    ( (This)->lpVtbl -> put_FromAddress(This,Val) ) 

#define IEmailMessage_put_CcAddress(This,Val)	\
    ( (This)->lpVtbl -> put_CcAddress(This,Val) ) 

#define IEmailMessage_put_BccAddress(This,Val)	\
    ( (This)->lpVtbl -> put_BccAddress(This,Val) ) 

#define IEmailMessage_put_BodyPlainText(This,Val)	\
    ( (This)->lpVtbl -> put_BodyPlainText(This,Val) ) 

#define IEmailMessage_put_BodyHtml(This,Val)	\
    ( (This)->lpVtbl -> put_BodyHtml(This,Val) ) 

#define IEmailMessage_put_Header(This,Val)	\
    ( (This)->lpVtbl -> put_Header(This,Val) ) 

#define IEmailMessage_put_EmailPriority(This,Val)	\
    ( (This)->lpVtbl -> put_EmailPriority(This,Val) ) 

#define IEmailMessage_get_ImapUID(This,pVal)	\
    ( (This)->lpVtbl -> get_ImapUID(This,pVal) ) 

#define IEmailMessage_get_Pop3ID(This,pVal)	\
    ( (This)->lpVtbl -> get_Pop3ID(This,pVal) ) 

#define IEmailMessage_get_Organization(This,pVal)	\
    ( (This)->lpVtbl -> get_Organization(This,pVal) ) 

#define IEmailMessage_get_ReadReceiptAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_ReadReceiptAddress(This,pVal) ) 

#define IEmailMessage_get_FromName(This,pVal)	\
    ( (This)->lpVtbl -> get_FromName(This,pVal) ) 

#define IEmailMessage_get_ReplyAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_ReplyAddress(This,pVal) ) 

#define IEmailMessage_get_Subject(This,pVal)	\
    ( (This)->lpVtbl -> get_Subject(This,pVal) ) 

#define IEmailMessage_get_ToAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_ToAddress(This,pVal) ) 

#define IEmailMessage_get_FromAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_FromAddress(This,pVal) ) 

#define IEmailMessage_get_CcAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_CcAddress(This,pVal) ) 

#define IEmailMessage_get_BccAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_BccAddress(This,pVal) ) 

#define IEmailMessage_get_BodyPlainText(This,pVal)	\
    ( (This)->lpVtbl -> get_BodyPlainText(This,pVal) ) 

#define IEmailMessage_get_BodyHtml(This,pVal)	\
    ( (This)->lpVtbl -> get_BodyHtml(This,pVal) ) 

#define IEmailMessage_get_Header(This,pVal)	\
    ( (This)->lpVtbl -> get_Header(This,pVal) ) 

#define IEmailMessage_get_EmailPriority(This,pVal)	\
    ( (This)->lpVtbl -> get_EmailPriority(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEmailMessage_INTERFACE_DEFINED__ */


#ifndef __IFileMessage_INTERFACE_DEFINED__
#define __IFileMessage_INTERFACE_DEFINED__

/* interface IFileMessage */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFileMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AD25859C-324D-409E-9BF8-4B2BE76D3FB8")
    IFileMessage : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetMessageObject( 
            /* [in] */ IMessage *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMessageObject( 
            /* [retval][out] */ IMessage **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DirectionID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StatusID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerStatusID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AckStatusID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ChannelID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BillingID( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScheduledTime( 
            /* [in] */ DATE Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SentTime( 
            /* [in] */ DATE Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReceivedTime( 
            /* [in] */ DATE Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Priority( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BatchID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ConversationID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Hash( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Creator( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Archive( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CustomField1( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CustomField2( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StatusDetailsID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerDetailsID( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DirectionID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TypeID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StatusID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerStatusID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AckStatusID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ChannelID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BillingID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScheduledTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SentTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReceivedTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastUpdate( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Priority( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BatchID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConversationID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Hash( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Creator( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Archive( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Trace( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomField1( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomField2( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StatusDetailsID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerDetailsID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Retries( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Retries( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTrace( 
            /* [in] */ BSTR TraceString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CountAttachments( 
            /* [retval][out] */ LONG *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentName( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentSize( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAttachment( 
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Name = (BSTR)L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveAttachment( 
            /* [in] */ LONG IDX,
            /* [in] */ BSTR SaveAsFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearAttachments( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentID( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *ID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAttachmentBase64( 
            /* [in] */ BSTR Base64,
            /* [defaultvalue][in] */ BSTR Name = (BSTR)L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttachmentBase64( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Base64) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FieldCount( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFieldNameFromIndex( 
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValueRequired( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValueType( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValue( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ BSTR sField,
            /* [in] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPasswordValue( 
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPasswordValue( 
            /* [in] */ BSTR sField,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Path( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Body( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Body( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFileMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileMessage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFileMessage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFileMessage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFileMessage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFileMessage * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetMessageObject )( 
            IFileMessage * This,
            /* [in] */ IMessage *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMessageObject )( 
            IFileMessage * This,
            /* [retval][out] */ IMessage **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IFileMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DirectionID )( 
            IFileMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusID )( 
            IFileMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerStatusID )( 
            IFileMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AckStatusID )( 
            IFileMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ChannelID )( 
            IFileMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BillingID )( 
            IFileMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScheduledTime )( 
            IFileMessage * This,
            /* [in] */ DATE Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SentTime )( 
            IFileMessage * This,
            /* [in] */ DATE Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReceivedTime )( 
            IFileMessage * This,
            /* [in] */ DATE Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Priority )( 
            IFileMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BatchID )( 
            IFileMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConversationID )( 
            IFileMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Hash )( 
            IFileMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Creator )( 
            IFileMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Archive )( 
            IFileMessage * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomField1 )( 
            IFileMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomField2 )( 
            IFileMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusDetailsID )( 
            IFileMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerDetailsID )( 
            IFileMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IFileMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DirectionID )( 
            IFileMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TypeID )( 
            IFileMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusID )( 
            IFileMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerStatusID )( 
            IFileMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AckStatusID )( 
            IFileMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChannelID )( 
            IFileMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BillingID )( 
            IFileMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScheduledTime )( 
            IFileMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SentTime )( 
            IFileMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReceivedTime )( 
            IFileMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpdate )( 
            IFileMessage * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Priority )( 
            IFileMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BatchID )( 
            IFileMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConversationID )( 
            IFileMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Hash )( 
            IFileMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Creator )( 
            IFileMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Archive )( 
            IFileMessage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trace )( 
            IFileMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomField1 )( 
            IFileMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomField2 )( 
            IFileMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusDetailsID )( 
            IFileMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerDetailsID )( 
            IFileMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Retries )( 
            IFileMessage * This,
            /* [in] */ LONG Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Retries )( 
            IFileMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTrace )( 
            IFileMessage * This,
            /* [in] */ BSTR TraceString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CountAttachments )( 
            IFileMessage * This,
            /* [retval][out] */ LONG *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentName )( 
            IFileMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentSize )( 
            IFileMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAttachment )( 
            IFileMessage * This,
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveAttachment )( 
            IFileMessage * This,
            /* [in] */ LONG IDX,
            /* [in] */ BSTR SaveAsFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ClearAttachments )( 
            IFileMessage * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentID )( 
            IFileMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ LONG *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAttachmentBase64 )( 
            IFileMessage * This,
            /* [in] */ BSTR Base64,
            /* [defaultvalue][in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentBase64 )( 
            IFileMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Base64);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FieldCount )( 
            IFileMessage * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFieldNameFromIndex )( 
            IFileMessage * This,
            /* [in] */ LONG IDX,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValueRequired )( 
            IFileMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValueType )( 
            IFileMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            IFileMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            IFileMessage * This,
            /* [in] */ BSTR sField,
            /* [in] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPasswordValue )( 
            IFileMessage * This,
            /* [in] */ BSTR sField,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPasswordValue )( 
            IFileMessage * This,
            /* [in] */ BSTR sField,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Path )( 
            IFileMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Body )( 
            IFileMessage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            IFileMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Body )( 
            IFileMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IFileMessageVtbl;

    interface IFileMessage
    {
        CONST_VTBL struct IFileMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileMessage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFileMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFileMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFileMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFileMessage_SetMessageObject(This,pVal)	\
    ( (This)->lpVtbl -> SetMessageObject(This,pVal) ) 

#define IFileMessage_GetMessageObject(This,ppVal)	\
    ( (This)->lpVtbl -> GetMessageObject(This,ppVal) ) 

#define IFileMessage_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IFileMessage_put_DirectionID(This,Val)	\
    ( (This)->lpVtbl -> put_DirectionID(This,Val) ) 

#define IFileMessage_put_StatusID(This,Val)	\
    ( (This)->lpVtbl -> put_StatusID(This,Val) ) 

#define IFileMessage_put_TriggerStatusID(This,Val)	\
    ( (This)->lpVtbl -> put_TriggerStatusID(This,Val) ) 

#define IFileMessage_put_AckStatusID(This,Val)	\
    ( (This)->lpVtbl -> put_AckStatusID(This,Val) ) 

#define IFileMessage_put_ChannelID(This,Val)	\
    ( (This)->lpVtbl -> put_ChannelID(This,Val) ) 

#define IFileMessage_put_BillingID(This,Val)	\
    ( (This)->lpVtbl -> put_BillingID(This,Val) ) 

#define IFileMessage_put_ScheduledTime(This,Val)	\
    ( (This)->lpVtbl -> put_ScheduledTime(This,Val) ) 

#define IFileMessage_put_SentTime(This,Val)	\
    ( (This)->lpVtbl -> put_SentTime(This,Val) ) 

#define IFileMessage_put_ReceivedTime(This,Val)	\
    ( (This)->lpVtbl -> put_ReceivedTime(This,Val) ) 

#define IFileMessage_put_Priority(This,Val)	\
    ( (This)->lpVtbl -> put_Priority(This,Val) ) 

#define IFileMessage_put_BatchID(This,Val)	\
    ( (This)->lpVtbl -> put_BatchID(This,Val) ) 

#define IFileMessage_put_ConversationID(This,Val)	\
    ( (This)->lpVtbl -> put_ConversationID(This,Val) ) 

#define IFileMessage_put_Hash(This,Val)	\
    ( (This)->lpVtbl -> put_Hash(This,Val) ) 

#define IFileMessage_put_Creator(This,Val)	\
    ( (This)->lpVtbl -> put_Creator(This,Val) ) 

#define IFileMessage_put_Archive(This,Val)	\
    ( (This)->lpVtbl -> put_Archive(This,Val) ) 

#define IFileMessage_put_CustomField1(This,Val)	\
    ( (This)->lpVtbl -> put_CustomField1(This,Val) ) 

#define IFileMessage_put_CustomField2(This,Val)	\
    ( (This)->lpVtbl -> put_CustomField2(This,Val) ) 

#define IFileMessage_put_StatusDetailsID(This,Val)	\
    ( (This)->lpVtbl -> put_StatusDetailsID(This,Val) ) 

#define IFileMessage_put_TriggerDetailsID(This,Val)	\
    ( (This)->lpVtbl -> put_TriggerDetailsID(This,Val) ) 

#define IFileMessage_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define IFileMessage_get_DirectionID(This,pVal)	\
    ( (This)->lpVtbl -> get_DirectionID(This,pVal) ) 

#define IFileMessage_get_TypeID(This,pVal)	\
    ( (This)->lpVtbl -> get_TypeID(This,pVal) ) 

#define IFileMessage_get_StatusID(This,pVal)	\
    ( (This)->lpVtbl -> get_StatusID(This,pVal) ) 

#define IFileMessage_get_TriggerStatusID(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggerStatusID(This,pVal) ) 

#define IFileMessage_get_AckStatusID(This,pVal)	\
    ( (This)->lpVtbl -> get_AckStatusID(This,pVal) ) 

#define IFileMessage_get_ChannelID(This,pVal)	\
    ( (This)->lpVtbl -> get_ChannelID(This,pVal) ) 

#define IFileMessage_get_BillingID(This,pVal)	\
    ( (This)->lpVtbl -> get_BillingID(This,pVal) ) 

#define IFileMessage_get_ScheduledTime(This,pVal)	\
    ( (This)->lpVtbl -> get_ScheduledTime(This,pVal) ) 

#define IFileMessage_get_SentTime(This,pVal)	\
    ( (This)->lpVtbl -> get_SentTime(This,pVal) ) 

#define IFileMessage_get_ReceivedTime(This,pVal)	\
    ( (This)->lpVtbl -> get_ReceivedTime(This,pVal) ) 

#define IFileMessage_get_LastUpdate(This,pVal)	\
    ( (This)->lpVtbl -> get_LastUpdate(This,pVal) ) 

#define IFileMessage_get_Priority(This,pVal)	\
    ( (This)->lpVtbl -> get_Priority(This,pVal) ) 

#define IFileMessage_get_BatchID(This,pVal)	\
    ( (This)->lpVtbl -> get_BatchID(This,pVal) ) 

#define IFileMessage_get_ConversationID(This,pVal)	\
    ( (This)->lpVtbl -> get_ConversationID(This,pVal) ) 

#define IFileMessage_get_Hash(This,pVal)	\
    ( (This)->lpVtbl -> get_Hash(This,pVal) ) 

#define IFileMessage_get_Creator(This,pVal)	\
    ( (This)->lpVtbl -> get_Creator(This,pVal) ) 

#define IFileMessage_get_Archive(This,pVal)	\
    ( (This)->lpVtbl -> get_Archive(This,pVal) ) 

#define IFileMessage_get_Trace(This,pVal)	\
    ( (This)->lpVtbl -> get_Trace(This,pVal) ) 

#define IFileMessage_get_CustomField1(This,pVal)	\
    ( (This)->lpVtbl -> get_CustomField1(This,pVal) ) 

#define IFileMessage_get_CustomField2(This,pVal)	\
    ( (This)->lpVtbl -> get_CustomField2(This,pVal) ) 

#define IFileMessage_get_StatusDetailsID(This,pVal)	\
    ( (This)->lpVtbl -> get_StatusDetailsID(This,pVal) ) 

#define IFileMessage_get_TriggerDetailsID(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggerDetailsID(This,pVal) ) 

#define IFileMessage_put_Retries(This,Val)	\
    ( (This)->lpVtbl -> put_Retries(This,Val) ) 

#define IFileMessage_get_Retries(This,pVal)	\
    ( (This)->lpVtbl -> get_Retries(This,pVal) ) 

#define IFileMessage_AddTrace(This,TraceString)	\
    ( (This)->lpVtbl -> AddTrace(This,TraceString) ) 

#define IFileMessage_CountAttachments(This,Count)	\
    ( (This)->lpVtbl -> CountAttachments(This,Count) ) 

#define IFileMessage_GetAttachmentName(This,IDX,Name)	\
    ( (This)->lpVtbl -> GetAttachmentName(This,IDX,Name) ) 

#define IFileMessage_GetAttachmentSize(This,IDX,Size)	\
    ( (This)->lpVtbl -> GetAttachmentSize(This,IDX,Size) ) 

#define IFileMessage_AddAttachment(This,FileName,Name)	\
    ( (This)->lpVtbl -> AddAttachment(This,FileName,Name) ) 

#define IFileMessage_SaveAttachment(This,IDX,SaveAsFile)	\
    ( (This)->lpVtbl -> SaveAttachment(This,IDX,SaveAsFile) ) 

#define IFileMessage_ClearAttachments(This)	\
    ( (This)->lpVtbl -> ClearAttachments(This) ) 

#define IFileMessage_GetAttachmentID(This,IDX,ID)	\
    ( (This)->lpVtbl -> GetAttachmentID(This,IDX,ID) ) 

#define IFileMessage_AddAttachmentBase64(This,Base64,Name)	\
    ( (This)->lpVtbl -> AddAttachmentBase64(This,Base64,Name) ) 

#define IFileMessage_GetAttachmentBase64(This,IDX,Base64)	\
    ( (This)->lpVtbl -> GetAttachmentBase64(This,IDX,Base64) ) 

#define IFileMessage_get_FieldCount(This,Value)	\
    ( (This)->lpVtbl -> get_FieldCount(This,Value) ) 

#define IFileMessage_GetFieldNameFromIndex(This,IDX,Value)	\
    ( (This)->lpVtbl -> GetFieldNameFromIndex(This,IDX,Value) ) 

#define IFileMessage_GetValueRequired(This,sField,Value)	\
    ( (This)->lpVtbl -> GetValueRequired(This,sField,Value) ) 

#define IFileMessage_GetValueType(This,sField,Value)	\
    ( (This)->lpVtbl -> GetValueType(This,sField,Value) ) 

#define IFileMessage_GetValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> GetValue(This,sField,pVal) ) 

#define IFileMessage_SetValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> SetValue(This,sField,pVal) ) 

#define IFileMessage_GetPasswordValue(This,sField,pVal)	\
    ( (This)->lpVtbl -> GetPasswordValue(This,sField,pVal) ) 

#define IFileMessage_SetPasswordValue(This,sField,Val)	\
    ( (This)->lpVtbl -> SetPasswordValue(This,sField,Val) ) 

#define IFileMessage_put_Path(This,Val)	\
    ( (This)->lpVtbl -> put_Path(This,Val) ) 

#define IFileMessage_put_Body(This,Val)	\
    ( (This)->lpVtbl -> put_Body(This,Val) ) 

#define IFileMessage_get_Path(This,pVal)	\
    ( (This)->lpVtbl -> get_Path(This,pVal) ) 

#define IFileMessage_get_Body(This,pVal)	\
    ( (This)->lpVtbl -> get_Body(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileMessage_INTERFACE_DEFINED__ */


#ifndef __IMessageDB_INTERFACE_DEFINED__
#define __IMessageDB_INTERFACE_DEFINED__

/* interface IMessageDB */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMessageDB;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("71D1632E-9BA1-4CAE-869A-2E35564B355A")
    IMessageDB : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsOpen( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CheckReadAccess( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CheckReadWriteAccess( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            long ErrorID,
            /* [retval][out] */ BSTR *ErrorString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ BSTR Type,
            /* [defaultvalue][in] */ long Flags,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ long MessageID,
            /* [defaultvalue][in] */ long Flags,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ VARIANT *Message,
            /* [defaultvalue][in] */ long Flags = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ BSTR Type,
            /* [in] */ BSTR Filter) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Execute( 
            /* [in] */ BSTR Query,
            /* [retval][out] */ long *RecordsAffected) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Count( 
            /* [in] */ BSTR Type,
            /* [in] */ BSTR Filter,
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindFirstMessage( 
            /* [in] */ BSTR Type,
            /* [in] */ BSTR Filter,
            /* [defaultvalue][in] */ BSTR Order,
            /* [defaultvalue][in] */ LONG Top,
            /* [defaultvalue][in] */ LONG Flags,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindNextMessage( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsModified( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasStatusUpdate( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasNonStatusUpdate( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NotifyStatusUpdate( 
            /* [defaultvalue][in] */ BSTR ChannelID = (BSTR)L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NotifyNonStatusUpdate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartChangeListening( 
            /* [defaultvalue][in] */ BSTR ChannelID = (BSTR)L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopChangeListening( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AdoConnection( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AdoArchiveConnection( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ResetConnection( 
            /* [defaultvalue][in] */ LONG lFlags = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ArchiveMessages( 
            /* [in] */ DATE dtBefore,
            /* [in] */ LONG lMaxNrToArchive,
            /* [retval][out] */ LONG *pNrArchived) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ArchiveReport( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteMessages( 
            /* [in] */ DATE dtBefore,
            /* [in] */ LONG lMaxNrToDelete,
            /* [retval][out] */ LONG *pNrArchived) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DeleteReport( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ArchiveClean( 
            /* [in] */ DATE dtBefore,
            /* [in] */ LONG lMaxNrToClean,
            /* [retval][out] */ LONG *pNrCleaned) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ArchiveCleanReport( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStatusDescription( 
            /* [in] */ BSTR Value,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTriggerStatusDescription( 
            /* [in] */ BSTR Value,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDirectionDescription( 
            /* [in] */ BSTR Value,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAckStatusDescription( 
            /* [in] */ BSTR Value,
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMessageDBVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMessageDB * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMessageDB * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMessageDB * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMessageDB * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMessageDB * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMessageDB * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMessageDB * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IMessageDB * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMessageDB * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IMessageDB * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IMessageDB * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsOpen )( 
            IMessageDB * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CheckReadAccess )( 
            IMessageDB * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CheckReadWriteAccess )( 
            IMessageDB * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IMessageDB * This,
            long ErrorID,
            /* [retval][out] */ BSTR *ErrorString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IMessageDB * This,
            /* [in] */ BSTR Type,
            /* [defaultvalue][in] */ long Flags,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IMessageDB * This,
            /* [in] */ long MessageID,
            /* [defaultvalue][in] */ long Flags,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IMessageDB * This,
            /* [in] */ VARIANT *Message,
            /* [defaultvalue][in] */ long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IMessageDB * This,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR Filter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Execute )( 
            IMessageDB * This,
            /* [in] */ BSTR Query,
            /* [retval][out] */ long *RecordsAffected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Count )( 
            IMessageDB * This,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR Filter,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindFirstMessage )( 
            IMessageDB * This,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR Filter,
            /* [defaultvalue][in] */ BSTR Order,
            /* [defaultvalue][in] */ LONG Top,
            /* [defaultvalue][in] */ LONG Flags,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindNextMessage )( 
            IMessageDB * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsModified )( 
            IMessageDB * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasStatusUpdate )( 
            IMessageDB * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasNonStatusUpdate )( 
            IMessageDB * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NotifyStatusUpdate )( 
            IMessageDB * This,
            /* [defaultvalue][in] */ BSTR ChannelID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NotifyNonStatusUpdate )( 
            IMessageDB * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartChangeListening )( 
            IMessageDB * This,
            /* [defaultvalue][in] */ BSTR ChannelID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StopChangeListening )( 
            IMessageDB * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdoConnection )( 
            IMessageDB * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdoArchiveConnection )( 
            IMessageDB * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ResetConnection )( 
            IMessageDB * This,
            /* [defaultvalue][in] */ LONG lFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ArchiveMessages )( 
            IMessageDB * This,
            /* [in] */ DATE dtBefore,
            /* [in] */ LONG lMaxNrToArchive,
            /* [retval][out] */ LONG *pNrArchived);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArchiveReport )( 
            IMessageDB * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteMessages )( 
            IMessageDB * This,
            /* [in] */ DATE dtBefore,
            /* [in] */ LONG lMaxNrToDelete,
            /* [retval][out] */ LONG *pNrArchived);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeleteReport )( 
            IMessageDB * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ArchiveClean )( 
            IMessageDB * This,
            /* [in] */ DATE dtBefore,
            /* [in] */ LONG lMaxNrToClean,
            /* [retval][out] */ LONG *pNrCleaned);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArchiveCleanReport )( 
            IMessageDB * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusDescription )( 
            IMessageDB * This,
            /* [in] */ BSTR Value,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTriggerStatusDescription )( 
            IMessageDB * This,
            /* [in] */ BSTR Value,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDirectionDescription )( 
            IMessageDB * This,
            /* [in] */ BSTR Value,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAckStatusDescription )( 
            IMessageDB * This,
            /* [in] */ BSTR Value,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IMessageDBVtbl;

    interface IMessageDB
    {
        CONST_VTBL struct IMessageDBVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessageDB_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMessageDB_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMessageDB_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMessageDB_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMessageDB_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMessageDB_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMessageDB_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMessageDB_get_Module(This,Value)	\
    ( (This)->lpVtbl -> get_Module(This,Value) ) 

#define IMessageDB_get_Version(This,Value)	\
    ( (This)->lpVtbl -> get_Version(This,Value) ) 

#define IMessageDB_get_Build(This,Value)	\
    ( (This)->lpVtbl -> get_Build(This,Value) ) 

#define IMessageDB_get_LastError(This,Value)	\
    ( (This)->lpVtbl -> get_LastError(This,Value) ) 

#define IMessageDB_get_IsOpen(This,Value)	\
    ( (This)->lpVtbl -> get_IsOpen(This,Value) ) 

#define IMessageDB_CheckReadAccess(This)	\
    ( (This)->lpVtbl -> CheckReadAccess(This) ) 

#define IMessageDB_CheckReadWriteAccess(This)	\
    ( (This)->lpVtbl -> CheckReadWriteAccess(This) ) 

#define IMessageDB_GetErrorDescription(This,ErrorID,ErrorString)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorID,ErrorString) ) 

#define IMessageDB_Create(This,Type,Flags,pVal)	\
    ( (This)->lpVtbl -> Create(This,Type,Flags,pVal) ) 

#define IMessageDB_Load(This,MessageID,Flags,pVal)	\
    ( (This)->lpVtbl -> Load(This,MessageID,Flags,pVal) ) 

#define IMessageDB_Save(This,Message,Flags)	\
    ( (This)->lpVtbl -> Save(This,Message,Flags) ) 

#define IMessageDB_Delete(This,Type,Filter)	\
    ( (This)->lpVtbl -> Delete(This,Type,Filter) ) 

#define IMessageDB_Execute(This,Query,RecordsAffected)	\
    ( (This)->lpVtbl -> Execute(This,Query,RecordsAffected) ) 

#define IMessageDB_Count(This,Type,Filter,Count)	\
    ( (This)->lpVtbl -> Count(This,Type,Filter,Count) ) 

#define IMessageDB_FindFirstMessage(This,Type,Filter,Order,Top,Flags,pVal)	\
    ( (This)->lpVtbl -> FindFirstMessage(This,Type,Filter,Order,Top,Flags,pVal) ) 

#define IMessageDB_FindNextMessage(This,pVal)	\
    ( (This)->lpVtbl -> FindNextMessage(This,pVal) ) 

#define IMessageDB_IsModified(This,pVal)	\
    ( (This)->lpVtbl -> IsModified(This,pVal) ) 

#define IMessageDB_HasStatusUpdate(This,pVal)	\
    ( (This)->lpVtbl -> HasStatusUpdate(This,pVal) ) 

#define IMessageDB_HasNonStatusUpdate(This,pVal)	\
    ( (This)->lpVtbl -> HasNonStatusUpdate(This,pVal) ) 

#define IMessageDB_NotifyStatusUpdate(This,ChannelID)	\
    ( (This)->lpVtbl -> NotifyStatusUpdate(This,ChannelID) ) 

#define IMessageDB_NotifyNonStatusUpdate(This)	\
    ( (This)->lpVtbl -> NotifyNonStatusUpdate(This) ) 

#define IMessageDB_StartChangeListening(This,ChannelID)	\
    ( (This)->lpVtbl -> StartChangeListening(This,ChannelID) ) 

#define IMessageDB_StopChangeListening(This)	\
    ( (This)->lpVtbl -> StopChangeListening(This) ) 

#define IMessageDB_get_AdoConnection(This,pVal)	\
    ( (This)->lpVtbl -> get_AdoConnection(This,pVal) ) 

#define IMessageDB_get_AdoArchiveConnection(This,pVal)	\
    ( (This)->lpVtbl -> get_AdoArchiveConnection(This,pVal) ) 

#define IMessageDB_ResetConnection(This,lFlags)	\
    ( (This)->lpVtbl -> ResetConnection(This,lFlags) ) 

#define IMessageDB_ArchiveMessages(This,dtBefore,lMaxNrToArchive,pNrArchived)	\
    ( (This)->lpVtbl -> ArchiveMessages(This,dtBefore,lMaxNrToArchive,pNrArchived) ) 

#define IMessageDB_get_ArchiveReport(This,pVal)	\
    ( (This)->lpVtbl -> get_ArchiveReport(This,pVal) ) 

#define IMessageDB_DeleteMessages(This,dtBefore,lMaxNrToDelete,pNrArchived)	\
    ( (This)->lpVtbl -> DeleteMessages(This,dtBefore,lMaxNrToDelete,pNrArchived) ) 

#define IMessageDB_get_DeleteReport(This,pVal)	\
    ( (This)->lpVtbl -> get_DeleteReport(This,pVal) ) 

#define IMessageDB_ArchiveClean(This,dtBefore,lMaxNrToClean,pNrCleaned)	\
    ( (This)->lpVtbl -> ArchiveClean(This,dtBefore,lMaxNrToClean,pNrCleaned) ) 

#define IMessageDB_get_ArchiveCleanReport(This,pVal)	\
    ( (This)->lpVtbl -> get_ArchiveCleanReport(This,pVal) ) 

#define IMessageDB_GetStatusDescription(This,Value,pVal)	\
    ( (This)->lpVtbl -> GetStatusDescription(This,Value,pVal) ) 

#define IMessageDB_GetTriggerStatusDescription(This,Value,pVal)	\
    ( (This)->lpVtbl -> GetTriggerStatusDescription(This,Value,pVal) ) 

#define IMessageDB_GetDirectionDescription(This,Value,pVal)	\
    ( (This)->lpVtbl -> GetDirectionDescription(This,Value,pVal) ) 

#define IMessageDB_GetAckStatusDescription(This,Value,pVal)	\
    ( (This)->lpVtbl -> GetAckStatusDescription(This,Value,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMessageDB_INTERFACE_DEFINED__ */


#ifndef __ITrigger_INTERFACE_DEFINED__
#define __ITrigger_INTERFACE_DEFINED__

/* interface ITrigger */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ITrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("62D5CF10-7DB3-4A62-8894-3A5237EE812D")
    ITrigger : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ID( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProcessingOrder( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProcessingOrder( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScriptPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScriptPath( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Compatible( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Compatible( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MessageTypeID( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MessageTypeID( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StatusID( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StatusID( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LoadAttachments( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseGenericMessage( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LoadAttachments( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseGenericMessage( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScriptTypeID( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScriptBody( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScriptTypeID( 
            /* [retval][out] */ BSTR *pValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScriptBody( 
            /* [retval][out] */ BSTR *pValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Locked( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FolderID( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FolderID( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Final( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Final( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IncludeFiles( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IncludeFiles( 
            /* [in] */ BSTR Value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITrigger * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITrigger * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITrigger * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITrigger * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITrigger * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITrigger * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            ITrigger * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            ITrigger * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ITrigger * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            ITrigger * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITrigger * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITrigger * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProcessingOrder )( 
            ITrigger * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProcessingOrder )( 
            ITrigger * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            ITrigger * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            ITrigger * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptPath )( 
            ITrigger * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScriptPath )( 
            ITrigger * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Compatible )( 
            ITrigger * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Compatible )( 
            ITrigger * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MessageTypeID )( 
            ITrigger * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MessageTypeID )( 
            ITrigger * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusID )( 
            ITrigger * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusID )( 
            ITrigger * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LoadAttachments )( 
            ITrigger * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseGenericMessage )( 
            ITrigger * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadAttachments )( 
            ITrigger * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseGenericMessage )( 
            ITrigger * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScriptTypeID )( 
            ITrigger * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScriptBody )( 
            ITrigger * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptTypeID )( 
            ITrigger * This,
            /* [retval][out] */ BSTR *pValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptBody )( 
            ITrigger * This,
            /* [retval][out] */ BSTR *pValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Locked )( 
            ITrigger * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FolderID )( 
            ITrigger * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FolderID )( 
            ITrigger * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Final )( 
            ITrigger * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Final )( 
            ITrigger * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IncludeFiles )( 
            ITrigger * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IncludeFiles )( 
            ITrigger * This,
            /* [in] */ BSTR Value);
        
        END_INTERFACE
    } ITriggerVtbl;

    interface ITrigger
    {
        CONST_VTBL struct ITriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITrigger_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITrigger_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITrigger_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITrigger_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITrigger_get_ID(This,Value)	\
    ( (This)->lpVtbl -> get_ID(This,Value) ) 

#define ITrigger_put_ID(This,Value)	\
    ( (This)->lpVtbl -> put_ID(This,Value) ) 

#define ITrigger_get_Enabled(This,Value)	\
    ( (This)->lpVtbl -> get_Enabled(This,Value) ) 

#define ITrigger_put_Enabled(This,Value)	\
    ( (This)->lpVtbl -> put_Enabled(This,Value) ) 

#define ITrigger_get_Condition(This,Value)	\
    ( (This)->lpVtbl -> get_Condition(This,Value) ) 

#define ITrigger_put_Condition(This,Value)	\
    ( (This)->lpVtbl -> put_Condition(This,Value) ) 

#define ITrigger_get_ProcessingOrder(This,Value)	\
    ( (This)->lpVtbl -> get_ProcessingOrder(This,Value) ) 

#define ITrigger_put_ProcessingOrder(This,newVal)	\
    ( (This)->lpVtbl -> put_ProcessingOrder(This,newVal) ) 

#define ITrigger_get_Description(This,Value)	\
    ( (This)->lpVtbl -> get_Description(This,Value) ) 

#define ITrigger_put_Description(This,Value)	\
    ( (This)->lpVtbl -> put_Description(This,Value) ) 

#define ITrigger_get_ScriptPath(This,Value)	\
    ( (This)->lpVtbl -> get_ScriptPath(This,Value) ) 

#define ITrigger_put_ScriptPath(This,Value)	\
    ( (This)->lpVtbl -> put_ScriptPath(This,Value) ) 

#define ITrigger_get_Compatible(This,Value)	\
    ( (This)->lpVtbl -> get_Compatible(This,Value) ) 

#define ITrigger_put_Compatible(This,Value)	\
    ( (This)->lpVtbl -> put_Compatible(This,Value) ) 

#define ITrigger_put_MessageTypeID(This,Value)	\
    ( (This)->lpVtbl -> put_MessageTypeID(This,Value) ) 

#define ITrigger_get_MessageTypeID(This,Value)	\
    ( (This)->lpVtbl -> get_MessageTypeID(This,Value) ) 

#define ITrigger_put_StatusID(This,Value)	\
    ( (This)->lpVtbl -> put_StatusID(This,Value) ) 

#define ITrigger_get_StatusID(This,Value)	\
    ( (This)->lpVtbl -> get_StatusID(This,Value) ) 

#define ITrigger_put_LoadAttachments(This,Val)	\
    ( (This)->lpVtbl -> put_LoadAttachments(This,Val) ) 

#define ITrigger_put_UseGenericMessage(This,Val)	\
    ( (This)->lpVtbl -> put_UseGenericMessage(This,Val) ) 

#define ITrigger_get_LoadAttachments(This,pVal)	\
    ( (This)->lpVtbl -> get_LoadAttachments(This,pVal) ) 

#define ITrigger_get_UseGenericMessage(This,pVal)	\
    ( (This)->lpVtbl -> get_UseGenericMessage(This,pVal) ) 

#define ITrigger_put_ScriptTypeID(This,Value)	\
    ( (This)->lpVtbl -> put_ScriptTypeID(This,Value) ) 

#define ITrigger_put_ScriptBody(This,Value)	\
    ( (This)->lpVtbl -> put_ScriptBody(This,Value) ) 

#define ITrigger_get_ScriptTypeID(This,pValue)	\
    ( (This)->lpVtbl -> get_ScriptTypeID(This,pValue) ) 

#define ITrigger_get_ScriptBody(This,pValue)	\
    ( (This)->lpVtbl -> get_ScriptBody(This,pValue) ) 

#define ITrigger_get_Locked(This,pVal)	\
    ( (This)->lpVtbl -> get_Locked(This,pVal) ) 

#define ITrigger_get_FolderID(This,Value)	\
    ( (This)->lpVtbl -> get_FolderID(This,Value) ) 

#define ITrigger_put_FolderID(This,Value)	\
    ( (This)->lpVtbl -> put_FolderID(This,Value) ) 

#define ITrigger_get_Final(This,Value)	\
    ( (This)->lpVtbl -> get_Final(This,Value) ) 

#define ITrigger_put_Final(This,Value)	\
    ( (This)->lpVtbl -> put_Final(This,Value) ) 

#define ITrigger_get_IncludeFiles(This,Value)	\
    ( (This)->lpVtbl -> get_IncludeFiles(This,Value) ) 

#define ITrigger_put_IncludeFiles(This,Value)	\
    ( (This)->lpVtbl -> put_IncludeFiles(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITrigger_INTERFACE_DEFINED__ */


#ifndef __ITriggers_INTERFACE_DEFINED__
#define __ITriggers_INTERFACE_DEFINED__

/* interface ITriggers */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ITriggers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("22EFCE22-7562-46D4-8C93-8D63F35B57E9")
    ITriggers : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindFirstTrigger( 
            /* [defaultvalue][in] */ BSTR Filter,
            /* [retval][out] */ ITrigger **Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindNextTrigger( 
            /* [retval][out] */ ITrigger **Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [retval][out] */ ITrigger **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR TriggerID,
            /* [retval][out] */ ITrigger **Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ ITrigger *Trigger,
            /* [defaultvalue][in] */ LONG lFlags = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ BSTR Filter) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Sort( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasUpdate( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NotifyUpdate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartChangeListening( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopChangeListening( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITriggersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITriggers * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITriggers * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITriggers * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITriggers * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITriggers * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITriggers * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITriggers * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ITriggers * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindFirstTrigger )( 
            ITriggers * This,
            /* [defaultvalue][in] */ BSTR Filter,
            /* [retval][out] */ ITrigger **Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindNextTrigger )( 
            ITriggers * This,
            /* [retval][out] */ ITrigger **Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            ITriggers * This,
            /* [retval][out] */ ITrigger **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            ITriggers * This,
            /* [in] */ BSTR TriggerID,
            /* [retval][out] */ ITrigger **Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            ITriggers * This,
            /* [in] */ ITrigger *Trigger,
            /* [defaultvalue][in] */ LONG lFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ITriggers * This,
            /* [in] */ BSTR Filter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sort )( 
            ITriggers * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasUpdate )( 
            ITriggers * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NotifyUpdate )( 
            ITriggers * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartChangeListening )( 
            ITriggers * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StopChangeListening )( 
            ITriggers * This);
        
        END_INTERFACE
    } ITriggersVtbl;

    interface ITriggers
    {
        CONST_VTBL struct ITriggersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITriggers_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITriggers_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITriggers_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITriggers_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITriggers_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITriggers_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITriggers_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITriggers_get_LastError(This,Value)	\
    ( (This)->lpVtbl -> get_LastError(This,Value) ) 

#define ITriggers_FindFirstTrigger(This,Filter,Trigger)	\
    ( (This)->lpVtbl -> FindFirstTrigger(This,Filter,Trigger) ) 

#define ITriggers_FindNextTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> FindNextTrigger(This,Trigger) ) 

#define ITriggers_Create(This,ppVal)	\
    ( (This)->lpVtbl -> Create(This,ppVal) ) 

#define ITriggers_Load(This,TriggerID,Trigger)	\
    ( (This)->lpVtbl -> Load(This,TriggerID,Trigger) ) 

#define ITriggers_Save(This,Trigger,lFlags)	\
    ( (This)->lpVtbl -> Save(This,Trigger,lFlags) ) 

#define ITriggers_Delete(This,Filter)	\
    ( (This)->lpVtbl -> Delete(This,Filter) ) 

#define ITriggers_Sort(This)	\
    ( (This)->lpVtbl -> Sort(This) ) 

#define ITriggers_HasUpdate(This,pVal)	\
    ( (This)->lpVtbl -> HasUpdate(This,pVal) ) 

#define ITriggers_NotifyUpdate(This)	\
    ( (This)->lpVtbl -> NotifyUpdate(This) ) 

#define ITriggers_StartChangeListening(This)	\
    ( (This)->lpVtbl -> StartChangeListening(This) ) 

#define ITriggers_StopChangeListening(This)	\
    ( (This)->lpVtbl -> StopChangeListening(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITriggers_INTERFACE_DEFINED__ */


#ifndef __IRoute_INTERFACE_DEFINED__
#define __IRoute_INTERFACE_DEFINED__

/* interface IRoute */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IRoute;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A9252A01-2ABB-4C6E-9589-444E101CF569")
    IRoute : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ID( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ChannelID( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ChannelID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProcessingOrder( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProcessingOrder( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MessageTypeID( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MessageTypeID( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRouteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRoute * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRoute * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRoute * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRoute * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRoute * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRoute * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRoute * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IRoute * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IRoute * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IRoute * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IRoute * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChannelID )( 
            IRoute * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ChannelID )( 
            IRoute * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IRoute * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IRoute * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            IRoute * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            IRoute * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProcessingOrder )( 
            IRoute * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProcessingOrder )( 
            IRoute * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MessageTypeID )( 
            IRoute * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MessageTypeID )( 
            IRoute * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IRouteVtbl;

    interface IRoute
    {
        CONST_VTBL struct IRouteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRoute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRoute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRoute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRoute_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRoute_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRoute_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRoute_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRoute_get_ID(This,Value)	\
    ( (This)->lpVtbl -> get_ID(This,Value) ) 

#define IRoute_put_ID(This,Value)	\
    ( (This)->lpVtbl -> put_ID(This,Value) ) 

#define IRoute_get_Enabled(This,Value)	\
    ( (This)->lpVtbl -> get_Enabled(This,Value) ) 

#define IRoute_put_Enabled(This,Value)	\
    ( (This)->lpVtbl -> put_Enabled(This,Value) ) 

#define IRoute_get_ChannelID(This,Value)	\
    ( (This)->lpVtbl -> get_ChannelID(This,Value) ) 

#define IRoute_put_ChannelID(This,newVal)	\
    ( (This)->lpVtbl -> put_ChannelID(This,newVal) ) 

#define IRoute_get_Description(This,Value)	\
    ( (This)->lpVtbl -> get_Description(This,Value) ) 

#define IRoute_put_Description(This,Value)	\
    ( (This)->lpVtbl -> put_Description(This,Value) ) 

#define IRoute_get_Condition(This,Value)	\
    ( (This)->lpVtbl -> get_Condition(This,Value) ) 

#define IRoute_put_Condition(This,Value)	\
    ( (This)->lpVtbl -> put_Condition(This,Value) ) 

#define IRoute_get_ProcessingOrder(This,Value)	\
    ( (This)->lpVtbl -> get_ProcessingOrder(This,Value) ) 

#define IRoute_put_ProcessingOrder(This,newVal)	\
    ( (This)->lpVtbl -> put_ProcessingOrder(This,newVal) ) 

#define IRoute_get_MessageTypeID(This,Value)	\
    ( (This)->lpVtbl -> get_MessageTypeID(This,Value) ) 

#define IRoute_put_MessageTypeID(This,newVal)	\
    ( (This)->lpVtbl -> put_MessageTypeID(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRoute_INTERFACE_DEFINED__ */


#ifndef __IRoutes_INTERFACE_DEFINED__
#define __IRoutes_INTERFACE_DEFINED__

/* interface IRoutes */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IRoutes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FF701776-F3A0-4D49-A9B1-07190E5E2BDF")
    IRoutes : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindFirstRoute( 
            /* [defaultvalue][in] */ BSTR Filter,
            /* [retval][out] */ IRoute **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindNextRoute( 
            /* [retval][out] */ IRoute **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [retval][out] */ IRoute **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR RouteID,
            /* [retval][out] */ IRoute **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ IRoute *pVal,
            /* [defaultvalue][in] */ LONG lFlags = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ BSTR Filter) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Sort( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasUpdate( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NotifyUpdate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartChangeListening( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopChangeListening( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRoutesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRoutes * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRoutes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRoutes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRoutes * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRoutes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRoutes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRoutes * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IRoutes * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindFirstRoute )( 
            IRoutes * This,
            /* [defaultvalue][in] */ BSTR Filter,
            /* [retval][out] */ IRoute **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindNextRoute )( 
            IRoutes * This,
            /* [retval][out] */ IRoute **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IRoutes * This,
            /* [retval][out] */ IRoute **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IRoutes * This,
            /* [in] */ BSTR RouteID,
            /* [retval][out] */ IRoute **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IRoutes * This,
            /* [in] */ IRoute *pVal,
            /* [defaultvalue][in] */ LONG lFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IRoutes * This,
            /* [in] */ BSTR Filter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sort )( 
            IRoutes * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasUpdate )( 
            IRoutes * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NotifyUpdate )( 
            IRoutes * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartChangeListening )( 
            IRoutes * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StopChangeListening )( 
            IRoutes * This);
        
        END_INTERFACE
    } IRoutesVtbl;

    interface IRoutes
    {
        CONST_VTBL struct IRoutesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRoutes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRoutes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRoutes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRoutes_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRoutes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRoutes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRoutes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRoutes_get_LastError(This,Value)	\
    ( (This)->lpVtbl -> get_LastError(This,Value) ) 

#define IRoutes_FindFirstRoute(This,Filter,ppVal)	\
    ( (This)->lpVtbl -> FindFirstRoute(This,Filter,ppVal) ) 

#define IRoutes_FindNextRoute(This,ppVal)	\
    ( (This)->lpVtbl -> FindNextRoute(This,ppVal) ) 

#define IRoutes_Create(This,ppVal)	\
    ( (This)->lpVtbl -> Create(This,ppVal) ) 

#define IRoutes_Load(This,RouteID,ppVal)	\
    ( (This)->lpVtbl -> Load(This,RouteID,ppVal) ) 

#define IRoutes_Save(This,pVal,lFlags)	\
    ( (This)->lpVtbl -> Save(This,pVal,lFlags) ) 

#define IRoutes_Delete(This,Filter)	\
    ( (This)->lpVtbl -> Delete(This,Filter) ) 

#define IRoutes_Sort(This)	\
    ( (This)->lpVtbl -> Sort(This) ) 

#define IRoutes_HasUpdate(This,pVal)	\
    ( (This)->lpVtbl -> HasUpdate(This,pVal) ) 

#define IRoutes_NotifyUpdate(This)	\
    ( (This)->lpVtbl -> NotifyUpdate(This) ) 

#define IRoutes_StartChangeListening(This)	\
    ( (This)->lpVtbl -> StartChangeListening(This) ) 

#define IRoutes_StopChangeListening(This)	\
    ( (This)->lpVtbl -> StopChangeListening(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRoutes_INTERFACE_DEFINED__ */


#ifndef __IBlockedItem_INTERFACE_DEFINED__
#define __IBlockedItem_INTERFACE_DEFINED__

/* interface IBlockedItem */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IBlockedItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CFAB36F8-FB85-4F6B-8321-F3D9CF32D35B")
    IBlockedItem : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ID( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MessageTypeID( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MessageTypeID( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR Value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBlockedItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBlockedItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBlockedItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBlockedItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IBlockedItem * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IBlockedItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IBlockedItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IBlockedItem * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IBlockedItem * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IBlockedItem * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IBlockedItem * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IBlockedItem * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            IBlockedItem * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            IBlockedItem * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MessageTypeID )( 
            IBlockedItem * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MessageTypeID )( 
            IBlockedItem * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IBlockedItem * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IBlockedItem * This,
            /* [in] */ BSTR Value);
        
        END_INTERFACE
    } IBlockedItemVtbl;

    interface IBlockedItem
    {
        CONST_VTBL struct IBlockedItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBlockedItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBlockedItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBlockedItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBlockedItem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IBlockedItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IBlockedItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IBlockedItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IBlockedItem_get_ID(This,Value)	\
    ( (This)->lpVtbl -> get_ID(This,Value) ) 

#define IBlockedItem_put_ID(This,Value)	\
    ( (This)->lpVtbl -> put_ID(This,Value) ) 

#define IBlockedItem_get_Enabled(This,Value)	\
    ( (This)->lpVtbl -> get_Enabled(This,Value) ) 

#define IBlockedItem_put_Enabled(This,Value)	\
    ( (This)->lpVtbl -> put_Enabled(This,Value) ) 

#define IBlockedItem_get_Condition(This,Value)	\
    ( (This)->lpVtbl -> get_Condition(This,Value) ) 

#define IBlockedItem_put_Condition(This,Value)	\
    ( (This)->lpVtbl -> put_Condition(This,Value) ) 

#define IBlockedItem_put_MessageTypeID(This,Value)	\
    ( (This)->lpVtbl -> put_MessageTypeID(This,Value) ) 

#define IBlockedItem_get_MessageTypeID(This,Value)	\
    ( (This)->lpVtbl -> get_MessageTypeID(This,Value) ) 

#define IBlockedItem_get_Description(This,Value)	\
    ( (This)->lpVtbl -> get_Description(This,Value) ) 

#define IBlockedItem_put_Description(This,Value)	\
    ( (This)->lpVtbl -> put_Description(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBlockedItem_INTERFACE_DEFINED__ */


#ifndef __IBlockedItems_INTERFACE_DEFINED__
#define __IBlockedItems_INTERFACE_DEFINED__

/* interface IBlockedItems */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IBlockedItems;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("047C2B1A-40ED-48B7-9D50-8BFFC39AA6BC")
    IBlockedItems : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindFirstBlockedItem( 
            /* [defaultvalue][in] */ BSTR Filter,
            /* [retval][out] */ IBlockedItem **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindNextBlockedItem( 
            /* [retval][out] */ IBlockedItem **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [retval][out] */ IBlockedItem **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR BLockedItemID,
            /* [retval][out] */ IBlockedItem **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ IBlockedItem *pVal,
            /* [defaultvalue][in] */ LONG lFlags = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ BSTR Filter) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasUpdate( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NotifyUpdate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartChangeListening( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopChangeListening( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBlockedItemsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBlockedItems * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBlockedItems * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBlockedItems * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IBlockedItems * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IBlockedItems * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IBlockedItems * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IBlockedItems * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IBlockedItems * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindFirstBlockedItem )( 
            IBlockedItems * This,
            /* [defaultvalue][in] */ BSTR Filter,
            /* [retval][out] */ IBlockedItem **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindNextBlockedItem )( 
            IBlockedItems * This,
            /* [retval][out] */ IBlockedItem **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IBlockedItems * This,
            /* [retval][out] */ IBlockedItem **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IBlockedItems * This,
            /* [in] */ BSTR BLockedItemID,
            /* [retval][out] */ IBlockedItem **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IBlockedItems * This,
            /* [in] */ IBlockedItem *pVal,
            /* [defaultvalue][in] */ LONG lFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IBlockedItems * This,
            /* [in] */ BSTR Filter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasUpdate )( 
            IBlockedItems * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NotifyUpdate )( 
            IBlockedItems * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartChangeListening )( 
            IBlockedItems * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StopChangeListening )( 
            IBlockedItems * This);
        
        END_INTERFACE
    } IBlockedItemsVtbl;

    interface IBlockedItems
    {
        CONST_VTBL struct IBlockedItemsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBlockedItems_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBlockedItems_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBlockedItems_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBlockedItems_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IBlockedItems_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IBlockedItems_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IBlockedItems_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IBlockedItems_get_LastError(This,Value)	\
    ( (This)->lpVtbl -> get_LastError(This,Value) ) 

#define IBlockedItems_FindFirstBlockedItem(This,Filter,ppVal)	\
    ( (This)->lpVtbl -> FindFirstBlockedItem(This,Filter,ppVal) ) 

#define IBlockedItems_FindNextBlockedItem(This,ppVal)	\
    ( (This)->lpVtbl -> FindNextBlockedItem(This,ppVal) ) 

#define IBlockedItems_Create(This,ppVal)	\
    ( (This)->lpVtbl -> Create(This,ppVal) ) 

#define IBlockedItems_Load(This,BLockedItemID,ppVal)	\
    ( (This)->lpVtbl -> Load(This,BLockedItemID,ppVal) ) 

#define IBlockedItems_Save(This,pVal,lFlags)	\
    ( (This)->lpVtbl -> Save(This,pVal,lFlags) ) 

#define IBlockedItems_Delete(This,Filter)	\
    ( (This)->lpVtbl -> Delete(This,Filter) ) 

#define IBlockedItems_HasUpdate(This,pVal)	\
    ( (This)->lpVtbl -> HasUpdate(This,pVal) ) 

#define IBlockedItems_NotifyUpdate(This)	\
    ( (This)->lpVtbl -> NotifyUpdate(This) ) 

#define IBlockedItems_StartChangeListening(This)	\
    ( (This)->lpVtbl -> StartChangeListening(This) ) 

#define IBlockedItems_StopChangeListening(This)	\
    ( (This)->lpVtbl -> StopChangeListening(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBlockedItems_INTERFACE_DEFINED__ */


#ifndef __IOptions_INTERFACE_DEFINED__
#define __IOptions_INTERFACE_DEFINED__

/* interface IOptions */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("91B2EF05-A0E6-4908-9B65-383525E44FFA")
    IOptions : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            long ErrorID,
            /* [retval][out] */ BSTR *ErrorString) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBulkWizardLogFile( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseKey( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseActivation( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ArchiveAction( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ArchiveAction( 
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ArchiveCleanAction( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ArchiveCleanAction( 
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ArchiveCleanDays( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ArchiveCleanDays( 
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ArchiveDays( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ArchiveDays( 
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastArchiveRun( 
            /* [retval][out] */ DATE *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LastArchiveRun( 
            /* [in] */ DATE Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ArchiveBatchSize( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ArchiveBatchSize( 
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ArchiveTime( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ArchiveTime( 
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StandaloneProcessing( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StandaloneProcessing( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CheckForUpdates( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CheckForUpdates( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScriptEditorPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScriptEditorPath( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MessageActLogTabEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MessageActLogTabEnabled( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ArchiveActLogTabEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ArchiveActLogTabEnabled( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerActLogTabEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerActLogTabEnabled( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ChannelActLogTabOption( 
            /* [retval][out] */ LONG *pValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ChannelActLogTabOption( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HideActLogTabs( 
            /* [retval][out] */ VARIANT_BOOL *pValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HideActLogTabs( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ChannelActLogTabEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ChannelActLogTabEnabled( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CheckTriggersIntervalMs( 
            /* [retval][out] */ LONG *pValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CheckTriggersIntervalMs( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CheckOutgoingIntervalMs( 
            /* [retval][out] */ LONG *pValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CheckOutgoingIntervalMs( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxOutgoingQueueSize( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxOutgoingQueueSize( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxTriggerQueueSize( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxTriggerQueueSize( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseProxyServer( 
            /* [retval][out] */ VARIANT_BOOL *pValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyServer( 
            /* [retval][out] */ BSTR *pValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseProxyAuthentication( 
            /* [retval][out] */ VARIANT_BOOL *pValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyAccount( 
            /* [retval][out] */ BSTR *pValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyPassword( 
            /* [retval][out] */ BSTR *pValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseProxyServer( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyServer( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseProxyAuthentication( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyAccount( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyPassword( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GatewayAccount( 
            /* [retval][out] */ BSTR *pValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GatewayPassword( 
            /* [retval][out] */ BSTR *pValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProgDataServer( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProgFilesServer( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLogDir( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAppID( 
            /* [retval][out] */ BSTR *pValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetServiceUser( 
            /* [retval][out] */ BSTR *pValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetServiceName( 
            /* [retval][out] */ BSTR *pValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProductName( 
            /* [retval][out] */ BSTR *pValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasUpdate( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NotifyUpdate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartChangeListening( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopChangeListening( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IOptionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOptions * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOptions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOptions * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOptions * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOptions * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOptions * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOptions * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IOptions * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IOptions * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IOptions * This,
            long ErrorID,
            /* [retval][out] */ BSTR *ErrorString);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IOptions * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IOptions * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IOptions * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IOptions * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IOptions * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBulkWizardLogFile )( 
            IOptions * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseKey )( 
            IOptions * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseActivation )( 
            IOptions * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArchiveAction )( 
            IOptions * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ArchiveAction )( 
            IOptions * This,
            /* [in] */ long Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArchiveCleanAction )( 
            IOptions * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ArchiveCleanAction )( 
            IOptions * This,
            /* [in] */ long Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArchiveCleanDays )( 
            IOptions * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ArchiveCleanDays )( 
            IOptions * This,
            /* [in] */ long Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArchiveDays )( 
            IOptions * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ArchiveDays )( 
            IOptions * This,
            /* [in] */ long Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastArchiveRun )( 
            IOptions * This,
            /* [retval][out] */ DATE *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LastArchiveRun )( 
            IOptions * This,
            /* [in] */ DATE Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArchiveBatchSize )( 
            IOptions * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ArchiveBatchSize )( 
            IOptions * This,
            /* [in] */ long Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArchiveTime )( 
            IOptions * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ArchiveTime )( 
            IOptions * This,
            /* [in] */ long Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandaloneProcessing )( 
            IOptions * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StandaloneProcessing )( 
            IOptions * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CheckForUpdates )( 
            IOptions * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CheckForUpdates )( 
            IOptions * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptEditorPath )( 
            IOptions * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScriptEditorPath )( 
            IOptions * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MessageActLogTabEnabled )( 
            IOptions * This,
            /* [retval][out] */ VARIANT_BOOL *pValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MessageActLogTabEnabled )( 
            IOptions * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArchiveActLogTabEnabled )( 
            IOptions * This,
            /* [retval][out] */ VARIANT_BOOL *pValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ArchiveActLogTabEnabled )( 
            IOptions * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerActLogTabEnabled )( 
            IOptions * This,
            /* [retval][out] */ VARIANT_BOOL *pValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerActLogTabEnabled )( 
            IOptions * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChannelActLogTabOption )( 
            IOptions * This,
            /* [retval][out] */ LONG *pValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ChannelActLogTabOption )( 
            IOptions * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HideActLogTabs )( 
            IOptions * This,
            /* [retval][out] */ VARIANT_BOOL *pValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HideActLogTabs )( 
            IOptions * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChannelActLogTabEnabled )( 
            IOptions * This,
            /* [retval][out] */ VARIANT_BOOL *pValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ChannelActLogTabEnabled )( 
            IOptions * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CheckTriggersIntervalMs )( 
            IOptions * This,
            /* [retval][out] */ LONG *pValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CheckTriggersIntervalMs )( 
            IOptions * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CheckOutgoingIntervalMs )( 
            IOptions * This,
            /* [retval][out] */ LONG *pValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CheckOutgoingIntervalMs )( 
            IOptions * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxOutgoingQueueSize )( 
            IOptions * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxOutgoingQueueSize )( 
            IOptions * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxTriggerQueueSize )( 
            IOptions * This,
            /* [retval][out] */ LONG *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxTriggerQueueSize )( 
            IOptions * This,
            /* [in] */ LONG Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseProxyServer )( 
            IOptions * This,
            /* [retval][out] */ VARIANT_BOOL *pValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyServer )( 
            IOptions * This,
            /* [retval][out] */ BSTR *pValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseProxyAuthentication )( 
            IOptions * This,
            /* [retval][out] */ VARIANT_BOOL *pValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyAccount )( 
            IOptions * This,
            /* [retval][out] */ BSTR *pValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyPassword )( 
            IOptions * This,
            /* [retval][out] */ BSTR *pValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseProxyServer )( 
            IOptions * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyServer )( 
            IOptions * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseProxyAuthentication )( 
            IOptions * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyAccount )( 
            IOptions * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyPassword )( 
            IOptions * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayAccount )( 
            IOptions * This,
            /* [retval][out] */ BSTR *pValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayPassword )( 
            IOptions * This,
            /* [retval][out] */ BSTR *pValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProgDataServer )( 
            IOptions * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProgFilesServer )( 
            IOptions * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLogDir )( 
            IOptions * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAppID )( 
            IOptions * This,
            /* [retval][out] */ BSTR *pValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetServiceUser )( 
            IOptions * This,
            /* [retval][out] */ BSTR *pValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetServiceName )( 
            IOptions * This,
            /* [retval][out] */ BSTR *pValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProductName )( 
            IOptions * This,
            /* [retval][out] */ BSTR *pValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasUpdate )( 
            IOptions * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NotifyUpdate )( 
            IOptions * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartChangeListening )( 
            IOptions * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StopChangeListening )( 
            IOptions * This);
        
        END_INTERFACE
    } IOptionsVtbl;

    interface IOptions
    {
        CONST_VTBL struct IOptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOptions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOptions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOptions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOptions_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOptions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOptions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOptions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IOptions_get_ID(This,Value)	\
    ( (This)->lpVtbl -> get_ID(This,Value) ) 

#define IOptions_get_LastError(This,Value)	\
    ( (This)->lpVtbl -> get_LastError(This,Value) ) 

#define IOptions_GetErrorDescription(This,ErrorID,ErrorString)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorID,ErrorString) ) 

#define IOptions_get_Module(This,Value)	\
    ( (This)->lpVtbl -> get_Module(This,Value) ) 

#define IOptions_get_Version(This,Value)	\
    ( (This)->lpVtbl -> get_Version(This,Value) ) 

#define IOptions_get_Build(This,Value)	\
    ( (This)->lpVtbl -> get_Build(This,Value) ) 

#define IOptions_Load(This)	\
    ( (This)->lpVtbl -> Load(This) ) 

#define IOptions_Save(This)	\
    ( (This)->lpVtbl -> Save(This) ) 

#define IOptions_GetBulkWizardLogFile(This,Value)	\
    ( (This)->lpVtbl -> GetBulkWizardLogFile(This,Value) ) 

#define IOptions_get_LicenseKey(This,Value)	\
    ( (This)->lpVtbl -> get_LicenseKey(This,Value) ) 

#define IOptions_get_LicenseActivation(This,Value)	\
    ( (This)->lpVtbl -> get_LicenseActivation(This,Value) ) 

#define IOptions_get_ArchiveAction(This,Value)	\
    ( (This)->lpVtbl -> get_ArchiveAction(This,Value) ) 

#define IOptions_put_ArchiveAction(This,Value)	\
    ( (This)->lpVtbl -> put_ArchiveAction(This,Value) ) 

#define IOptions_get_ArchiveCleanAction(This,Value)	\
    ( (This)->lpVtbl -> get_ArchiveCleanAction(This,Value) ) 

#define IOptions_put_ArchiveCleanAction(This,Value)	\
    ( (This)->lpVtbl -> put_ArchiveCleanAction(This,Value) ) 

#define IOptions_get_ArchiveCleanDays(This,Value)	\
    ( (This)->lpVtbl -> get_ArchiveCleanDays(This,Value) ) 

#define IOptions_put_ArchiveCleanDays(This,Value)	\
    ( (This)->lpVtbl -> put_ArchiveCleanDays(This,Value) ) 

#define IOptions_get_ArchiveDays(This,Value)	\
    ( (This)->lpVtbl -> get_ArchiveDays(This,Value) ) 

#define IOptions_put_ArchiveDays(This,Value)	\
    ( (This)->lpVtbl -> put_ArchiveDays(This,Value) ) 

#define IOptions_get_LastArchiveRun(This,Value)	\
    ( (This)->lpVtbl -> get_LastArchiveRun(This,Value) ) 

#define IOptions_put_LastArchiveRun(This,Value)	\
    ( (This)->lpVtbl -> put_LastArchiveRun(This,Value) ) 

#define IOptions_get_ArchiveBatchSize(This,Value)	\
    ( (This)->lpVtbl -> get_ArchiveBatchSize(This,Value) ) 

#define IOptions_put_ArchiveBatchSize(This,Value)	\
    ( (This)->lpVtbl -> put_ArchiveBatchSize(This,Value) ) 

#define IOptions_get_ArchiveTime(This,Value)	\
    ( (This)->lpVtbl -> get_ArchiveTime(This,Value) ) 

#define IOptions_put_ArchiveTime(This,Value)	\
    ( (This)->lpVtbl -> put_ArchiveTime(This,Value) ) 

#define IOptions_get_StandaloneProcessing(This,Value)	\
    ( (This)->lpVtbl -> get_StandaloneProcessing(This,Value) ) 

#define IOptions_put_StandaloneProcessing(This,Value)	\
    ( (This)->lpVtbl -> put_StandaloneProcessing(This,Value) ) 

#define IOptions_get_CheckForUpdates(This,Value)	\
    ( (This)->lpVtbl -> get_CheckForUpdates(This,Value) ) 

#define IOptions_put_CheckForUpdates(This,Value)	\
    ( (This)->lpVtbl -> put_CheckForUpdates(This,Value) ) 

#define IOptions_get_ScriptEditorPath(This,Value)	\
    ( (This)->lpVtbl -> get_ScriptEditorPath(This,Value) ) 

#define IOptions_put_ScriptEditorPath(This,Value)	\
    ( (This)->lpVtbl -> put_ScriptEditorPath(This,Value) ) 

#define IOptions_get_MessageActLogTabEnabled(This,pValue)	\
    ( (This)->lpVtbl -> get_MessageActLogTabEnabled(This,pValue) ) 

#define IOptions_put_MessageActLogTabEnabled(This,Value)	\
    ( (This)->lpVtbl -> put_MessageActLogTabEnabled(This,Value) ) 

#define IOptions_get_ArchiveActLogTabEnabled(This,pValue)	\
    ( (This)->lpVtbl -> get_ArchiveActLogTabEnabled(This,pValue) ) 

#define IOptions_put_ArchiveActLogTabEnabled(This,Value)	\
    ( (This)->lpVtbl -> put_ArchiveActLogTabEnabled(This,Value) ) 

#define IOptions_get_TriggerActLogTabEnabled(This,pValue)	\
    ( (This)->lpVtbl -> get_TriggerActLogTabEnabled(This,pValue) ) 

#define IOptions_put_TriggerActLogTabEnabled(This,Value)	\
    ( (This)->lpVtbl -> put_TriggerActLogTabEnabled(This,Value) ) 

#define IOptions_get_ChannelActLogTabOption(This,pValue)	\
    ( (This)->lpVtbl -> get_ChannelActLogTabOption(This,pValue) ) 

#define IOptions_put_ChannelActLogTabOption(This,Value)	\
    ( (This)->lpVtbl -> put_ChannelActLogTabOption(This,Value) ) 

#define IOptions_get_HideActLogTabs(This,pValue)	\
    ( (This)->lpVtbl -> get_HideActLogTabs(This,pValue) ) 

#define IOptions_put_HideActLogTabs(This,Value)	\
    ( (This)->lpVtbl -> put_HideActLogTabs(This,Value) ) 

#define IOptions_get_ChannelActLogTabEnabled(This,pValue)	\
    ( (This)->lpVtbl -> get_ChannelActLogTabEnabled(This,pValue) ) 

#define IOptions_put_ChannelActLogTabEnabled(This,Value)	\
    ( (This)->lpVtbl -> put_ChannelActLogTabEnabled(This,Value) ) 

#define IOptions_get_CheckTriggersIntervalMs(This,pValue)	\
    ( (This)->lpVtbl -> get_CheckTriggersIntervalMs(This,pValue) ) 

#define IOptions_put_CheckTriggersIntervalMs(This,Value)	\
    ( (This)->lpVtbl -> put_CheckTriggersIntervalMs(This,Value) ) 

#define IOptions_get_CheckOutgoingIntervalMs(This,pValue)	\
    ( (This)->lpVtbl -> get_CheckOutgoingIntervalMs(This,pValue) ) 

#define IOptions_put_CheckOutgoingIntervalMs(This,Value)	\
    ( (This)->lpVtbl -> put_CheckOutgoingIntervalMs(This,Value) ) 

#define IOptions_put_MaxOutgoingQueueSize(This,Value)	\
    ( (This)->lpVtbl -> put_MaxOutgoingQueueSize(This,Value) ) 

#define IOptions_get_MaxOutgoingQueueSize(This,Value)	\
    ( (This)->lpVtbl -> get_MaxOutgoingQueueSize(This,Value) ) 

#define IOptions_get_MaxTriggerQueueSize(This,Value)	\
    ( (This)->lpVtbl -> get_MaxTriggerQueueSize(This,Value) ) 

#define IOptions_put_MaxTriggerQueueSize(This,Value)	\
    ( (This)->lpVtbl -> put_MaxTriggerQueueSize(This,Value) ) 

#define IOptions_get_UseProxyServer(This,pValue)	\
    ( (This)->lpVtbl -> get_UseProxyServer(This,pValue) ) 

#define IOptions_get_ProxyServer(This,pValue)	\
    ( (This)->lpVtbl -> get_ProxyServer(This,pValue) ) 

#define IOptions_get_UseProxyAuthentication(This,pValue)	\
    ( (This)->lpVtbl -> get_UseProxyAuthentication(This,pValue) ) 

#define IOptions_get_ProxyAccount(This,pValue)	\
    ( (This)->lpVtbl -> get_ProxyAccount(This,pValue) ) 

#define IOptions_get_ProxyPassword(This,pValue)	\
    ( (This)->lpVtbl -> get_ProxyPassword(This,pValue) ) 

#define IOptions_put_UseProxyServer(This,Value)	\
    ( (This)->lpVtbl -> put_UseProxyServer(This,Value) ) 

#define IOptions_put_ProxyServer(This,Value)	\
    ( (This)->lpVtbl -> put_ProxyServer(This,Value) ) 

#define IOptions_put_UseProxyAuthentication(This,Value)	\
    ( (This)->lpVtbl -> put_UseProxyAuthentication(This,Value) ) 

#define IOptions_put_ProxyAccount(This,Value)	\
    ( (This)->lpVtbl -> put_ProxyAccount(This,Value) ) 

#define IOptions_put_ProxyPassword(This,Value)	\
    ( (This)->lpVtbl -> put_ProxyPassword(This,Value) ) 

#define IOptions_get_GatewayAccount(This,pValue)	\
    ( (This)->lpVtbl -> get_GatewayAccount(This,pValue) ) 

#define IOptions_get_GatewayPassword(This,pValue)	\
    ( (This)->lpVtbl -> get_GatewayPassword(This,pValue) ) 

#define IOptions_GetProgDataServer(This,Value)	\
    ( (This)->lpVtbl -> GetProgDataServer(This,Value) ) 

#define IOptions_GetProgFilesServer(This,Value)	\
    ( (This)->lpVtbl -> GetProgFilesServer(This,Value) ) 

#define IOptions_GetLogDir(This,Value)	\
    ( (This)->lpVtbl -> GetLogDir(This,Value) ) 

#define IOptions_GetAppID(This,pValue)	\
    ( (This)->lpVtbl -> GetAppID(This,pValue) ) 

#define IOptions_GetServiceUser(This,pValue)	\
    ( (This)->lpVtbl -> GetServiceUser(This,pValue) ) 

#define IOptions_GetServiceName(This,pValue)	\
    ( (This)->lpVtbl -> GetServiceName(This,pValue) ) 

#define IOptions_GetProductName(This,pValue)	\
    ( (This)->lpVtbl -> GetProductName(This,pValue) ) 

#define IOptions_HasUpdate(This,pVal)	\
    ( (This)->lpVtbl -> HasUpdate(This,pVal) ) 

#define IOptions_NotifyUpdate(This)	\
    ( (This)->lpVtbl -> NotifyUpdate(This) ) 

#define IOptions_StartChangeListening(This)	\
    ( (This)->lpVtbl -> StartChangeListening(This) ) 

#define IOptions_StopChangeListening(This)	\
    ( (This)->lpVtbl -> StopChangeListening(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOptions_INTERFACE_DEFINED__ */


#ifndef __IDatabase_INTERFACE_DEFINED__
#define __IDatabase_INTERFACE_DEFINED__

/* interface IDatabase */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDatabase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("517EDEB3-5EFF-4E00-A436-327F1C7DFFEB")
    IDatabase : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            long ErrorID,
            /* [retval][out] */ BSTR *ErrorString) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ChangeListenerAppName( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ChangeListenerAppName( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ChangeListenerIsLocal( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ChangeListenerIsLocal( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DatabaseAppName( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DatabaseAppName( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AdoConnection( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMessageDB( 
            /* [retval][out] */ IMessageDB **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChannels( 
            /* [retval][out] */ IChannels **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTriggers( 
            /* [retval][out] */ ITriggers **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRoutes( 
            /* [retval][out] */ IRoutes **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBlockedItems( 
            /* [retval][out] */ IBlockedItems **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChannelTypes( 
            /* [retval][out] */ IChannelTypes **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetOptions( 
            /* [retval][out] */ IOptions **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMessageTypes( 
            /* [retval][out] */ IMessageTypes **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCampaigns( 
            /* [retval][out] */ ICampaigns **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ResetConnection( 
            /* [defaultvalue][in] */ LONG lFlags = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SubscribeCustomEvent( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NotifyCustomEvent( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasCustomEvent( 
            /* [in] */ BSTR Value,
            /* [retval][out] */ VARIANT_BOOL *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDatabaseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDatabase * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDatabase * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDatabase * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDatabase * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDatabase * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDatabase * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDatabase * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IDatabase * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IDatabase * This,
            long ErrorID,
            /* [retval][out] */ BSTR *ErrorString);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IDatabase * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IDatabase * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IDatabase * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChangeListenerAppName )( 
            IDatabase * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ChangeListenerAppName )( 
            IDatabase * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChangeListenerIsLocal )( 
            IDatabase * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ChangeListenerIsLocal )( 
            IDatabase * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DatabaseAppName )( 
            IDatabase * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DatabaseAppName )( 
            IDatabase * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdoConnection )( 
            IDatabase * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMessageDB )( 
            IDatabase * This,
            /* [retval][out] */ IMessageDB **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChannels )( 
            IDatabase * This,
            /* [retval][out] */ IChannels **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTriggers )( 
            IDatabase * This,
            /* [retval][out] */ ITriggers **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRoutes )( 
            IDatabase * This,
            /* [retval][out] */ IRoutes **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBlockedItems )( 
            IDatabase * This,
            /* [retval][out] */ IBlockedItems **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChannelTypes )( 
            IDatabase * This,
            /* [retval][out] */ IChannelTypes **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetOptions )( 
            IDatabase * This,
            /* [retval][out] */ IOptions **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMessageTypes )( 
            IDatabase * This,
            /* [retval][out] */ IMessageTypes **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCampaigns )( 
            IDatabase * This,
            /* [retval][out] */ ICampaigns **ppVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ResetConnection )( 
            IDatabase * This,
            /* [defaultvalue][in] */ LONG lFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SubscribeCustomEvent )( 
            IDatabase * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NotifyCustomEvent )( 
            IDatabase * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasCustomEvent )( 
            IDatabase * This,
            /* [in] */ BSTR Value,
            /* [retval][out] */ VARIANT_BOOL *pValue);
        
        END_INTERFACE
    } IDatabaseVtbl;

    interface IDatabase
    {
        CONST_VTBL struct IDatabaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDatabase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDatabase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDatabase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDatabase_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDatabase_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDatabase_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDatabase_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDatabase_get_LastError(This,Value)	\
    ( (This)->lpVtbl -> get_LastError(This,Value) ) 

#define IDatabase_GetErrorDescription(This,ErrorID,ErrorString)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorID,ErrorString) ) 

#define IDatabase_get_Module(This,Value)	\
    ( (This)->lpVtbl -> get_Module(This,Value) ) 

#define IDatabase_get_Version(This,Value)	\
    ( (This)->lpVtbl -> get_Version(This,Value) ) 

#define IDatabase_get_Build(This,Value)	\
    ( (This)->lpVtbl -> get_Build(This,Value) ) 

#define IDatabase_get_ChangeListenerAppName(This,Value)	\
    ( (This)->lpVtbl -> get_ChangeListenerAppName(This,Value) ) 

#define IDatabase_put_ChangeListenerAppName(This,Value)	\
    ( (This)->lpVtbl -> put_ChangeListenerAppName(This,Value) ) 

#define IDatabase_get_ChangeListenerIsLocal(This,Value)	\
    ( (This)->lpVtbl -> get_ChangeListenerIsLocal(This,Value) ) 

#define IDatabase_put_ChangeListenerIsLocal(This,Value)	\
    ( (This)->lpVtbl -> put_ChangeListenerIsLocal(This,Value) ) 

#define IDatabase_get_DatabaseAppName(This,Value)	\
    ( (This)->lpVtbl -> get_DatabaseAppName(This,Value) ) 

#define IDatabase_put_DatabaseAppName(This,Value)	\
    ( (This)->lpVtbl -> put_DatabaseAppName(This,Value) ) 

#define IDatabase_get_AdoConnection(This,pVal)	\
    ( (This)->lpVtbl -> get_AdoConnection(This,pVal) ) 

#define IDatabase_GetMessageDB(This,ppVal)	\
    ( (This)->lpVtbl -> GetMessageDB(This,ppVal) ) 

#define IDatabase_GetChannels(This,ppVal)	\
    ( (This)->lpVtbl -> GetChannels(This,ppVal) ) 

#define IDatabase_GetTriggers(This,ppVal)	\
    ( (This)->lpVtbl -> GetTriggers(This,ppVal) ) 

#define IDatabase_GetRoutes(This,ppVal)	\
    ( (This)->lpVtbl -> GetRoutes(This,ppVal) ) 

#define IDatabase_GetBlockedItems(This,ppVal)	\
    ( (This)->lpVtbl -> GetBlockedItems(This,ppVal) ) 

#define IDatabase_GetChannelTypes(This,ppVal)	\
    ( (This)->lpVtbl -> GetChannelTypes(This,ppVal) ) 

#define IDatabase_GetOptions(This,ppVal)	\
    ( (This)->lpVtbl -> GetOptions(This,ppVal) ) 

#define IDatabase_GetMessageTypes(This,ppVal)	\
    ( (This)->lpVtbl -> GetMessageTypes(This,ppVal) ) 

#define IDatabase_GetCampaigns(This,ppVal)	\
    ( (This)->lpVtbl -> GetCampaigns(This,ppVal) ) 

#define IDatabase_ResetConnection(This,lFlags)	\
    ( (This)->lpVtbl -> ResetConnection(This,lFlags) ) 

#define IDatabase_SubscribeCustomEvent(This,Value)	\
    ( (This)->lpVtbl -> SubscribeCustomEvent(This,Value) ) 

#define IDatabase_NotifyCustomEvent(This,Value)	\
    ( (This)->lpVtbl -> NotifyCustomEvent(This,Value) ) 

#define IDatabase_HasCustomEvent(This,Value,pValue)	\
    ( (This)->lpVtbl -> HasCustomEvent(This,Value,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDatabase_INTERFACE_DEFINED__ */



#ifndef __AXMMCFGLib_LIBRARY_DEFINED__
#define __AXMMCFGLib_LIBRARY_DEFINED__

/* library AXMMCFGLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_AXMMCFGLib;

EXTERN_C const CLSID CLSID_Constants;

#ifdef __cplusplus

class DECLSPEC_UUID("77F74074-5E90-4E3A-801C-75FEB5EAB2A0")
Constants;
#endif

EXTERN_C const CLSID CLSID_Info;

#ifdef __cplusplus

class DECLSPEC_UUID("072C0E7A-085B-49A9-810D-8DB7AD3F3D67")
Info;
#endif

EXTERN_C const CLSID CLSID_AxStatic;

#ifdef __cplusplus

class DECLSPEC_UUID("A4EE4FB5-EAD7-4B24-B3E5-79E80E2A1BAF")
AxStatic;
#endif

EXTERN_C const CLSID CLSID_Channel;

#ifdef __cplusplus

class DECLSPEC_UUID("31061798-79BE-4D8E-820A-5E7DF99B4B60")
Channel;
#endif

EXTERN_C const CLSID CLSID_Campaigns;

#ifdef __cplusplus

class DECLSPEC_UUID("D1D5D984-5EDB-42DD-9209-70A07A42AB57")
Campaigns;
#endif

EXTERN_C const CLSID CLSID_Campaign;

#ifdef __cplusplus

class DECLSPEC_UUID("43B40955-F81A-497B-BEB6-A39992C6558E")
Campaign;
#endif

EXTERN_C const CLSID CLSID_Channels;

#ifdef __cplusplus

class DECLSPEC_UUID("7E0B06E6-45F2-4F27-BF89-B6F655F16245")
Channels;
#endif

EXTERN_C const CLSID CLSID_MessageTypes;

#ifdef __cplusplus

class DECLSPEC_UUID("271486D6-25F7-4C82-BF2B-1580E98C1F4D")
MessageTypes;
#endif

EXTERN_C const CLSID CLSID_MessageType;

#ifdef __cplusplus

class DECLSPEC_UUID("6BFED112-EA56-450F-B9FE-A44B849DD417")
MessageType;
#endif

EXTERN_C const CLSID CLSID_ChannelTypes;

#ifdef __cplusplus

class DECLSPEC_UUID("C59CC40A-D6E7-46B2-89AA-DD73F68C1A7D")
ChannelTypes;
#endif

EXTERN_C const CLSID CLSID_ChannelType;

#ifdef __cplusplus

class DECLSPEC_UUID("D9CDFA05-62C1-446B-B7FE-5ABAE1B04FDD")
ChannelType;
#endif

EXTERN_C const CLSID CLSID_Message;

#ifdef __cplusplus

class DECLSPEC_UUID("39C8E669-CC26-4ED8-AD4F-1BFD696D2E76")
Message;
#endif

EXTERN_C const CLSID CLSID_FileMessage;

#ifdef __cplusplus

class DECLSPEC_UUID("1D0D8115-BBC4-49AB-AC27-E4B6492481CE")
FileMessage;
#endif

EXTERN_C const CLSID CLSID_EmailMessage;

#ifdef __cplusplus

class DECLSPEC_UUID("F4C52910-ED04-47E7-8B95-5E01EA88482F")
EmailMessage;
#endif

EXTERN_C const CLSID CLSID_SmsMessage;

#ifdef __cplusplus

class DECLSPEC_UUID("C2DEC243-4B25-47B5-A5D0-EDE27A4D9809")
SmsMessage;
#endif

EXTERN_C const CLSID CLSID_SmppServerBindMessage;

#ifdef __cplusplus

class DECLSPEC_UUID("9A2291AC-A64A-462E-BA9A-E38556549DEF")
SmppServerBindMessage;
#endif

EXTERN_C const CLSID CLSID_MessageDB;

#ifdef __cplusplus

class DECLSPEC_UUID("E7830433-EF00-47CE-8233-559DAA9C5AE1")
MessageDB;
#endif

EXTERN_C const CLSID CLSID_Options;

#ifdef __cplusplus

class DECLSPEC_UUID("D137E05E-A9B1-4DCE-840F-D67D167B7688")
Options;
#endif

EXTERN_C const CLSID CLSID_Database;

#ifdef __cplusplus

class DECLSPEC_UUID("BE408546-63A6-4329-B1AB-14EAB98EFD3A")
Database;
#endif

EXTERN_C const CLSID CLSID_Trigger;

#ifdef __cplusplus

class DECLSPEC_UUID("76D31330-D566-41A4-A3CC-F3A208F3DC98")
Trigger;
#endif

EXTERN_C const CLSID CLSID_Triggers;

#ifdef __cplusplus

class DECLSPEC_UUID("EED4DBC5-301C-4537-9C9B-54099C7AE3F1")
Triggers;
#endif

EXTERN_C const CLSID CLSID_Route;

#ifdef __cplusplus

class DECLSPEC_UUID("B977977D-4527-42A8-A6D2-5786EEBD96CF")
Route;
#endif

EXTERN_C const CLSID CLSID_Routes;

#ifdef __cplusplus

class DECLSPEC_UUID("D488DF06-6F1A-4CC1-A200-63B33BE2F5BC")
Routes;
#endif

EXTERN_C const CLSID CLSID_BlockedItem;

#ifdef __cplusplus

class DECLSPEC_UUID("E665D1EE-B12B-499A-A6EC-450C4CA23773")
BlockedItem;
#endif

EXTERN_C const CLSID CLSID_BlockedItems;

#ifdef __cplusplus

class DECLSPEC_UUID("03782D3D-32F0-47E9-BEC8-7C0C80C0A833")
BlockedItems;
#endif

EXTERN_C const CLSID CLSID_Tlv;

#ifdef __cplusplus

class DECLSPEC_UUID("5964621A-AFC6-4FA5-97DD-9404AB66BE55")
Tlv;
#endif
#endif /* __AXMMCFGLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


