/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basicannotations;

import com.facebook.thrift.client.*;
import java.util.*;

public class MyServicePrioChildBlockingReactiveWrapper  extends test.fixtures.basicannotations.MyServicePrioParentBlockingReactiveWrapper
    implements MyServicePrioChild.Reactive {
    private final MyServicePrioChild _delegate;

    public MyServicePrioChildBlockingReactiveWrapper(MyServicePrioChild _delegate) {
        super(_delegate);
        this._delegate = _delegate;
    }

    @java.lang.Override
    public void dispose() {
        _delegate.close();
    }

    @java.lang.Override
    public reactor.core.publisher.Mono<Void> pang() {
        return reactor.core.publisher.Mono.<Void>fromRunnable(() -> {
                try {
                    _delegate.pang();
                } catch (Throwable _e) {
                    throw reactor.core.Exceptions.propagate(_e);
                }
            }).subscribeOn(com.facebook.thrift.util.resources.RpcResources.getOffLoopScheduler());
    }

}
