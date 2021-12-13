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
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class struct2 implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("struct2");
  private static final TField A_FIELD_DESC = new TField("a", TType.I32, (short)1);
  private static final TField B_FIELD_DESC = new TField("b", TType.STRING, (short)2);
  private static final TField C_FIELD_DESC = new TField("c", TType.STRUCT, (short)3);
  private static final TField D_FIELD_DESC = new TField("d", TType.LIST, (short)4);

  public final Integer a;
  public final String b;
  public final struct1 c;
  public final List<Integer> d;
  public static final int A = 1;
  public static final int B = 2;
  public static final int C = 3;
  public static final int D = 4;

  public struct2(
      Integer a,
      String b,
      struct1 c,
      List<Integer> d) {
    this.a = a;
    this.b = b;
    this.c = c;
    this.d = d;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public struct2(struct2 other) {
    if (other.isSetA()) {
      this.a = TBaseHelper.deepCopy(other.a);
    } else {
      this.a = null;
    }
    if (other.isSetB()) {
      this.b = TBaseHelper.deepCopy(other.b);
    } else {
      this.b = null;
    }
    if (other.isSetC()) {
      this.c = TBaseHelper.deepCopy(other.c);
    } else {
      this.c = null;
    }
    if (other.isSetD()) {
      this.d = TBaseHelper.deepCopy(other.d);
    } else {
      this.d = null;
    }
  }

  public struct2 deepCopy() {
    return new struct2(this);
  }

  public Integer getA() {
    return this.a;
  }

  // Returns true if field a is set (has been assigned a value) and false otherwise
  public boolean isSetA() {
    return this.a != null;
  }

  public String getB() {
    return this.b;
  }

  // Returns true if field b is set (has been assigned a value) and false otherwise
  public boolean isSetB() {
    return this.b != null;
  }

  public struct1 getC() {
    return this.c;
  }

  // Returns true if field c is set (has been assigned a value) and false otherwise
  public boolean isSetC() {
    return this.c != null;
  }

  public List<Integer> getD() {
    return this.d;
  }

  // Returns true if field d is set (has been assigned a value) and false otherwise
  public boolean isSetD() {
    return this.d != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof struct2))
      return false;
    struct2 that = (struct2)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetA(), that.isSetA(), this.a, that.a)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetB(), that.isSetB(), this.b, that.b)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetC(), that.isSetC(), this.c, that.c)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetD(), that.isSetD(), this.d, that.d)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {a, b, c, d});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static struct2 deserialize(TProtocol iprot) throws TException {
    Integer tmp_a = null;
    String tmp_b = null;
    struct1 tmp_c = null;
    List<Integer> tmp_d = null;
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
        case A:
          if (__field.type == TType.I32) {
            tmp_a = iprot.readI32();
          } else { 
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case B:
          if (__field.type == TType.STRING) {
            tmp_b = iprot.readString();
          } else { 
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case C:
          if (__field.type == TType.STRUCT) {
            tmp_c = struct1.deserialize(iprot);
          } else { 
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case D:
          if (__field.type == TType.LIST) {
            {
              TList _list22 = iprot.readListBegin();
              tmp_d = new ArrayList<Integer>(Math.max(0, _list22.size));
              for (int _i23 = 0; 
                   (_list22.size < 0) ? iprot.peekList() : (_i23 < _list22.size); 
                   ++_i23)
              {
                Integer _elem24;
                _elem24 = iprot.readI32();
                tmp_d.add(_elem24);
              }
              iprot.readListEnd();
            }
          } else { 
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();

    struct2 _that;
    _that = new struct2(
      tmp_a
      ,tmp_b
      ,tmp_c
      ,tmp_d
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.a != null) {
      oprot.writeFieldBegin(A_FIELD_DESC);
      oprot.writeI32(this.a);
      oprot.writeFieldEnd();
    }
    if (this.b != null) {
      oprot.writeFieldBegin(B_FIELD_DESC);
      oprot.writeString(this.b);
      oprot.writeFieldEnd();
    }
    if (this.c != null) {
      oprot.writeFieldBegin(C_FIELD_DESC);
      this.c.write(oprot);
      oprot.writeFieldEnd();
    }
    if (this.d != null) {
      oprot.writeFieldBegin(D_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.I32, this.d.size()));
        for (Integer _iter25 : this.d)        {
          oprot.writeI32(_iter25);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
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

