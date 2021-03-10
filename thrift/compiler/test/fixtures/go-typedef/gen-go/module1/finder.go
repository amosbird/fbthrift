// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package module1

import (
	"bytes"
	"context"
	"sync"
	"fmt"
	thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
	module00 "module0"

)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = sync.Mutex{}
var _ = bytes.Equal
var _ = context.Background

var _ = module00.GoUnusedProtection__
type Finder interface {
  // Parameters:
  //  - Plate
  ByPlate(plate Plate) (_r *Automobile, err error)
  // Parameters:
  //  - Plate
  AliasByPlate(plate Plate) (_r *Car, err error)
  // Parameters:
  //  - Plate
  PreviousPlate(plate Plate) (_r Plate, err error)
}

type FinderClientInterface interface {
  thrift.ClientInterface
  // Parameters:
  //  - Plate
  ByPlate(plate Plate) (_r *Automobile, err error)
  // Parameters:
  //  - Plate
  AliasByPlate(plate Plate) (_r *Car, err error)
  // Parameters:
  //  - Plate
  PreviousPlate(plate Plate) (_r Plate, err error)
}

type FinderClient struct {
  FinderClientInterface
  CC thrift.ClientConn
}

func(client *FinderClient) Open() error {
  return client.CC.Open()
}

func(client *FinderClient) Close() error {
  return client.CC.Close()
}

func(client *FinderClient) IsOpen() bool {
  return client.CC.IsOpen()
}

func NewFinderClientFactory(t thrift.Transport, f thrift.ProtocolFactory) *FinderClient {
  return &FinderClient{ CC: thrift.NewClientConn(t, f) }
}

func NewFinderClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *FinderClient {
  return &FinderClient{ CC: thrift.NewClientConnWithProtocols(t, iprot, oprot) }
}

func NewFinderClientProtocol(prot thrift.Protocol) *FinderClient {
  return NewFinderClient(prot.Transport(), prot, prot)
}

// Parameters:
//  - Plate
func (p *FinderClient) ByPlate(plate Plate) (_r *Automobile, err error) {
  args := FinderByPlateArgs{
    Plate : plate,
  }
  err = p.CC.SendMsg("byPlate", &args, thrift.CALL)
  if err != nil { return }
  return p.recvByPlate()
}


func (p *FinderClient) recvByPlate() (value *Automobile, err error) {
  var result FinderByPlateResult
  err = p.CC.RecvMsg("byPlate", &result)
  if err != nil { return }

  return result.GetSuccess(), nil
}

// Parameters:
//  - Plate
func (p *FinderClient) AliasByPlate(plate Plate) (_r *Car, err error) {
  args := FinderAliasByPlateArgs{
    Plate : plate,
  }
  err = p.CC.SendMsg("aliasByPlate", &args, thrift.CALL)
  if err != nil { return }
  return p.recvAliasByPlate()
}


func (p *FinderClient) recvAliasByPlate() (value *Car, err error) {
  var result FinderAliasByPlateResult
  err = p.CC.RecvMsg("aliasByPlate", &result)
  if err != nil { return }

  return result.GetSuccess(), nil
}

// Parameters:
//  - Plate
func (p *FinderClient) PreviousPlate(plate Plate) (_r Plate, err error) {
  args := FinderPreviousPlateArgs{
    Plate : plate,
  }
  err = p.CC.SendMsg("previousPlate", &args, thrift.CALL)
  if err != nil { return }
  return p.recvPreviousPlate()
}


func (p *FinderClient) recvPreviousPlate() (value Plate, err error) {
  var result FinderPreviousPlateResult
  err = p.CC.RecvMsg("previousPlate", &result)
  if err != nil { return }

  return result.GetSuccess(), nil
}


type FinderThreadsafeClient struct {
  FinderClientInterface
  CC thrift.ClientConn
  Mu sync.Mutex
}

func(client *FinderThreadsafeClient) Open() error {
  client.Mu.Lock()
  defer client.Mu.Unlock()
  return client.CC.Open()
}

