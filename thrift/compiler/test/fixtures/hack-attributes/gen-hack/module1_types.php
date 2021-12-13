<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace test\fixtures\jsenum;

/**
 * Original thrift enum:-
 * MyThriftEnum
 */
<<ApiEnum, JSEnum>>
enum MyThriftEnum: int {
  foo = 1;
  bar = 2;
  baz = 3;
}

class MyThriftEnum_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getEnumMetadata()[]: \tmeta_ThriftEnum {
    return \tmeta_ThriftEnum::fromShape(
      shape(
        "name" => "module1.MyThriftEnum",
        "elements" => dict[
          1 => "foo",
          2 => "bar",
          3 => "baz",
        ],
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TEnumAnnotations {
    return shape(
      'enum' => dict[],
      'constants' => dict[
      ],
    );
  }
}

/**
 * Original thrift struct:-
 * MyThriftStruct
 */
<<ClassAttribute>>
class MyThriftStruct implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'foo',
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'bar',
      'type' => \TType::STRING,
    ),
    3 => shape(
      'var' => 'baz',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'foo' => 1,
    'bar' => 2,
    'baz' => 3,
  ];

  const type TConstructorShape = shape(
    ?'foo' => ?string,
    ?'bar' => ?string,
    ?'baz' => ?string,
  );

  const int STRUCTURAL_ID = 6671455975178405100;
  /**
   * Original thrift field:-
   * 1: string foo
   */
  <<FieldAttribute>>
  public string $foo;
  /**
   * Original thrift field:-
   * 2: string bar
   */
  public string $bar;
  /**
   * Original thrift field:-
   * 3: string baz
   */
  public string $baz;

  public function __construct(?string $foo = null, ?string $bar = null, ?string $baz = null  )[] {
    $this->foo = $foo ?? '';
    $this->bar = $bar ?? '';
    $this->baz = $baz ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'foo'),
      Shapes::idx($shape, 'bar'),
      Shapes::idx($shape, 'baz'),
    );
  }

  public function getName()[]: string {
    return 'MyThriftStruct';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module1.MyThriftStruct",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "foo",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "bar",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "baz",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

}

/**
 * Original thrift struct:-
 * MySecondThriftStruct
 */
class MySecondThriftStruct implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'foo',
      'type' => \TType::I32,
      'enum' => \test\fixtures\jsenum\MyThriftEnum::class,
    ),
    2 => shape(
      'var' => 'bar',
      'type' => \TType::STRUCT,
      'class' => \test\fixtures\jsenum\MyThriftStruct::class,
    ),
    3 => shape(
      'var' => 'baz',
      'type' => \TType::I64,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'foo' => 1,
    'bar' => 2,
    'baz' => 3,
  ];

  const type TConstructorShape = shape(
    ?'foo' => ?\test\fixtures\jsenum\MyThriftEnum,
    ?'bar' => ?\test\fixtures\jsenum\MyThriftStruct,
    ?'baz' => ?int,
  );

  const int STRUCTURAL_ID = 2800971917864580212;
  /**
   * Original thrift field:-
   * 1: enum module1.MyThriftEnum foo
   */
  public ?\test\fixtures\jsenum\MyThriftEnum $foo;
  /**
   * Original thrift field:-
   * 2: struct module1.MyThriftStruct bar
   */
  public ?\test\fixtures\jsenum\MyThriftStruct $bar;
  /**
   * Original thrift field:-
   * 3: i64 baz
   */
  public int $baz;

  public function __construct(?\test\fixtures\jsenum\MyThriftEnum $foo = null, ?\test\fixtures\jsenum\MyThriftStruct $bar = null, ?int $baz = null  )[] {
    $this->foo = $foo;
    $this->bar = $bar;
    $this->baz = $baz ?? 0;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'foo'),
      Shapes::idx($shape, 'bar'),
      Shapes::idx($shape, 'baz'),
    );
  }

  public function getName()[]: string {
    return 'MySecondThriftStruct';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module1.MySecondThriftStruct",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_enum" => \tmeta_ThriftEnumType::fromShape(
                    shape(
                      "name" => "module1.MyThriftEnum",
                    )
                  ),
                )
              ),
              "name" => "foo",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => \tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module1.MyThriftStruct",
                    )
                  ),
                )
              ),
              "name" => "bar",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
                )
              ),
              "name" => "baz",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

}

