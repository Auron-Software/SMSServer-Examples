import * as React from 'react';
import { connect } from 'react-redux';
import { RouteComponentProps } from 'react-router';
import { Row, Col, Spinner, Input, FormGroup, Container, InputGroup, Button, CustomInput, Label, Form, Modal, ModalHeader, ModalBody, ModalFooter } from 'reactstrap';
import { HubConnectionBuilder, LogLevel } from "@microsoft/signalr";
import * as SmsWebState from "../store/SmsWebState";
import { AuAttachment, AuMessage } from '../store/AuMessage';
import { ApplicationState } from '../store';
import MessageDetails from './MessageDetails';

// At runtime, Redux will merge together...
type ViewMessagesProps =
  SmsWebState.SmsWebState
  & typeof SmsWebState.actionCreators
  & RouteComponentProps<{}>; // ... plus incoming routing parameters

class ViewMessages extends React.PureComponent<ViewMessagesProps>
{
  private SID_PREFIX: string = "au-ibm-";
  private SID_MSG_PREFIX: string = 'au-msg-';

  private m_oHubConnection: any = null;
  private m_sAttachedFiles: string = "";
  private m_sScrollToAnchor: string = "";

  constructor(props: any) {
    super(props);
  }

  // This method is called when the component is first added to the document
  public componentDidMount()
  {
    // connect to message status hub
    this.m_oHubConnection = new HubConnectionBuilder()
      .withUrl("/MessageStatusHub")
      .withAutomaticReconnect()
      .configureLogging(LogLevel.Information)
      .build();

    this.m_oHubConnection.start();
    console.log("Connected to MessageStatusHub");

    this.m_oHubConnection.on("MessageStatusNotification",
      this.onMessageStatusNotification.bind(this));

    // fetch initial messages
    this.fetchData();

    // update sizing according to browser window
    this.doUpdateChatHeight();
    this.doUpdateAttachmentLabelWidth();
    window.addEventListener('resize', this.onBrowserWindowResize.bind(this))

    this.scrollToBottom();
  }

  // This method is called when the route parameters change
  public componentDidUpdate()
  {
    if (this.props.scrollToAnchor)
    {
      let oBottomDiv = document.getElementById(this.m_sScrollToAnchor);
      if (oBottomDiv) oBottomDiv.scrollIntoView({ behavior: "auto" });
    } else
    {
      this.scrollToBottom();
    }
  }

  private fetchData()
  {
    this.props.requestAuMessages();
  }

  private createMessage(oEvent: React.FormEvent)
  {
    oEvent.preventDefault();        

    // get elements
    let frmCreateToMessage = document.getElementById("frmCreateMessage") as HTMLFormElement;
    let txtBody = document.getElementById("txtBody") as HTMLInputElement;
    let txtToAddress = document.getElementById("txtToAddress") as HTMLInputElement;
    let btnAttachments = document.getElementById("btnAttachments") as HTMLInputElement;

    if (frmCreateToMessage === null) return;
    if (txtBody === null) return;
    if (txtToAddress === null) return;
    if (btnAttachments === null) return;

    if (txtToAddress.value === "" || txtBody.value === "") {
      alert("Please enter both a recipient phone number or email as well as a body text.");
      return;
    }

    // send form data (NOTE: formdata only adds elements that use 'name' attribute)
    const oFormData = new FormData(frmCreateToMessage);
    this.props.createAuMessage(oFormData);

    // clear fields
    txtBody.value = "";
    btnAttachments.value = "";
    this.m_sAttachedFiles = "";    
  }

  private onMessageStatusNotification(notification: any)
  {
    this.fetchData();
  }

  private doUpdateChatHeight()
  {
    let nHeightHeader = document.getElementsByTagName("header")[0].offsetHeight;
    let nHeightFooter = document.getElementById("au-viewmessage-create")?.offsetHeight;
    nHeightFooter = nHeightFooter === null ? 0 : nHeightFooter;

    let nHeightList = window.innerHeight - nHeightHeader - 30;
    if (nHeightFooter) nHeightList -= nHeightFooter

    let sListHeight = nHeightList + "px";

    let oMessageListDiv = document.getElementById("au-viewmessages-list");
    if (oMessageListDiv) oMessageListDiv.style.height = sListHeight;
  }