func(client *FinderThreadsafeClient) Close() error {
  client.Mu.Lock()
  defer client.Mu.Unlock()
  return client.CC.Close()
}

func(client *FinderThreadsafeClient) IsOpen() bool {
  client.Mu.Lock()
  defer client.Mu.Unlock()
  return client.CC.IsOpen()
}

func NewFinderThreadsafeClientFactory(t thrift.Transport, f thrift.ProtocolFactory) *FinderThreadsafeClient {
  return &FinderThreadsafeClient{ CC: thrift.NewClientConn(t, f) }
}

func NewFinderThreadsafeClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *FinderThreadsafeClient {
  return &FinderThreadsafeClient{ CC: thrift.NewClientConnWithProtocols(t, iprot, oprot) }
}

func NewFinderThreadsafeClientProtocol(prot thrift.Protocol) *FinderThreadsafeClient {
  return NewFinderThreadsafeClient(prot.Transport(), prot, prot)
}

// Parameters:
//  - Plate
func (p *FinderThreadsafeClient) ByPlate(plate Plate) (_r *Automobile, err error) {
  p.Mu.Lock()
  defer p.Mu.Unlock()
  args := FinderByPlateArgs{
    Plate : plate,
  }
  err = p.CC.SendMsg("byPlate", &args, thrift.CALL)
  if err != nil { return }
  return p.recvByPlate()
}


func (p *FinderThreadsafeClient) recvByPlate() (value *Automobile, err error) {
  var result FinderByPlateResult
  err = p.CC.RecvMsg("byPlate", &result)
  if err != nil { return }

  return result.GetSuccess(), nil
}

// Parameters:
//  - Plate
func (p *FinderThreadsafeClient) AliasByPlate(plate Plate) (_r *Car, err error) {
  p.Mu.Lock()
  defer p.Mu.Unlock()
  args := FinderAliasByPlateArgs{
    Plate : plate,
  }
  err = p.CC.SendMsg("aliasByPlate", &args, thrift.CALL)
  if err != nil { return }
  return p.recvAliasByPlate()
}


func (p *FinderThreadsafeClient) recvAliasByPlate() (value *Car, err error) {
  var result FinderAliasByPlateResult
  err = p.CC.RecvMsg("aliasByPlate", &result)
  if err != nil { return }

  return result.GetSuccess(), nil
}

// Parameters:
//  - Plate
func (p *FinderThreadsafeClient) PreviousPlate(plate Plate) (_r Plate, err error) {
  p.Mu.Lock()
  defer p.Mu.Unlock()
  args := FinderPreviousPlateArgs{
    Plate : plate,
  }
  err = p.CC.SendMsg("previousPlate", &args, thrift.CALL)
  if err != nil { return }
  return p.recvPreviousPlate()
}


func (p *FinderThreadsafeClient) recvPreviousPlate() (value Plate, err error) {
  var result FinderPreviousPlateResult
  err = p.CC.RecvMsg("previousPlate", &result)
  if err != nil { return }

  return result.GetSuccess(), nil
}


type FinderChannelClient struct {
  RequestChannel thrift.RequestChannel
}

func (c *FinderChannelClient) Close() error {
  return c.RequestChannel.Close()
}

func (c *FinderChannelClient) IsOpen() bool {
  return c.RequestChannel.IsOpen()
}

func (c *FinderChannelClient) Open() error {
  return c.RequestChannel.Open()
}

func NewFinderChannelClient(channel thrift.RequestChannel) *FinderChannelClient {
  return &FinderChannelClient{RequestChannel: channel}
}

// Parameters:
//  - Plate
func (p *FinderChannelClient) ByPlate(ctx context.Context, plate Plate) (_r *Automobile, err error) {
  args := FinderByPlateArgs{
    Plate : plate,
  }
  var result FinderByPlateResult
  err = p.RequestChannel.Call(ctx, "byPlate", &args, &result)
  if err != nil { return }

  return result.GetSuccess(), nil
}

