/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class MyServicePrioParent {

  public interface Iface {

    public void ping() throws TException;

    public void pong() throws TException;

  }

  public interface AsyncIface {

    public void ping(AsyncMethodCallback resultHandler) throws TException;

    public void pong(AsyncMethodCallback resultHandler) throws TException;

  }

  public static class Client extends EventHandlerBase implements Iface, TClientIf {
    public Client(TProtocol prot)
    {
      this(prot, prot);
    }

    public Client(TProtocol iprot, TProtocol oprot)
    {
      iprot_ = iprot;
      oprot_ = oprot;
    }

    protected TProtocol iprot_;
    protected TProtocol oprot_;

    protected int seqid_;

    @Override
    public TProtocol getInputProtocol()
    {
      return this.iprot_;
    }

    @Override
    public TProtocol getOutputProtocol()
    {
      return this.oprot_;
    }

    public void ping() throws TException
    {
      ContextStack ctx = getContextStack("MyServicePrioParent.ping", null);
      this.setContextStack(ctx);
      send_ping();
      recv_ping();
    }

    public void send_ping() throws TException
    {
      ContextStack ctx = this.getContextStack();
      super.preWrite(ctx, "MyServicePrioParent.ping", null);
      oprot_.writeMessageBegin(new TMessage("ping", TMessageType.CALL, seqid_));
      ping_args args = new ping_args();
      args.write(oprot_);
      oprot_.writeMessageEnd();
      oprot_.getTransport().flush();
      super.postWrite(ctx, "MyServicePrioParent.ping", args);
      return;
    }

    public void recv_ping() throws TException
    {
      ContextStack ctx = super.getContextStack();
      long bytes;
      TMessageType mtype;
      super.preRead(ctx, "MyServicePrioParent.ping");
      TMessage msg = iprot_.readMessageBegin();
      if (msg.type == TMessageType.EXCEPTION) {
        TApplicationException x = TApplicationException.read(iprot_);
        iprot_.readMessageEnd();
        throw x;
      }
      ping_result result = ping_result.deserialize(iprot_);
      iprot_.readMessageEnd();
      super.postRead(ctx, "MyServicePrioParent.ping", result);

      return;
    }

    public void pong() throws TException
    {
      ContextStack ctx = getContextStack("MyServicePrioParent.pong", null);
      this.setContextStack(ctx);
      send_pong();
      recv_pong();
    }

    public void send_pong() throws TException
    {
      ContextStack ctx = this.getContextStack();
      super.preWrite(ctx, "MyServicePrioParent.pong", null);
      oprot_.writeMessageBegin(new TMessage("pong", TMessageType.CALL, seqid_));
      pong_args args = new pong_args();
      args.write(oprot_);
      oprot_.writeMessageEnd();
      oprot_.getTransport().flush();
      super.postWrite(ctx, "MyServicePrioParent.pong", args);
      return;
    }

    public void recv_pong() throws TException
    {
      ContextStack ctx = super.getContextStack();
      long bytes;
      TMessageType mtype;
      super.preRead(ctx, "MyServicePrioParent.pong");
      TMessage msg = iprot_.readMessageBegin();
      if (msg.type == TMessageType.EXCEPTION) {
        TApplicationException x = TApplicationException.read(iprot_);
        iprot_.readMessageEnd();
        throw x;
      }
      pong_result result = pong_result.deserialize(iprot_);
      iprot_.readMessageEnd();
      super.postRead(ctx, "MyServicePrioParent.pong", result);

      return;
    }

  }
  public static class AsyncClient extends TAsyncClient implements AsyncIface {
    public static class Factory implements TAsyncClientFactory<AsyncClient> {
      private TAsyncClientManager clientManager;
      private TProtocolFactory protocolFactory;
      public Factory(TAsyncClientManager clientManager, TProtocolFactory protocolFactory) {
        this.clientManager = clientManager;
        this.protocolFactory = protocolFactory;
      }
      public AsyncClient getAsyncClient(TNonblockingTransport transport) {
        return new AsyncClient(protocolFactory, clientManager, transport);
      }
    }

    public AsyncClient(TProtocolFactory protocolFactory, TAsyncClientManager clientManager, TNonblockingTransport transport) {
      super(protocolFactory, clientManager, transport);
    }

    public void ping(AsyncMethodCallback resultHandler47) throws TException {
      checkReady();
      ping_call method_call = new ping_call(resultHandler47, this, ___protocolFactory, ___transport);
      this.___currentMethod = method_call;
      ___manager.call(method_call);
    }

    public static class ping_call extends TAsyncMethodCall {
      public ping_call(AsyncMethodCallback resultHandler48, TAsyncClient client44, TProtocolFactory protocolFactory45, TNonblockingTransport transport46) throws TException {
        super(client44, protocolFactory45, transport46, resultHandler48, false);
      }

      public void write_args(TProtocol prot) throws TException {
        prot.writeMessageBegin(new TMessage("ping", TMessageType.CALL, 0));
        ping_args args = new ping_args();
        args.write(prot);
        prot.writeMessageEnd();
      }

      public void getResult() throws TException {
        if (getState() != State.RESPONSE_READ) {
          throw new IllegalStateException("Method call not finished!");
        }
        TMemoryInputTransport memoryTransport = new TMemoryInputTransport(getFrameBuffer().array());
        TProtocol prot = super.client.getProtocolFactory().getProtocol(memoryTransport);
        (new Client(prot)).recv_ping();
      }
    }

    public void pong(AsyncMethodCallback resultHandler52) throws TException {
      checkReady();
      pong_call method_call = new pong_call(resultHandler52, this, ___protocolFactory, ___transport);
      this.___currentMethod = method_call;
      ___manager.call(method_call);
    }

    public static class pong_call extends TAsyncMethodCall {
      public pong_call(AsyncMethodCallback resultHandler53, TAsyncClient client49, TProtocolFactory protocolFactory50, TNonblockingTransport transport51) throws TException {
        super(client49, protocolFactory50, transport51, resultHandler53, false);
      }

      public void write_args(TProtocol prot) throws TException {
        prot.writeMessageBegin(new TMessage("pong", TMessageType.CALL, 0));
        pong_args args = new pong_args();
        args.write(prot);
        prot.writeMessageEnd();
      }

      public void getResult() throws TException {
        if (getState() != State.RESPONSE_READ) {
          throw new IllegalStateException("Method call not finished!");
        }
        TMemoryInputTransport memoryTransport = new TMemoryInputTransport(getFrameBuffer().array());
        TProtocol prot = super.client.getProtocolFactory().getProtocol(memoryTransport);
        (new Client(prot)).recv_pong();
      }
    }

  }

  public static class Processor implements TProcessor {
    private static final Logger LOGGER = LoggerFactory.getLogger(Processor.class.getName());
    public Processor(Iface iface)
    {
      iface_ = iface;
      event_handler_ = new TProcessorEventHandler(); // Empty handler
      processMap_.put("ping", new ping());
      processMap_.put("pong", new pong());
    }

    protected static interface ProcessFunction {
      public void process(int seqid, TProtocol iprot, TProtocol oprot, TConnectionContext server_ctx) throws TException;
    }

    public void setEventHandler(TProcessorEventHandler handler) {
      this.event_handler_ = handler;
    }

    private Iface iface_;
    protected TProcessorEventHandler event_handler_;
    protected final HashMap<String,ProcessFunction> processMap_ = new HashMap<String,ProcessFunction>();

    public boolean process(TProtocol iprot, TProtocol oprot, TConnectionContext server_ctx) throws TException
    {
      TMessage msg = iprot.readMessageBegin();
      ProcessFunction fn = processMap_.get(msg.name);
      if (fn == null) {
        TProtocolUtil.skip(iprot, TType.STRUCT);
        iprot.readMessageEnd();
        TApplicationException x = new TApplicationException(TApplicationException.UNKNOWN_METHOD, "Invalid method name: '"+msg.name+"'");
        oprot.writeMessageBegin(new TMessage(msg.name, TMessageType.EXCEPTION, msg.seqid));
        x.write(oprot);
        oprot.writeMessageEnd();
        oprot.getTransport().flush();
        return true;
      }
      fn.process(msg.seqid, iprot, oprot, server_ctx);
      return true;
    }

    private class ping implements ProcessFunction {
      public void process(int seqid, TProtocol iprot, TProtocol oprot, TConnectionContext server_ctx) throws TException
      {
        Object handler_ctx = event_handler_.getContext("MyServicePrioParent.ping", server_ctx);
        ping_args args = new ping_args();
        event_handler_.preRead(handler_ctx, "MyServicePrioParent.ping");
        args.read(iprot);
        iprot.readMessageEnd();
        event_handler_.postRead(handler_ctx, "MyServicePrioParent.ping", args);
        ping_result result = new ping_result();
        iface_.ping();
        event_handler_.preWrite(handler_ctx, "MyServicePrioParent.ping", result);
        oprot.writeMessageBegin(new TMessage("ping", TMessageType.REPLY, seqid));
        result.write(oprot);
        oprot.writeMessageEnd();
        oprot.getTransport().flush();
        event_handler_.postWrite(handler_ctx, "MyServicePrioParent.ping", result);
      }

    }

    private class pong implements ProcessFunction {
      public void process(int seqid, TProtocol iprot, TProtocol oprot, TConnectionContext server_ctx) throws TException
      {
        Object handler_ctx = event_handler_.getContext("MyServicePrioParent.pong", server_ctx);
        pong_args args = new pong_args();
        event_handler_.preRead(handler_ctx, "MyServicePrioParent.pong");
        args.read(iprot);
        iprot.readMessageEnd();
        event_handler_.postRead(handler_ctx, "MyServicePrioParent.pong", args);
        pong_result result = new pong_result();
        iface_.pong();
        event_handler_.preWrite(handler_ctx, "MyServicePrioParent.pong", result);
        oprot.writeMessageBegin(new TMessage("pong", TMessageType.REPLY, seqid));
        result.write(oprot);
        oprot.writeMessageEnd();
        oprot.getTransport().flush();
        event_handler_.postWrite(handler_ctx, "MyServicePrioParent.pong", result);
      }

    }

  }

  public static class ping_args implements TBase, java.io.Serializable, Cloneable   {
    private static final TStruct STRUCT_DESC = new TStruct("ping_args");


    public ping_args() {
    }

    /**
     * Performs a deep copy on <i>other</i>.
     */
    public ping_args(ping_args other) {
    }

    public ping_args deepCopy() {
      return new ping_args(this);
    }

    @Override
    public boolean equals(Object _that) {
      if (_that == null)
        return false;
      if (this == _that)
        return true;
      if (!(_that instanceof ping_args))
        return false;
      ping_args that = (ping_args)_that;

      return true;
    }

    @Override
    public int hashCode() {
      return Arrays.deepHashCode(new Object[] {});
    }

    // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
    public void read(TProtocol iprot) throws TException {
      throw new TException("unimplemented in android immutable structure");
    }

    public static ping_args deserialize(TProtocol iprot) throws TException {
      TField __field;
      iprot.readStructBegin();
      while (true)
      {
        __field = iprot.readFieldBegin();
        if (__field.type == TType.STOP) { 
          break;
        }
        switch (__field.id)
        {
          default:
            TProtocolUtil.skip(iprot, __field.type);
            break;
        }
        iprot.readFieldEnd();
      }
      iprot.readStructEnd();

      ping_args _that;
      _that = new ping_args(
      );
      _that.validate();
      return _that;
    }

    public void write(TProtocol oprot) throws TException {
      validate();

      oprot.writeStructBegin(STRUCT_DESC);
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

    @Override
    public String toString() {
      return toString(1, true);
    }

    @Override
    public String toString(int indent, boolean prettyPrint) {
      return TBaseHelper.toStringHelper(this, indent, prettyPrint);
    }

    public void validate() throws TException {
      // check for required fields
    }

  }

  public static class ping_result implements TBase, java.io.Serializable, Cloneable   {
    private static final TStruct STRUCT_DESC = new TStruct("ping_result");


    public ping_result() {
    }

    /**
     * Performs a deep copy on <i>other</i>.
     */
    public ping_result(ping_result other) {
    }

    public ping_result deepCopy() {
      return new ping_result(this);
    }

    @Override
    public boolean equals(Object _that) {
      if (_that == null)
        return false;
      if (this == _that)
        return true;
      if (!(_that instanceof ping_result))
        return false;
      ping_result that = (ping_result)_that;

      return true;
    }

    @Override
    public int hashCode() {
      return Arrays.deepHashCode(new Object[] {});
    }

    // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
    public void read(TProtocol iprot) throws TException {
      throw new TException("unimplemented in android immutable structure");
    }

    public static ping_result deserialize(TProtocol iprot) throws TException {
      TField __field;
      iprot.readStructBegin();
      while (true)
      {
        __field = iprot.readFieldBegin();
        if (__field.type == TType.STOP) { 
          break;
        }
        switch (__field.id)
        {
          default:
            TProtocolUtil.skip(iprot, __field.type);
            break;
        }
        iprot.readFieldEnd();
      }
      iprot.readStructEnd();

      ping_result _that;
      _that = new ping_result(
      );
      _that.validate();
      return _that;
    }

    public void write(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);

      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

    @Override
    public String toString() {
      return toString(1, true);
    }

    @Override
    public String toString(int indent, boolean prettyPrint) {
      return TBaseHelper.toStringHelper(this, indent, prettyPrint);
    }

    public void validate() throws TException {
      // check for required fields
    }

  }

  public static class pong_args implements TBase, java.io.Serializable, Cloneable   {
    private static final TStruct STRUCT_DESC = new TStruct("pong_args");


    public pong_args() {
    }

    /**
     * Performs a deep copy on <i>other</i>.
     */
    public pong_args(pong_args other) {
    }

    public pong_args deepCopy() {
      return new pong_args(this);
    }

    @Override
    public boolean equals(Object _that) {
      if (_that == null)
        return false;
      if (this == _that)
        return true;
      if (!(_that instanceof pong_args))
        return false;
      pong_args that = (pong_args)_that;

      return true;
    }

    @Override
    public int hashCode() {
      return Arrays.deepHashCode(new Object[] {});
    }

    // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
    public void read(TProtocol iprot) throws TException {
      throw new TException("unimplemented in android immutable structure");
    }

    public static pong_args deserialize(TProtocol iprot) throws TException {
      TField __field;
      iprot.readStructBegin();
      while (true)
      {
        __field = iprot.readFieldBegin();
        if (__field.type == TType.STOP) { 
          break;
        }
        switch (__field.id)
        {
          default:
            TProtocolUtil.skip(iprot, __field.type);
            break;
        }
        iprot.readFieldEnd();
      }
      iprot.readStructEnd();

      pong_args _that;
      _that = new pong_args(
      );
      _that.validate();
      return _that;
    }

    public void write(TProtocol oprot) throws TException {
      validate();

      oprot.writeStructBegin(STRUCT_DESC);
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

    @Override
    public String toString() {
      return toString(1, true);
    }

    @Override
    public String toString(int indent, boolean prettyPrint) {
      return TBaseHelper.toStringHelper(this, indent, prettyPrint);
    }

    public void validate() throws TException {
      // check for required fields
    }

  }

  public static class pong_result implements TBase, java.io.Serializable, Cloneable   {
    private static final TStruct STRUCT_DESC = new TStruct("pong_result");


    public pong_result() {
    }

    /**
     * Performs a deep copy on <i>other</i>.
     */
    public pong_result(pong_result other) {
    }

    public pong_result deepCopy() {
      return new pong_result(this);
    }

    @Override
    public boolean equals(Object _that) {
      if (_that == null)
        return false;
      if (this == _that)
        return true;
      if (!(_that instanceof pong_result))
        return false;
      pong_result that = (pong_result)_that;

      return true;
    }

    @Override
    public int hashCode() {
      return Arrays.deepHashCode(new Object[] {});
    }

    // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
    public void read(TProtocol iprot) throws TException {
      throw new TException("unimplemented in android immutable structure");
    }

    public static pong_result deserialize(TProtocol iprot) throws TException {
      TField __field;
      iprot.readStructBegin();
      while (true)
      {
        __field = iprot.readFieldBegin();
        if (__field.type == TType.STOP) { 
          break;
        }
        switch (__field.id)
        {
          default:
            TProtocolUtil.skip(iprot, __field.type);
            break;
        }
        iprot.readFieldEnd();
      }
      iprot.readStructEnd();

      pong_result _that;
      _that = new pong_result(
      );
      _that.validate();
      return _that;
    }

    public void write(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);

      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

    @Override
    public String toString() {
      return toString(1, true);
    }

    @Override
    public String toString(int indent, boolean prettyPrint) {
      return TBaseHelper.toStringHelper(this, indent, prettyPrint);
    }

    public void validate() throws TException {
      // check for required fields
    }

  }

}
