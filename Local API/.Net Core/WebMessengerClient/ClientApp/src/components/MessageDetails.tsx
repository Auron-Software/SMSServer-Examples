import * as React from 'react';
import { connect } from 'react-redux';
import { RouteComponentProps } from 'react-router';
import { Modal, ModalHeader, ModalBody, ModalFooter, Button, FormGroup, Label, Input, Row, Col, Table } from 'reactstrap';
import * as SmsWebState from "../store/SmsWebState";
import { AuAttachment, AuMessage } from '../store/AuMessage';
import { ApplicationState } from '../store';

// At runtime, Redux will merge together...
type ViewMessagesProps =
  SmsWebState.SmsWebState
  & typeof SmsWebState.actionCreators
  & RouteComponentProps<{}>; // ... plus incoming routing parameters

class MessageDetails extends React.PureComponent<ViewMessagesProps>
{
  constructor(props: any) {
    super(props);
  }

  // This method is called when the component is first added to the document
  public componentDidMount() {

  }

  public componentDidUpdate() {
    
  }

  private onClickClose()
  {
    this.props.hideMessageDetails();
  }

  private onToggleModal(): boolean
  {
    return true;
  }

  render() {
    if (this.props.currentMessage === null) return <React.Fragment />;
    let oMessage: AuMessage = this.props.currentMessage;

    // traceline: [1634743085 10/20/2021 05:18:05 PM]: New message created in database
    let sTrace = oMessage.trace === null ? "" : oMessage.trace;
    let aTraceLines = sTrace.split("\n");

    return (
      <Modal isOpen={this.props.currentMessage != null} >
        <ModalHeader toggle={this.onClickClose.bind(this)}>
          Message ID: {oMessage.id.toString()}          
        </ModalHeader>
        <ModalBody>
          <Row><Col><FormGroup>
            <Label for="txtMdType">Type</Label><Input readOnly id="txtMdType"
              value={oMessage.typeID} />
          </FormGroup></Col>
          <Col><FormGroup>
            <Label for="txtMdStatus">Status</Label><Input readOnly id="txtMdStatus"
              value={oMessage.statusID} />
          </FormGroup></Col></Row>
          <Row><Col><FormGroup>
            <Label for="txtMdBillingID">Billing ID</Label><Input readOnly id="txtMdBillingID"
              value={oMessage.billingID} />
          </FormGroup></Col>
          <Col><FormGroup>
            {oMessage.directionID === "IN" &&
              <React.Fragment><Label for="txtMdReceiveTime">Received Time</Label>
                <Input readOnly id="txtMdReceiveTime" value={oMessage.receivedTime.toString().replace("T", " ")} />
              </React.Fragment>}
            {oMessage.directionID === "OUT" &&
              <React.Fragment><Label for="txtMdScheduledTime">Scheduled Time</Label>
                <Input readOnly id="txtMdScheduledTime" value={oMessage.scheduledTime.toString().replace("T", " ")} />
              </React.Fragment>}
            </FormGroup></Col></Row>
          <Row><Col>
            <FormGroup>
              <Label for="tblMdTrace">Trace</Label>
              <Table id="tblMdTrace" bordered>
                <tbody>
                  {aTraceLines.map((sLine: string, idx: number) =>
                    <tr key={idx}><td>
                      {sLine.split("]:")[0].slice(12)}
                    </td><td>
                      {sLine.split("]:")[1]}
                    </td></tr>
                  )}
                </tbody>
              </Table>
            </FormGroup>
          </Col></Row>
        </ModalBody>
        </Modal>
    );
  }
}

export default connect(
  (state: ApplicationState) => state.smsWebState // merged into props
  , SmsWebState.actionCreators               // action creators in props
)(MessageDetails as any);