  private doUpdateAttachmentLabelWidth()
  {
    let nLeftCreate = document.getElementById("btnCreate")?.offsetLeft ?? 0;
    let nRightAttachment = document.getElementById("lblAttachments")?.offsetLeft ?? 0;
    let nOffsetWidth = document.getElementById("lblAttachments")?.offsetWidth ?? 0;

    nRightAttachment += nOffsetWidth;

    let nAttachFilenamesWidth = nLeftCreate - nRightAttachment - 45;
    let elemAttachFileNames = document.getElementById("au-viewmessage-filenames");
    if (elemAttachFileNames === null) return;

    let sWidth = nAttachFilenamesWidth + "px";
    elemAttachFileNames.style.maxWidth = sWidth;
  }

  private onBrowserWindowResize()
  {
    this.doUpdateChatHeight();
    this.doUpdateAttachmentLabelWidth();
  }

  private renderMessageBody(oMessage: AuMessage)
  {
    if (oMessage.typeID === "SMS") {
      return (
        <pre className="au-balloon-sms">{oMessage.body}</pre>
      );
    } else if (oMessage.typeID === "EMAIL") {
      return (
        <pre>{oMessage.body}</pre>
      );
    }
  }

  private renderAttachment(oMessage: AuMessage, oAttachment: AuAttachment)
  {
    let oParams =
    {
      'MessagesID': oMessage.id.toString()
      , 'AttachmentID': oAttachment.id.toString()
      , 'FileName': oAttachment.fileName
    };
    
    let sUrl = "api/messagedb/attachment?" + new URLSearchParams(oParams);

    return (
      <div key={oAttachment.id}><i className="bi-paperclip"></i> <a href={sUrl}>{oAttachment.fileName}</a></div >
    );
  }

  private toggleInlineBalloonMenu(sId: string) {
    let elemTarget = document.getElementById(sId);
    if (elemTarget === null) return;

    if (elemTarget.style.height === "0px") {      
      elemTarget.style.height = elemTarget.scrollHeight + 'px';
    }
    else {
      elemTarget.style.height = '0px';
    }      
  }

  private hideInlineBalloonMenu(sId: string)
  {
    let elemTarget = document.getElementById(sId);
    if (elemTarget === null) return;

    elemTarget.style.height = '0px';
  }

  private findMessage(nId: number): AuMessage | any {
    let n = this.props.messages.length;
    for (let i = 0; i < n; i++)
    {
      if (this.props.messages[i].id === nId)
        return this.props.messages[i];
    }
    
    return null;
  }

  private replyToMessage(sId: string) {
    this.hideInlineBalloonMenu(sId);

    let nId: number = +sId.replace(this.SID_PREFIX, '');

    let oMessage = this.findMessage(nId);
    if (oMessage === null) return;

    let txtToAddress = document.getElementById("txtToAddress") as HTMLInputElement;
    let txtBody = document.getElementById("txtBody") as HTMLInputElement;
    if (txtToAddress === null || txtBody === null) return;

    txtToAddress.value = (oMessage as AuMessage).fromAddress;
    txtBody.focus(); 
  }

  private forwardMessage(sId: string) {
    this.hideInlineBalloonMenu(sId);

    let nId: number = +sId.replace(this.SID_PREFIX, '');

    let oMessage = this.findMessage(nId);
    if (oMessage === null) return;

    let txtToAddress = document.getElementById("txtToAddress") as HTMLInputElement;
    let txtBody = document.getElementById("txtBody") as HTMLInputElement;
    if (txtToAddress === null || txtBody === null) return;

    txtBody.value = (oMessage as AuMessage).body;
    txtToAddress.focus();
  }