// Parameters:
//  - Plate
func (p *FinderChannelClient) AliasByPlate(ctx context.Context, plate Plate) (_r *Car, err error) {
  args := FinderAliasByPlateArgs{
    Plate : plate,
  }
  var result FinderAliasByPlateResult
  err = p.RequestChannel.Call(ctx, "aliasByPlate", &args, &result)
  if err != nil { return }

  return result.GetSuccess(), nil
}

// Parameters:
//  - Plate
func (p *FinderChannelClient) PreviousPlate(ctx context.Context, plate Plate) (_r Plate, err error) {
  args := FinderPreviousPlateArgs{
    Plate : plate,
  }
  var result FinderPreviousPlateResult
  err = p.RequestChannel.Call(ctx, "previousPlate", &args, &result)
  if err != nil { return }

  return result.GetSuccess(), nil
}


type FinderProcessor struct {
  processorMap map[string]thrift.ProcessorFunction
  handler Finder
}

func (p *FinderProcessor) AddToProcessorMap(key string, processor thrift.ProcessorFunction) {
  p.processorMap[key] = processor
}

func (p *FinderProcessor) GetProcessorFunction(key string) (processor thrift.ProcessorFunction, err error) {
  if processor, ok := p.processorMap[key]; ok {
    return processor, nil
  }
  return nil, nil // generic error message will be sent
}

func (p *FinderProcessor) ProcessorMap() map[string]thrift.ProcessorFunction {
  return p.processorMap
}

func NewFinderProcessor(handler Finder) *FinderProcessor {
  self9 := &FinderProcessor{handler:handler, processorMap:make(map[string]thrift.ProcessorFunction)}
  self9.processorMap["byPlate"] = &finderProcessorByPlate{handler:handler}
  self9.processorMap["aliasByPlate"] = &finderProcessorAliasByPlate{handler:handler}
  self9.processorMap["previousPlate"] = &finderProcessorPreviousPlate{handler:handler}
  return self9
}

type finderProcessorByPlate struct {
  handler Finder
}

func (p *finderProcessorByPlate) Read(iprot thrift.Protocol) (thrift.Struct, thrift.Exception) {
  args := FinderByPlateArgs{}
  if err := args.Read(iprot); err != nil {
    return nil, err
  }
  iprot.ReadMessageEnd()
  return &args, nil
}

func (p *finderProcessorByPlate) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Protocol) (err thrift.Exception) {
  var err2 error
  messageType := thrift.REPLY
  switch result.(type) {
  case thrift.ApplicationException:
    messageType = thrift.EXCEPTION
  }
  if err2 = oprot.WriteMessageBegin("byPlate", messageType, seqId); err2 != nil {
    err = err2
  }
  if err2 = result.Write(oprot); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.Flush(); err == nil && err2 != nil {
    err = err2
  }
  return err
}

func (p *finderProcessorByPlate) Run(argStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
  args := argStruct.(*FinderByPlateArgs)
  var result FinderByPlateResult
  if retval, err := p.handler.ByPlate(args.Plate); err != nil {
    switch err.(type) {
    default:
      x := thrift.NewApplicationException(thrift.INTERNAL_ERROR, "Internal error processing byPlate: " + err.Error())
      return x, x
    }
  } else {
    result.Success = retval
  }
  return &result, nil
}

type finderProcessorAliasByPlate struct {
  handler Finder
}

func (p *finderProcessorAliasByPlate) Read(iprot thrift.Protocol) (thrift.Struct, thrift.Exception) {
  args := FinderAliasByPlateArgs{}
  if err := args.Read(iprot); err != nil {
    return nil, err
  }
  iprot.ReadMessageEnd()
  return &args, nil
}

func (p *finderProcessorAliasByPlate) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Protocol) (err thrift.Exception) {
  var err2 error
  messageType := thrift.REPLY
  switch result.(type) {
  case thrift.ApplicationException:
    messageType = thrift.EXCEPTION
  }
  if err2 = oprot.WriteMessageBegin("aliasByPlate", messageType, seqId); err2 != nil {
    err = err2
  }
  if err2 = result.Write(oprot); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.Flush(); err == nil && err2 != nil {
    err = err2
  }
  return err
}