<<EnumAttributes>>
enum UnionTestingEnum: int {
  _EMPTY_ = 0;
  foo = 1;
  bar = 3;
}

/**
 * Original thrift struct:-
 * UnionTesting
 */
class UnionTesting implements \IThriftStruct, \IThriftUnion<\test\fixtures\jsenum\UnionTestingEnum> {
  use \ThriftUnionSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'foo',
      'union' => true,
      'type' => \TType::STRING,
    ),
    3 => shape(
      'var' => 'bar',
      'union' => true,
      'type' => \TType::I64,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'foo' => 1,
    'bar' => 3,
  ];

  const type TConstructorShape = shape(
    ?'foo' => ?string,
    ?'bar' => ?int,
  );

  const int STRUCTURAL_ID = 4708174399727259919;
  /**
   * Original thrift field:-
   * 1: string foo
   */
  public ?string $foo;
  /**
   * Original thrift field:-
   * 3: i64 bar
   */
  public ?int $bar;
  protected \test\fixtures\jsenum\UnionTestingEnum $_type = \test\fixtures\jsenum\UnionTestingEnum::_EMPTY_;

  public function __construct(?string $foo = null, ?int $bar = null  )[] {
    $this->_type = \test\fixtures\jsenum\UnionTestingEnum::_EMPTY_;
    if ($foo !== null) {
      $this->foo = $foo;
      $this->_type = \test\fixtures\jsenum\UnionTestingEnum::foo;
    }
    if ($bar !== null) {
      $this->bar = $bar;
      $this->_type = \test\fixtures\jsenum\UnionTestingEnum::bar;
    }
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'foo'),
      Shapes::idx($shape, 'bar'),
    );
  }

  public function getName()[]: string {
    return 'UnionTesting';
  }

  public function getType()[]: \test\fixtures\jsenum\UnionTestingEnum {
    return $this->_type;
  }

  public function reset()[write_props]: void {
    switch ($this->_type) {
      case \test\fixtures\jsenum\UnionTestingEnum::foo:
        $this->foo = null;
        break;
      case \test\fixtures\jsenum\UnionTestingEnum::bar:
        $this->bar = null;
        break;
      case \test\fixtures\jsenum\UnionTestingEnum::_EMPTY_:
        break;
    }
    $this->_type = \test\fixtures\jsenum\UnionTestingEnum::_EMPTY_;
  }

  public function set_foo(string $foo)[write_props]: this {
    $this->reset();
    $this->_type = \test\fixtures\jsenum\UnionTestingEnum::foo;
    $this->foo = $foo;
    return $this;
  }

  public function get_foo()[]: string {
    return $this->getx_foo();
  }

  public function getx_foo()[]: string {
    invariant(
      $this->_type === \test\fixtures\jsenum\UnionTestingEnum::foo,
      'get_foo called on an instance of UnionTesting whose current type is %s',
      (string)$this->_type,
    );
    return $this->foo as nonnull;
  }

  public function set_bar(int $bar)[write_props]: this {
    $this->reset();
    $this->_type = \test\fixtures\jsenum\UnionTestingEnum::bar;
    $this->bar = $bar;
    return $this;
  }

  public function get_bar()[]: int {
    return $this->getx_bar();
  }

  public function getx_bar()[]: int {
    invariant(
      $this->_type === \test\fixtures\jsenum\UnionTestingEnum::bar,
      'get_bar called on an instance of UnionTesting whose current type is %s',
      (string)$this->_type,
    );
    return $this->bar as nonnull;
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module1.UnionTesting",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "foo",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
                )
              ),
              "name" => "bar",
            )
          ),
        ],
        "is_union" => true,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

}

