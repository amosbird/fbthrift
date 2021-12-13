/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basic;

import com.facebook.thrift.client.*;
import java.util.*;

public class MyServiceBlockingReactiveWrapper 
    implements MyService.Reactive {
    private final MyService _delegate;

    public MyServiceBlockingReactiveWrapper(MyService _delegate) {
        
        this._delegate = _delegate;
    }

    @java.lang.Override
    public void dispose() {
        _delegate.close();
    }

    @java.lang.Override
    public reactor.core.publisher.Mono<Void> ping() {
        return reactor.core.publisher.Mono.<Void>fromRunnable(() -> {
                try {
                    _delegate.ping();
                } catch (Throwable _e) {
                    throw reactor.core.Exceptions.propagate(_e);
                }
            }).subscribeOn(com.facebook.thrift.util.resources.RpcResources.getOffLoopScheduler());
    }

    @java.lang.Override
    public reactor.core.publisher.Mono<String> getRandomData() {
        return reactor.core.publisher.Mono.fromSupplier(() -> {
                try {
                    return _delegate.getRandomData();
                } catch (Throwable _e) {
                    throw reactor.core.Exceptions.propagate(_e);
                }
            }).subscribeOn(com.facebook.thrift.util.resources.RpcResources.getOffLoopScheduler());
    }

    @java.lang.Override
    public reactor.core.publisher.Mono<Void> sink(final long sink) {
        return reactor.core.publisher.Mono.<Void>fromRunnable(() -> {
                try {
                    _delegate.sink(sink);
                } catch (Throwable _e) {
                    throw reactor.core.Exceptions.propagate(_e);
                }
            }).subscribeOn(com.facebook.thrift.util.resources.RpcResources.getOffLoopScheduler());
    }

    @java.lang.Override
    public reactor.core.publisher.Mono<Void> putDataById(final long id, final String data) {
        return reactor.core.publisher.Mono.<Void>fromRunnable(() -> {
                try {
                    _delegate.putDataById(id, data);
                } catch (Throwable _e) {
                    throw reactor.core.Exceptions.propagate(_e);
                }
            }).subscribeOn(com.facebook.thrift.util.resources.RpcResources.getOffLoopScheduler());
    }

    @java.lang.Override
    public reactor.core.publisher.Mono<Boolean> hasDataById(final long id) {
        return reactor.core.publisher.Mono.fromSupplier(() -> {
                try {
                    return _delegate.hasDataById(id);
                } catch (Throwable _e) {
                    throw reactor.core.Exceptions.propagate(_e);
                }
            }).subscribeOn(com.facebook.thrift.util.resources.RpcResources.getOffLoopScheduler());
    }

    @java.lang.Override
    public reactor.core.publisher.Mono<String> getDataById(final long id) {
        return reactor.core.publisher.Mono.fromSupplier(() -> {
                try {
                    return _delegate.getDataById(id);
                } catch (Throwable _e) {
                    throw reactor.core.Exceptions.propagate(_e);
                }
            }).subscribeOn(com.facebook.thrift.util.resources.RpcResources.getOffLoopScheduler());
    }

    @java.lang.Override
    public reactor.core.publisher.Mono<Void> deleteDataById(final long id) {
        return reactor.core.publisher.Mono.<Void>fromRunnable(() -> {
                try {
                    _delegate.deleteDataById(id);
                } catch (Throwable _e) {
                    throw reactor.core.Exceptions.propagate(_e);
                }
            }).subscribeOn(com.facebook.thrift.util.resources.RpcResources.getOffLoopScheduler());
    }

    @java.lang.Override
    public reactor.core.publisher.Mono<Void> lobDataById(final long id, final String data) {
        return reactor.core.publisher.Mono.<Void>fromRunnable(() -> {
                try {
                    _delegate.lobDataById(id, data);
                } catch (Throwable _e) {
                    throw reactor.core.Exceptions.propagate(_e);
                }
            }).subscribeOn(com.facebook.thrift.util.resources.RpcResources.getOffLoopScheduler());
    }

}