func (p *finderProcessorAliasByPlate) Run(argStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
  args := argStruct.(*FinderAliasByPlateArgs)
  var result FinderAliasByPlateResult
  if retval, err := p.handler.AliasByPlate(args.Plate); err != nil {
    switch err.(type) {
    default:
      x := thrift.NewApplicationException(thrift.INTERNAL_ERROR, "Internal error processing aliasByPlate: " + err.Error())
      return x, x
    }
  } else {
    result.Success = retval
  }
  return &result, nil
}

type finderProcessorPreviousPlate struct {
  handler Finder
}

func (p *finderProcessorPreviousPlate) Read(iprot thrift.Protocol) (thrift.Struct, thrift.Exception) {
  args := FinderPreviousPlateArgs{}
  if err := args.Read(iprot); err != nil {
    return nil, err
  }
  iprot.ReadMessageEnd()
  return &args, nil
}

func (p *finderProcessorPreviousPlate) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Protocol) (err thrift.Exception) {
  var err2 error
  messageType := thrift.REPLY
  switch result.(type) {
  case thrift.ApplicationException:
    messageType = thrift.EXCEPTION
  }
  if err2 = oprot.WriteMessageBegin("previousPlate", messageType, seqId); err2 != nil {
    err = err2
  }
  if err2 = result.Write(oprot); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.Flush(); err == nil && err2 != nil {
    err = err2
  }
  return err
}

func (p *finderProcessorPreviousPlate) Run(argStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
  args := argStruct.(*FinderPreviousPlateArgs)
  var result FinderPreviousPlateResult
  if retval, err := p.handler.PreviousPlate(args.Plate); err != nil {
    switch err.(type) {
    default:
      x := thrift.NewApplicationException(thrift.INTERNAL_ERROR, "Internal error processing previousPlate: " + err.Error())
      return x, x
    }
  } else {
    result.Success = &retval
  }
  return &result, nil
}


// HELPER FUNCTIONS AND STRUCTURES

// Attributes:
//  - Plate
type FinderByPlateArgs struct {
  thrift.IRequest
  Plate Plate `thrift:"plate,1" db:"plate" json:"plate"`
}

func NewFinderByPlateArgs() *FinderByPlateArgs {
  return &FinderByPlateArgs{}
}


func (p *FinderByPlateArgs) GetPlate() Plate {
  return p.Plate
}
type FinderByPlateArgsBuilder struct {
  obj *FinderByPlateArgs
}

func NewFinderByPlateArgsBuilder() *FinderByPlateArgsBuilder{
  return &FinderByPlateArgsBuilder{
    obj: NewFinderByPlateArgs(),
  }
}

func (p FinderByPlateArgsBuilder) Emit() *FinderByPlateArgs{
  return &FinderByPlateArgs{
    Plate: p.obj.Plate,
  }
}

func (f *FinderByPlateArgsBuilder) Plate(plate Plate) *FinderByPlateArgsBuilder {
  f.obj.Plate = plate
  return f
}

func (f *FinderByPlateArgs) SetPlate(plate Plate) *FinderByPlateArgs {
  f.Plate = plate
  return f
}

func (p *FinderByPlateArgs) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *FinderByPlateArgs)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 1: ", err)
} else {
  temp := Plate(v)
  p.Plate = temp
}
  return nil
}

