/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basicannotations;

import com.facebook.nifty.client.RequestChannel;
import com.facebook.swift.codec.*;
import com.facebook.swift.service.*;
import com.facebook.swift.service.metadata.*;
import com.facebook.thrift.client.*;
import com.facebook.thrift.util.FutureUtil;
import java.io.*;
import java.lang.reflect.Method;
import java.util.*;
import org.apache.thrift.ProtocolId;
import reactor.core.publisher.Mono;

@SwiftGenerated
public class MyServicePrioChildClientImpl extends test.fixtures.basicannotations.MyServicePrioParentClientImpl implements MyServicePrioChild {

    // Method Handlers
    private ThriftMethodHandler pangMethodHandler;

    // Method Exceptions
    private static final Class[] pangExceptions = new Class[] {
        org.apache.thrift.TException.class};

    public MyServicePrioChildClientImpl(
        RequestChannel channel,
        Map<Method, ThriftMethodHandler> methods,
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        List<? extends ThriftClientEventHandler> eventHandlers) {
      super(channel, methods, headers, persistentHeaders, eventHandlers);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      pangMethodHandler = methodHandlerMap.get("pang");
    }

    public MyServicePrioChildClientImpl(
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        Mono<? extends RpcClient> rpcClient,
        ThriftServiceMetadata serviceMetadata,
        ThriftCodecManager codecManager,
        ProtocolId protocolId,
        Map<Method, ThriftMethodHandler> methods) {
      super(headers, persistentHeaders, rpcClient, serviceMetadata, codecManager, protocolId, methods);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      pangMethodHandler = methodHandlerMap.get("pang");
    }

    @java.lang.Override
    public void close() {
        super.close();
    }


    @java.lang.Override
    public void pang() throws org.apache.thrift.TException {
      pangWrapper(RpcOptions.EMPTY).getData();
    }

    @java.lang.Override
    public void pang(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      pangWrapper(rpcOptions).getData();
    }

    @java.lang.Override
    public ResponseWrapper<Void> pangWrapper(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      try {
        return FutureUtil.get(executeWrapperWithOptions(pangMethodHandler, pangExceptions, rpcOptions));
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }
}
