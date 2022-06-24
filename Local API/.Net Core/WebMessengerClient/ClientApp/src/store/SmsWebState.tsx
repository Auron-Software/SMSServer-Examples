import { Action, Reducer } from 'redux';
import App from '../App';
import { AppThunkAction } from './';
import { AuMessage, AuResultCode } from './AuMessage';

// -----------------
// STATE - This defines the type of data maintained in the Redux store.

export interface SmsWebState {
  isLoadingOld: boolean;
  isLoadingNew: boolean;
  isCreating: boolean;
  scrollToAnchor: boolean;
  filterAddress: string;
  nrMessagesToShow: number;
  messages: AuMessage[];
  lastError: number;
  lastErrorDescription: string;
  currentMessage: AuMessage | any;
}

// -----------------
// ACTIONS - These are serializable (hence replayable) descriptions of state transitions.
// They do not themselves have any side-effects; they just describe something that is going to happen.

const AMS_CLEARFILTER           = "CLEARFILTER";
const AMS_SETFILTER             = 'SETFILTER';
const AMS_REQUEST_OLDMESSAGES   = 'REQUEST_OLDMESSAGES';
const AMS_RECEIVE_OLDMESSAGES   = 'RECEIVE_OLDMESSAGES';
const AMS_REQUEST_MESSAGES      = 'REQUEST_MESSAGES';
const AMS_RECEIVE_MESSAGES      = 'RECEIVE_MESSAGES';
const AMS_CREATE_MESSAGE        = 'CREATE_MESSAGE';
const AMS_CREATED_MESSAGE       = 'CREATED_MESSAGE';
const AMS_SHOW_MESSAGEDETAILS   = 'SHOW_MESSAGEDETAILS';
const AMS_HIDE_MESSAGEDETAILS   = 'HIDE_MESSAGEDETAILS';

interface SetFiler {
  type: typeof AMS_SETFILTER;
  filterAddress: string;
}

interface ClearFiler {
  type: typeof AMS_CLEARFILTER;
}

interface ShowMessageDetails {
  type: typeof AMS_SHOW_MESSAGEDETAILS;
  message: AuMessage;
}

interface HideMessageDetails {
  type: typeof AMS_HIDE_MESSAGEDETAILS;
}

interface RequestOldAuMessagesAction {
  type: typeof AMS_REQUEST_OLDMESSAGES;
}

interface ReceiveOldAuMessagesAction {
  type: typeof AMS_RECEIVE_OLDMESSAGES;
  messages: AuMessage[];
}

interface RequestAuMessagesAction {
  type: typeof AMS_REQUEST_MESSAGES;
}

interface ReceiveAuMessagesAction {
  type: typeof AMS_RECEIVE_MESSAGES;
  messages: AuMessage[];
}

interface CreatingAuMessageAction {
  type: typeof AMS_CREATE_MESSAGE;
}

interface CreatedAuMessageAction {
  type: typeof AMS_CREATED_MESSAGE;
  lastError: number;
  lastErrorDescription: string;
}


// Declare a 'discriminated union' type. This guarantees that all references to 'type' properties contain one of the
// declared type strings (and not any other arbitrary string).
type KnownAction = RequestAuMessagesAction | SetFiler | ClearFiler |
  ReceiveAuMessagesAction | CreatingAuMessageAction | CreatedAuMessageAction |
  ShowMessageDetails | HideMessageDetails | RequestOldAuMessagesAction | ReceiveOldAuMessagesAction;

// ----------------
// ACTION CREATORS - These are functions exposed to UI components that will trigger a state transition.
// They don't directly mutate state, but they can have external side-effects (such as loading data).