func (p *FinderByPlateArgs) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("byPlate_args"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *FinderByPlateArgs) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("plate", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:plate: ", p), err) }
  if err := oprot.WriteString(string(p.Plate)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.plate (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:plate: ", p), err) }
  return err
}

func (p *FinderByPlateArgs) String() string {
  if p == nil {
    return "<nil>"
  }

  plateVal := fmt.Sprintf("%v", p.Plate)
  return fmt.Sprintf("FinderByPlateArgs({Plate:%s})", plateVal)
}

// Attributes:
//  - Success
type FinderByPlateResult struct {
  thrift.IResponse
  Success *Automobile `thrift:"success,0" db:"success" json:"success,omitempty"`
}

func NewFinderByPlateResult() *FinderByPlateResult {
  return &FinderByPlateResult{}
}

var FinderByPlateResult_Success_DEFAULT *Automobile
func (p *FinderByPlateResult) GetSuccess() *Automobile {
  if !p.IsSetSuccess() {
    return FinderByPlateResult_Success_DEFAULT
  }
return p.Success
}
func (p *FinderByPlateResult) IsSetSuccess() bool {
  return p != nil && p.Success != nil
}

type FinderByPlateResultBuilder struct {
  obj *FinderByPlateResult
}

func NewFinderByPlateResultBuilder() *FinderByPlateResultBuilder{
  return &FinderByPlateResultBuilder{
    obj: NewFinderByPlateResult(),
  }
}

func (p FinderByPlateResultBuilder) Emit() *FinderByPlateResult{
  return &FinderByPlateResult{
    Success: p.obj.Success,
  }
}

func (f *FinderByPlateResultBuilder) Success(success *Automobile) *FinderByPlateResultBuilder {
  f.obj.Success = success
  return f
}

func (f *FinderByPlateResult) SetSuccess(success *Automobile) *FinderByPlateResult {
  f.Success = success
  return f
}

func (p *FinderByPlateResult) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 0:
      if err := p.ReadField0(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *FinderByPlateResult)  ReadField0(iprot thrift.Protocol) error {
  p.Success = NewAutomobile()
  if err := p.Success.Read(iprot); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T error reading struct: ", p.Success), err)
  }
  return nil
}

func (p *FinderByPlateResult) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("byPlate_result"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField0(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *FinderByPlateResult) writeField0(oprot thrift.Protocol) (err error) {
  if p.IsSetSuccess() {
    if err := oprot.WriteFieldBegin("success", thrift.STRUCT, 0); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field begin error 0:success: ", p), err) }
    if err := p.Success.Write(oprot); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T error writing struct: ", p.Success), err)
    }
    if err := oprot.WriteFieldEnd(); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field end error 0:success: ", p), err) }
  }
  return err
}

func (p *FinderByPlateResult) String() string {
  if p == nil {
    return "<nil>"
  }

  var successVal string
  if p.Success == nil {
    successVal = "<nil>"
  } else {
    successVal = fmt.Sprintf("%v", p.Success)
  }
  return fmt.Sprintf("FinderByPlateResult({Success:%s})", successVal)
}

// Attributes:
//  - Plate
type FinderAliasByPlateArgs struct {
  thrift.IRequest
  Plate Plate `thrift:"plate,1" db:"plate" json:"plate"`
}

func NewFinderAliasByPlateArgs() *FinderAliasByPlateArgs {
  return &FinderAliasByPlateArgs{}
}


func (p *FinderAliasByPlateArgs) GetPlate() Plate {
  return p.Plate
}
type FinderAliasByPlateArgsBuilder struct {
  obj *FinderAliasByPlateArgs
}

func NewFinderAliasByPlateArgsBuilder() *FinderAliasByPlateArgsBuilder{
  return &FinderAliasByPlateArgsBuilder{
    obj: NewFinderAliasByPlateArgs(),
  }
}

func (p FinderAliasByPlateArgsBuilder) Emit() *FinderAliasByPlateArgs{
  return &FinderAliasByPlateArgs{
    Plate: p.obj.Plate,
  }
}

func (f *FinderAliasByPlateArgsBuilder) Plate(plate Plate) *FinderAliasByPlateArgsBuilder {
  f.obj.Plate = plate
  return f
}

func (f *FinderAliasByPlateArgs) SetPlate(plate Plate) *FinderAliasByPlateArgs {
  f.Plate = plate
  return f
}

func (p *FinderAliasByPlateArgs) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *FinderAliasByPlateArgs)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 1: ", err)
} else {
  temp := Plate(v)
  p.Plate = temp
}
  return nil
}