  private filterMessageFrom(sId: string) {
    this.hideInlineBalloonMenu(sId);

    let nId: number = +sId.replace(this.SID_PREFIX, '');

    let oMessage = this.findMessage(nId);
    if (oMessage === null) return;

    let txtToAddress = document.getElementById("txtToAddress") as HTMLInputElement;
    if (txtToAddress === null) return;

    let oAuMessage = oMessage as AuMessage;
    let sFilterAddress = oAuMessage.directionID === "IN" ? oAuMessage.fromAddress : oAuMessage.toAddress;

    txtToAddress.value = sFilterAddress;

    this.props.setFilter(sFilterAddress);
    this.props.requestAuMessages();
  }

  private showMessageInfo(sId: string) {
    let nId: number = +sId.replace(this.SID_PREFIX, '');

    let oMessage = this.findMessage(nId);
    if (oMessage === null) return;

    this.props.showMessageDetails(oMessage);

    this.hideInlineBalloonMenu(sId);
  }

  private renderTextBalloon(oMessage: AuMessage)
  {
    let nOffset = oMessage.directionID === "OUT" ? 3 : 0;
    let sBalloonClass = oMessage.directionID === "OUT" ?
      "au-balloon au-balloon-out" : "au-balloon au-balloon-in";
    let dtDate = oMessage.directionID === "OUT" ?
      oMessage.lastUpdate : oMessage.receivedTime; // don't use senttime because sometimes it's not yet sent
    let sDate = dtDate.toLocaleString().replace("T", " ");
    let bFilterEnabled = this.props.filterAddress !== "";

    let sInlineMenuId = this.SID_PREFIX + oMessage.id;

    return (
      <Row id={this.SID_MSG_PREFIX + oMessage.id} key={oMessage.id} >
        <Col sm={{ size: 9, offset: nOffset }}>
          <div className={sBalloonClass}>
            <div className="au-balloon-header">
              {oMessage.directionID === "IN" && <span className="au-balloon-from">From: {oMessage.fromAddress}:</span>}
              {oMessage.directionID === "OUT" && <span className="au-balloon-to">To: {oMessage.toAddress}:</span>}
              <span className="float-right au-balloon-hamburger">
                <Button className="btn-sm" onClick={this.toggleInlineBalloonMenu.bind(this, sInlineMenuId)}><i className="bi-list"></i></Button>
              </span>
            </div>
            <div id={sInlineMenuId} className="au-balloon-buttons">
              {(oMessage.directionID === "IN" && !bFilterEnabled) &&
                <Button className="btn-sm" onClick={this.replyToMessage.bind(this, sInlineMenuId)}><i className="bi-reply"></i></Button>}
              {!bFilterEnabled &&
                <Button className="btn-sm" onClick={this.forwardMessage.bind(this, sInlineMenuId)}><i className="bi-forward"></i></Button>}
              {!bFilterEnabled &&
                <Button className="btn-sm" onClick={this.filterMessageFrom.bind(this, sInlineMenuId)}><i className="bi-funnel"></i></Button> }
              <Button className="btn-sm" onClick={this.showMessageInfo.bind(this, sInlineMenuId)}><i className="bi-info-circle"></i></Button>
            </div>
            <div className="au-balloon-text">{this.renderMessageBody(oMessage)}</div>
            <div>{oMessage.attachments !== null ? oMessage.attachments.map((oAttachment: AuAttachment) => this.renderAttachment(oMessage, oAttachment)): ""}</div>
            <div className="au-balloon-footer">
              <span className="float-right au-balloon-timestamp">{sDate}</span>
            </div>
          </div>
        </Col>
      </Row>
    )
  }

  private renderTextBalloons()
  {
    return (
      <React.Fragment>
        {          
          this.props.messages.slice(0).reverse().map((oMessage: AuMessage) =>
            this.renderTextBalloon(oMessage)
        )}
      </React.Fragment>
    );
  }

  private renderLoadingNew() {
    if (this.props.isLoadingNew)
      return (
        <Row><Col style={{ textAlign: 'center' }}>
            <Spinner/>
          </Col></Row>
      );
    return (null);
  }

  private renderLoadingOld() {
    if (this.props.isLoadingOld)
      return (
        <Row><Col style={{ textAlign: 'center' }}>
          <Spinner />
        </Col></Row>
      );
    return (null);
  }