export const actionCreators = {
  clearFilter: (): AppThunkAction<KnownAction> => (dispatch, getState) => {
    dispatch({ type: AMS_CLEARFILTER });
  },
  setFilter: (sFilterAddress: string): AppThunkAction<KnownAction> => (dispatch, getState) => {
    dispatch({ type: AMS_SETFILTER, filterAddress: sFilterAddress });
  },
  requestOldAuMessages: ():
    AppThunkAction<KnownAction> => (dispatch, getState) => {      
      const appState = getState();
      
      if (appState && appState.smsWebState && !appState.smsWebState.isLoadingOld) {

        // get some more history
        let nLast = appState.smsWebState.messages.length - 1;        
        let nBeforeID = (nLast >= 0) ? appState.smsWebState.messages[nLast].id : 0;
        if (nBeforeID === 0) return; // there's no more history; do nothing.

        let oFilter =
        {
          'Top': 15 + ''  // 15 new messages
          , 'FilterAddress': appState.smsWebState.filterAddress
          , 'AfterID': "0"
          , 'BeforeID': nBeforeID.toString()
        }

        fetch("api/messagedb/load?" + new URLSearchParams(oFilter))
          .then(response => response.json() as Promise<AuMessage[]>)
          .then(data => { dispatch({ type: AMS_RECEIVE_OLDMESSAGES, messages: data }); });

        dispatch({ type: AMS_REQUEST_OLDMESSAGES });
      }

    },
  requestAuMessages: ():
    AppThunkAction<KnownAction> => (dispatch, getState) => {      
      // Only load data if it's something we don't already have (and are not already loading)      
      const appState = getState();
      
      if (appState && appState.smsWebState && !appState.smsWebState.isLoadingNew) {

        // only get new messages
        let nAfterID = (appState.smsWebState.messages.length > 0) ?
          appState.smsWebState.messages[0].id : 0;

        let oFilter =
        {
          'Top': appState.smsWebState.nrMessagesToShow.toString()
          , 'FilterAddress': appState.smsWebState.filterAddress
          , 'AfterID': nAfterID.toString()
          , 'BeforeID': "0"
        }

        fetch("api/messagedb/load?" + new URLSearchParams(oFilter))
          .then(response => response.json() as Promise<AuMessage[]>)
          .then(data => { dispatch({ type: AMS_RECEIVE_MESSAGES, messages: data }); });

        dispatch({ type: AMS_REQUEST_MESSAGES });
      }
    }, createAuMessage: (oFormData: FormData):
    AppThunkAction<KnownAction> => (dispatch, getState) => {
      const appState = getState();
      if (appState && appState.smsWebState && !appState.smsWebState.isCreating) {

        fetch("api/messagedb/create", {
          method: "POST",
          body: oFormData
        })
          .then(response => response.json() as Promise<AuResultCode>)
          .then(data => { dispatch({ type: AMS_CREATED_MESSAGE, lastError: data.lastError, lastErrorDescription: data.lastErrorDescription }); });
        
        dispatch({ type: AMS_CREATE_MESSAGE });
      }
    }, showMessageDetails: (oMessage: AuMessage):
    AppThunkAction<KnownAction> => (dispatch, getState) => {
      dispatch({ type: AMS_SHOW_MESSAGEDETAILS, message: oMessage });
    }, hideMessageDetails: (): AppThunkAction<KnownAction> => (dispatch, getState) => {
      dispatch({ type: AMS_HIDE_MESSAGEDETAILS });
    }
};

// ----------------
// REDUCER - For a given state and action, returns the new state. To support time travel, this must not mutate the old state.

const unloadedState: SmsWebState =
{
  messages: [],
  filterAddress: "",
  nrMessagesToShow: 15,
  lastError: 0,
  lastErrorDescription: "",
  isLoadingNew: false,
  isLoadingOld: false,
  isCreating: false,
  scrollToAnchor: false,
  currentMessage: null
};

export const reducer: Reducer<SmsWebState> = (state: SmsWebState | undefined, incomingAction: Action): SmsWebState => {
  if (state === undefined) {
    return unloadedState;
  }

  const action = incomingAction as KnownAction;
  switch (action.type) {
    case AMS_CLEARFILTER:
      return {
        ...state,
        messages: [],
        filterAddress: "",
        scrollToAnchor: false,
      }
    case AMS_SETFILTER:
      return {
        ...state,
        messages: [],
        filterAddress: action.filterAddress,
        scrollToAnchor: false,
      }
    case AMS_REQUEST_OLDMESSAGES:
      return {
        ...state,
        isLoadingOld: true,
        scrollToAnchor: true,
      }
    case AMS_RECEIVE_OLDMESSAGES:
      // prepend received messages
      let aAllMessages = state.messages.concat(action.messages);
      let nNewLimit = aAllMessages.length;
      return {
        ...state,
        scrollToAnchor: true,         // will force scrolling to last known top visible message
        isLoadingOld: false,
        nrMessagesToShow: nNewLimit,  // so the history is not automatically cut on receive.
        messages: aAllMessages,
      }
    case AMS_REQUEST_MESSAGES:
      return {
        ...state,                     // ...spread operator
        isLoadingNew: true,        
      };
    case AMS_RECEIVE_MESSAGES:

      // append the received messages and remove any extra messages
      let aMessages = action.messages.concat(state.messages);
      if (aMessages.length > state.nrMessagesToShow)
        aMessages.splice(state.nrMessagesToShow);

      return {
        ...state,
        messages: aMessages,
        isLoadingNew: false,
        scrollToAnchor: false, // will force scroll to bottom
      };
    case AMS_CREATE_MESSAGE:
      return {
        ...state,
        lastError: 0,
        lastErrorDescription: "",
        isCreating: true,
      };
    case AMS_CREATED_MESSAGE:
      return {
        ...state,
        lastError: action.lastError,
        lastErrorDescription: action.lastErrorDescription,
        isCreating: false,
      };
    case AMS_SHOW_MESSAGEDETAILS:
      return {
        ...state,
        currentMessage: action.message
      };
    case AMS_HIDE_MESSAGEDETAILS:
      return {
        ...state,
        currentMessage: null
      }
    default:
      // do nothing..
      break;
  }

  return state; //unreachable
};