func (p *FinderAliasByPlateArgs) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("aliasByPlate_args"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *FinderAliasByPlateArgs) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("plate", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:plate: ", p), err) }
  if err := oprot.WriteString(string(p.Plate)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.plate (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:plate: ", p), err) }
  return err
}

func (p *FinderAliasByPlateArgs) String() string {
  if p == nil {
    return "<nil>"
  }

  plateVal := fmt.Sprintf("%v", p.Plate)
  return fmt.Sprintf("FinderAliasByPlateArgs({Plate:%s})", plateVal)
}

// Attributes:
//  - Success
type FinderAliasByPlateResult struct {
  thrift.IResponse
  Success *Car `thrift:"success,0" db:"success" json:"success,omitempty"`
}

func NewFinderAliasByPlateResult() *FinderAliasByPlateResult {
  return &FinderAliasByPlateResult{}
}

var FinderAliasByPlateResult_Success_DEFAULT *Car
func (p *FinderAliasByPlateResult) GetSuccess() *Car {
  if !p.IsSetSuccess() {
    return FinderAliasByPlateResult_Success_DEFAULT
  }
return p.Success
}
func (p *FinderAliasByPlateResult) IsSetSuccess() bool {
  return p != nil && p.Success != nil
}

type FinderAliasByPlateResultBuilder struct {
  obj *FinderAliasByPlateResult
}

func NewFinderAliasByPlateResultBuilder() *FinderAliasByPlateResultBuilder{
  return &FinderAliasByPlateResultBuilder{
    obj: NewFinderAliasByPlateResult(),
  }
}

func (p FinderAliasByPlateResultBuilder) Emit() *FinderAliasByPlateResult{
  return &FinderAliasByPlateResult{
    Success: p.obj.Success,
  }
}

func (f *FinderAliasByPlateResultBuilder) Success(success *Car) *FinderAliasByPlateResultBuilder {
  f.obj.Success = success
  return f
}

func (f *FinderAliasByPlateResult) SetSuccess(success *Car) *FinderAliasByPlateResult {
  f.Success = success
  return f
}

func (p *FinderAliasByPlateResult) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 0:
      if err := p.ReadField0(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *FinderAliasByPlateResult)  ReadField0(iprot thrift.Protocol) error {
  p.Success = NewCar()
  if err := p.Success.Read(iprot); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T error reading struct: ", p.Success), err)
  }
  return nil
}

func (p *FinderAliasByPlateResult) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("aliasByPlate_result"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField0(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *FinderAliasByPlateResult) writeField0(oprot thrift.Protocol) (err error) {
  if p.IsSetSuccess() {
    if err := oprot.WriteFieldBegin("success", thrift.STRUCT, 0); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field begin error 0:success: ", p), err) }
    if err := p.Success.Write(oprot); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T error writing struct: ", p.Success), err)
    }
    if err := oprot.WriteFieldEnd(); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field end error 0:success: ", p), err) }
  }
  return err
}

func (p *FinderAliasByPlateResult) String() string {
  if p == nil {
    return "<nil>"
  }

  var successVal string
  if p.Success == nil {
    successVal = "<nil>"
  } else {
    successVal = fmt.Sprintf("%v", p.Success)
  }
  return fmt.Sprintf("FinderAliasByPlateResult({Success:%s})", successVal)
}

// Attributes:
//  - Plate
type FinderPreviousPlateArgs struct {
  thrift.IRequest
  Plate Plate `thrift:"plate,1" db:"plate" json:"plate"`
}

func NewFinderPreviousPlateArgs() *FinderPreviousPlateArgs {
  return &FinderPreviousPlateArgs{}
}


func (p *FinderPreviousPlateArgs) GetPlate() Plate {
  return p.Plate
}
type FinderPreviousPlateArgsBuilder struct {
  obj *FinderPreviousPlateArgs
}

func NewFinderPreviousPlateArgsBuilder() *FinderPreviousPlateArgsBuilder{
  return &FinderPreviousPlateArgsBuilder{
    obj: NewFinderPreviousPlateArgs(),
  }
}

func (p FinderPreviousPlateArgsBuilder) Emit() *FinderPreviousPlateArgs{
  return &FinderPreviousPlateArgs{
    Plate: p.obj.Plate,
  }
}

func (f *FinderPreviousPlateArgsBuilder) Plate(plate Plate) *FinderPreviousPlateArgsBuilder {
  f.obj.Plate = plate
  return f
}

func (f *FinderPreviousPlateArgs) SetPlate(plate Plate) *FinderPreviousPlateArgs {
  f.Plate = plate
  return f
}

func (p *FinderPreviousPlateArgs) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *FinderPreviousPlateArgs)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 1: ", err)
} else {
  temp := Plate(v)
  p.Plate = temp
}
  return nil
}