  private addAttachment()
  {
    let elemInput = document.getElementById("btnAttachments") as HTMLInputElement;
    if (elemInput === null) return;

    let aFiles = elemInput.files;
    if (aFiles === null) return;

    this.m_sAttachedFiles = ""
    let nLen = aFiles.length;
    for (let i = 0; i < nLen; i++)
      this.m_sAttachedFiles += (i > 0 ? "; " + aFiles[i].name: aFiles[i].name);

    this.forceUpdate();
  }

  private onClickToggleFilter()
  {
    if (this.props.filterAddress !== "")
    { // the filter is already active; clear it
      this.props.clearFilter();
      this.props.requestAuMessages();
      return;
    }

    // no filter active; set it
    let txtToAddress = document.getElementById("txtToAddress") as HTMLInputElement;
    if (txtToAddress === null) return;

    if (txtToAddress.value === "")
    {
      alert("Please enter a phone number or e-mail address to filter on.");
      return;
    }

    this.props.setFilter(txtToAddress.value);
    this.props.requestAuMessages();
  }

  private renderCreateMessage()
  {
    let bFilterEnabled = this.props.filterAddress !== "";    
    return (
      <Container id="au-viewmessage-create" className="fixed-bottom border-top box-shadow">
        <Row><Col>
          <Form id="frmCreateMessage" onSubmit={this.createMessage.bind(this)}>
            <FormGroup>
              <InputGroup>
                {this.props.filterAddress !== ""}
                <Input type="text" id="txtToAddress" name="txtToAddress" placeholder="Phone number or e-mail address" readOnly={bFilterEnabled}>
                </Input>
                <Button type="button" className="au-btn-stack-icon" onClick={this.onClickToggleFilter.bind(this)}>
                  <i className="bi-funnel"></i>
                  {bFilterEnabled && <i className="bi-x au-tbn-stock-icon-overlay"></i>}                  
                </Button>
              </InputGroup>
            </FormGroup>
            <FormGroup>
              <Input type="textarea" id="txtBody" name="txtBody" placeholder="Text to send">
              </Input>
            </FormGroup>
            <FormGroup>
              <Label for="btnAttachments" id="lblAttachments" className="btn btn-secondary"><i className="bi-paperclip"></i></Label>
              <Input id="btnAttachments" name="btnAttachments" type="file" style={{ display: "none" }} onChange={this.addAttachment.bind(this)} multiple />
              <span id="au-viewmessage-filenames">{this.m_sAttachedFiles}</span>
              <Button type="submit" id="btnCreate" className="float-right btn-primary">Send <i className="bi-send"></i></Button>
            </FormGroup>
          </Form>
        </Col></Row>
      </Container>
    );
  }

  private scrollToBottom()
  {
    let oBottomDiv = document.getElementById("au-viewmessages-bottom");
    if (oBottomDiv) oBottomDiv.scrollIntoView({ behavior: "smooth" });
  }

  private onScrollMessageList()
  {
    let oMessageListDiv = document.getElementById("au-viewmessages-list");
    if (oMessageListDiv === null) return;

    if (oMessageListDiv.scrollTop === 0)
    { // at top; load history
      // but first remember our current position so we can scroll there after update.
      let nIdx = this.props.messages.length - 1;
      if (nIdx >= 0)
        this.m_sScrollToAnchor = this.SID_MSG_PREFIX + this.props.messages[nIdx].id;

      this.props.requestOldAuMessages();
    }
  }

  render()
  {
    return (
      <React.Fragment>
        <Row><Col id="au-viewmessages-list" onScroll={this.onScrollMessageList.bind(this)} >
          {this.renderLoadingOld()}
          {this.renderTextBalloons()}
          {this.renderLoadingNew()}
          <div id="au-viewmessages-bottom" style={{ float: "left", clear: "both" }}></div>
        </Col></Row>

        {this.renderCreateMessage()}

        <MessageDetails />

      </React.Fragment>
    );
  }
}

export default connect(
  (state: ApplicationState) => state.smsWebState // merged into props
  , SmsWebState.actionCreators               // action creators in props
)(ViewMessages as any);