func (p *FinderPreviousPlateArgs) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("previousPlate_args"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *FinderPreviousPlateArgs) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("plate", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:plate: ", p), err) }
  if err := oprot.WriteString(string(p.Plate)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.plate (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:plate: ", p), err) }
  return err
}

func (p *FinderPreviousPlateArgs) String() string {
  if p == nil {
    return "<nil>"
  }

  plateVal := fmt.Sprintf("%v", p.Plate)
  return fmt.Sprintf("FinderPreviousPlateArgs({Plate:%s})", plateVal)
}

// Attributes:
//  - Success
type FinderPreviousPlateResult struct {
  thrift.IResponse
  Success *Plate `thrift:"success,0" db:"success" json:"success,omitempty"`
}

func NewFinderPreviousPlateResult() *FinderPreviousPlateResult {
  return &FinderPreviousPlateResult{}
}

var FinderPreviousPlateResult_Success_DEFAULT Plate
func (p *FinderPreviousPlateResult) GetSuccess() Plate {
  if !p.IsSetSuccess() {
    return FinderPreviousPlateResult_Success_DEFAULT
  }
return *p.Success
}
func (p *FinderPreviousPlateResult) IsSetSuccess() bool {
  return p != nil && p.Success != nil
}

type FinderPreviousPlateResultBuilder struct {
  obj *FinderPreviousPlateResult
}

func NewFinderPreviousPlateResultBuilder() *FinderPreviousPlateResultBuilder{
  return &FinderPreviousPlateResultBuilder{
    obj: NewFinderPreviousPlateResult(),
  }
}

func (p FinderPreviousPlateResultBuilder) Emit() *FinderPreviousPlateResult{
  return &FinderPreviousPlateResult{
    Success: p.obj.Success,
  }
}

func (f *FinderPreviousPlateResultBuilder) Success(success *Plate) *FinderPreviousPlateResultBuilder {
  f.obj.Success = success
  return f
}

func (f *FinderPreviousPlateResult) SetSuccess(success *Plate) *FinderPreviousPlateResult {
  f.Success = success
  return f
}

func (p *FinderPreviousPlateResult) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 0:
      if err := p.ReadField0(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *FinderPreviousPlateResult)  ReadField0(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 0: ", err)
} else {
  temp := Plate(v)
  p.Success = &temp
}
  return nil
}

func (p *FinderPreviousPlateResult) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("previousPlate_result"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField0(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *FinderPreviousPlateResult) writeField0(oprot thrift.Protocol) (err error) {
  if p.IsSetSuccess() {
    if err := oprot.WriteFieldBegin("success", thrift.STRING, 0); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field begin error 0:success: ", p), err) }
    if err := oprot.WriteString(string(*p.Success)); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T.success (0) field write error: ", p), err) }
    if err := oprot.WriteFieldEnd(); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field end error 0:success: ", p), err) }
  }
  return err
}

func (p *FinderPreviousPlateResult) String() string {
  if p == nil {
    return "<nil>"
  }

  var successVal string
  if p.Success == nil {
    successVal = "<nil>"
  } else {
    successVal = fmt.Sprintf("%v", *p.Success)
  }
  return fmt.Sprintf("FinderPreviousPlateResult({Success:%s})", successVal)
}


