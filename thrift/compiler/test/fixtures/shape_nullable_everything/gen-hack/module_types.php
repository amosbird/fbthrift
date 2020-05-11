<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift struct:-
 * A
 */
class A implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'a',
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'map_of_string_to_string',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::STRING,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'collection',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'a' => 1,
    'map_of_string_to_string' => 2,
  ];

  const type TConstructorShape = shape(
    ?'a' => ?string,
    ?'map_of_string_to_string' => ?Map<string, string>,
  );

  const type TShape = shape(
    ?'a' => ?string,
    ?'map_of_string_to_string' => ?dict<string, string>,
    ...
  );
  const int STRUCTURAL_ID = 3181416921594932928;
  /**
   * Original thrift field:-
   * 1: string a
   */
  public ?string $a;
  /**
   * Original thrift field:-
   * 2: map<string, string> map_of_string_to_string
   */
  public ?Map<string, string> $map_of_string_to_string;

  <<__Rx>>
  public function __construct(?string $a = null, ?Map<string, string> $map_of_string_to_string = null  ) {
    $this->a = $a;
    $this->map_of_string_to_string = $map_of_string_to_string;
  }

  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'a'),
      Shapes::idx($shape, 'map_of_string_to_string'),
    );
  }

  public function getName(): string {
    return 'A';
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }
  public static function __fromShape(self::TShape $shape): this {
    $me = new static();
    if (Shapes::idx($shape, 'a') !== null) {
      $me->a = $shape['a'];
    }
    if (Shapes::idx($shape, 'map_of_string_to_string') !== null) {
      $me->map_of_string_to_string = (new Map($shape['map_of_string_to_string']));
    }
    return $me;
  }

  <<__Rx>>
  public function __toShape(): self::TShape {
    return shape(
      'a' => $this->a,
      'map_of_string_to_string' => $this->map_of_string_to_string
        |> $$ === null ? null : dict($$),
    );
  }
}

/**
 * Original thrift struct:-
 * B
 */
class B implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'map_of_string_to_string',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::STRING,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'collection',
    ),
    2 => shape(
      'var' => 'map_of_string_to_i32',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::I32,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::I32,
      ),
      'format' => 'collection',
    ),
    3 => shape(
      'var' => 'map_of_string_to_A',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::STRUCT,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::STRUCT,
        'class' => A::class,
      ),
      'format' => 'collection',
    ),
    4 => shape(
      'var' => 'map_of_string_to_self',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::STRUCT,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::STRUCT,
        'class' => B::class,
      ),
      'format' => 'collection',
    ),
    5 => shape(
      'var' => 'map_of_string_to_list_of_A',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::LST,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::LST,
        'etype' => \TType::STRUCT,
        'elem' => shape(
          'type' => \TType::STRUCT,
          'class' => A::class,
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
    6 => shape(
      'var' => 'map_of_string_to_map_of_string_to_i32',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::MAP,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::STRING,
        'vtype' => \TType::I32,
        'key' => shape(
          'type' => \TType::STRING,
        ),
        'val' => shape(
          'type' => \TType::I32,
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
    7 => shape(
      'var' => 'map_of_string_to_map_of_string_to_A',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::MAP,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::STRING,
        'vtype' => \TType::STRUCT,
        'key' => shape(
          'type' => \TType::STRING,
        ),
        'val' => shape(
          'type' => \TType::STRUCT,
          'class' => A::class,
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
    8 => shape(
      'var' => 'list_of_string',
      'type' => \TType::LST,
      'etype' => \TType::STRING,
      'elem' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'collection',
    ),
    9 => shape(
      'var' => 'list_of_map_of_string_to_A',
      'type' => \TType::LST,
      'etype' => \TType::MAP,
      'elem' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::STRING,
        'vtype' => \TType::STRUCT,
        'key' => shape(
          'type' => \TType::STRING,
        ),
        'val' => shape(
          'type' => \TType::STRUCT,
          'class' => A::class,
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
    10 => shape(
      'var' => 'list_of_self',
      'type' => \TType::LST,
      'etype' => \TType::STRUCT,
      'elem' => shape(
        'type' => \TType::STRUCT,
        'class' => B::class,
      ),
      'format' => 'collection',
    ),
    11 => shape(
      'var' => 'list_of_list_of_self',
      'type' => \TType::LST,
      'etype' => \TType::LST,
      'elem' => shape(
        'type' => \TType::LST,
        'etype' => \TType::STRUCT,
        'elem' => shape(
          'type' => \TType::STRUCT,
          'class' => B::class,
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
    12 => shape(
      'var' => 'list_of_map_of_string_to_list_of_A',
      'type' => \TType::LST,
      'etype' => \TType::MAP,
      'elem' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::STRING,
        'vtype' => \TType::LST,
        'key' => shape(
          'type' => \TType::STRING,
        ),
        'val' => shape(
          'type' => \TType::LST,
          'etype' => \TType::STRUCT,
          'elem' => shape(
            'type' => \TType::STRUCT,
            'class' => A::class,
          ),
          'format' => 'collection',
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'map_of_string_to_string' => 1,
    'map_of_string_to_i32' => 2,
    'map_of_string_to_A' => 3,
    'map_of_string_to_self' => 4,
    'map_of_string_to_list_of_A' => 5,
    'map_of_string_to_map_of_string_to_i32' => 6,
    'map_of_string_to_map_of_string_to_A' => 7,
    'list_of_string' => 8,
    'list_of_map_of_string_to_A' => 9,
    'list_of_self' => 10,
    'list_of_list_of_self' => 11,
    'list_of_map_of_string_to_list_of_A' => 12,
  ];

  const type TConstructorShape = shape(
    ?'map_of_string_to_string' => ?Map<string, string>,
    ?'map_of_string_to_i32' => ?Map<string, int>,
    ?'map_of_string_to_A' => ?Map<string, A>,
    ?'map_of_string_to_self' => ?Map<string, B>,
    ?'map_of_string_to_list_of_A' => ?Map<string, Vector<A>>,
    ?'map_of_string_to_map_of_string_to_i32' => ?Map<string, Map<string, int>>,
    ?'map_of_string_to_map_of_string_to_A' => ?Map<string, Map<string, A>>,
    ?'list_of_string' => ?Vector<string>,
    ?'list_of_map_of_string_to_A' => ?Vector<Map<string, A>>,
    ?'list_of_self' => ?Vector<B>,
    ?'list_of_list_of_self' => ?Vector<Vector<B>>,
    ?'list_of_map_of_string_to_list_of_A' => ?Vector<Map<string, Vector<A>>>,
  );

  const type TShape = shape(
    ?'map_of_string_to_string' => ?dict<string, string>,
    ?'map_of_string_to_i32' => ?dict<string, int>,
    ?'map_of_string_to_A' => ?dict<string, A::TShape>,
    ?'map_of_string_to_self' => ?dict<string, B::TShape>,
    ?'map_of_string_to_list_of_A' => ?dict<string, vec<A::TShape>>,
    ?'map_of_string_to_map_of_string_to_i32' => ?dict<string, dict<string, int>>,
    ?'map_of_string_to_map_of_string_to_A' => ?dict<string, dict<string, A::TShape>>,
    ?'list_of_string' => ?vec<string>,
    ?'list_of_map_of_string_to_A' => ?vec<dict<string, A::TShape>>,
    ?'list_of_self' => ?vec<B::TShape>,
    ?'list_of_list_of_self' => ?vec<vec<B::TShape>>,
    ?'list_of_map_of_string_to_list_of_A' => ?vec<dict<string, vec<A::TShape>>>,
    ...
  );
  const int STRUCTURAL_ID = 2946796456701255343;
  /**
   * Original thrift field:-
   * 1: map<string, string> map_of_string_to_string
   */
  public ?Map<string, string> $map_of_string_to_string;
  /**
   * Original thrift field:-
   * 2: map<string, i32> map_of_string_to_i32
   */
  public ?Map<string, int> $map_of_string_to_i32;
  /**
   * Original thrift field:-
   * 3: map<string, struct module.A> map_of_string_to_A
   */
  public ?Map<string, A> $map_of_string_to_A;
  /**
   * Original thrift field:-
   * 4: map<string, struct module.B> map_of_string_to_self
   */
  public ?Map<string, B> $map_of_string_to_self;
  /**
   * Original thrift field:-
   * 5: map<string, list<struct module.A>> map_of_string_to_list_of_A
   */
  public ?Map<string, Vector<A>> $map_of_string_to_list_of_A;
  /**
   * Original thrift field:-
   * 6: map<string, map<string, i32>> map_of_string_to_map_of_string_to_i32
   */
  public ?Map<string, Map<string, int>> $map_of_string_to_map_of_string_to_i32;
  /**
   * Original thrift field:-
   * 7: map<string, map<string, struct module.A>> map_of_string_to_map_of_string_to_A
   */
  public ?Map<string, Map<string, A>> $map_of_string_to_map_of_string_to_A;
  /**
   * Original thrift field:-
   * 8: list<string> list_of_string
   */
  public ?Vector<string> $list_of_string;
  /**
   * Original thrift field:-
   * 9: list<map<string, struct module.A>> list_of_map_of_string_to_A
   */
  public ?Vector<Map<string, A>> $list_of_map_of_string_to_A;
  /**
   * Original thrift field:-
   * 10: list<struct module.B> list_of_self
   */
  public ?Vector<B> $list_of_self;
  /**
   * Original thrift field:-
   * 11: list<list<struct module.B>> list_of_list_of_self
   */
  public ?Vector<Vector<B>> $list_of_list_of_self;
  /**
   * Original thrift field:-
   * 12: list<map<string, list<struct module.A>>> list_of_map_of_string_to_list_of_A
   */
  public ?Vector<Map<string, Vector<A>>> $list_of_map_of_string_to_list_of_A;

  <<__Rx>>
  public function __construct(?Map<string, string> $map_of_string_to_string = null, ?Map<string, int> $map_of_string_to_i32 = null, ?Map<string, A> $map_of_string_to_A = null, ?Map<string, B> $map_of_string_to_self = null, ?Map<string, Vector<A>> $map_of_string_to_list_of_A = null, ?Map<string, Map<string, int>> $map_of_string_to_map_of_string_to_i32 = null, ?Map<string, Map<string, A>> $map_of_string_to_map_of_string_to_A = null, ?Vector<string> $list_of_string = null, ?Vector<Map<string, A>> $list_of_map_of_string_to_A = null, ?Vector<B> $list_of_self = null, ?Vector<Vector<B>> $list_of_list_of_self = null, ?Vector<Map<string, Vector<A>>> $list_of_map_of_string_to_list_of_A = null  ) {
    $this->map_of_string_to_string = $map_of_string_to_string;
    $this->map_of_string_to_i32 = $map_of_string_to_i32;
    $this->map_of_string_to_A = $map_of_string_to_A;
    $this->map_of_string_to_self = $map_of_string_to_self;
    $this->map_of_string_to_list_of_A = $map_of_string_to_list_of_A;
    $this->map_of_string_to_map_of_string_to_i32 = $map_of_string_to_map_of_string_to_i32;
    $this->map_of_string_to_map_of_string_to_A = $map_of_string_to_map_of_string_to_A;
    $this->list_of_string = $list_of_string;
    $this->list_of_map_of_string_to_A = $list_of_map_of_string_to_A;
    $this->list_of_self = $list_of_self;
    $this->list_of_list_of_self = $list_of_list_of_self;
    $this->list_of_map_of_string_to_list_of_A = $list_of_map_of_string_to_list_of_A;
  }

  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'map_of_string_to_string'),
      Shapes::idx($shape, 'map_of_string_to_i32'),
      Shapes::idx($shape, 'map_of_string_to_A'),
      Shapes::idx($shape, 'map_of_string_to_self'),
      Shapes::idx($shape, 'map_of_string_to_list_of_A'),
      Shapes::idx($shape, 'map_of_string_to_map_of_string_to_i32'),
      Shapes::idx($shape, 'map_of_string_to_map_of_string_to_A'),
      Shapes::idx($shape, 'list_of_string'),
      Shapes::idx($shape, 'list_of_map_of_string_to_A'),
      Shapes::idx($shape, 'list_of_self'),
      Shapes::idx($shape, 'list_of_list_of_self'),
      Shapes::idx($shape, 'list_of_map_of_string_to_list_of_A'),
    );
  }

  public function getName(): string {
    return 'B';
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }
  public static function __fromShape(self::TShape $shape): this {
    $me = new static();
    if (Shapes::idx($shape, 'map_of_string_to_string') !== null) {
      $me->map_of_string_to_string = (new Map($shape['map_of_string_to_string']));
    }
    if (Shapes::idx($shape, 'map_of_string_to_i32') !== null) {
      $me->map_of_string_to_i32 = (new Map($shape['map_of_string_to_i32']));
    }
    if (Shapes::idx($shape, 'map_of_string_to_A') !== null) {
      $me->map_of_string_to_A = (new Map($shape['map_of_string_to_A']))->map(
        $val0 ==> A::__fromShape($val0),
      );
    }
    if (Shapes::idx($shape, 'map_of_string_to_self') !== null) {
      $me->map_of_string_to_self = (new Map($shape['map_of_string_to_self']))->map(
        $val1 ==> B::__fromShape($val1),
      );
    }
    if (Shapes::idx($shape, 'map_of_string_to_list_of_A') !== null) {
      $me->map_of_string_to_list_of_A = (new Map($shape['map_of_string_to_list_of_A']))->map(
        $val2 ==> (new Vector($val2))->map(
          $val3 ==> A::__fromShape($val3),
        ),
      );
    }
    if (Shapes::idx($shape, 'map_of_string_to_map_of_string_to_i32') !== null) {
      $me->map_of_string_to_map_of_string_to_i32 = (new Map($shape['map_of_string_to_map_of_string_to_i32']))->map(
        $val4 ==> (new Map($val4)),
      );
    }
    if (Shapes::idx($shape, 'map_of_string_to_map_of_string_to_A') !== null) {
      $me->map_of_string_to_map_of_string_to_A = (new Map($shape['map_of_string_to_map_of_string_to_A']))->map(
        $val5 ==> (new Map($val5))->map(
          $val6 ==> A::__fromShape($val6),
        ),
      );
    }
    if (Shapes::idx($shape, 'list_of_string') !== null) {
      $me->list_of_string = (new Vector($shape['list_of_string']));
    }
    if (Shapes::idx($shape, 'list_of_map_of_string_to_A') !== null) {
      $me->list_of_map_of_string_to_A = (new Vector($shape['list_of_map_of_string_to_A']))->map(
        $val7 ==> (new Map($val7))->map(
          $val8 ==> A::__fromShape($val8),
        ),
      );
    }
    if (Shapes::idx($shape, 'list_of_self') !== null) {
      $me->list_of_self = (new Vector($shape['list_of_self']))->map(
        $val9 ==> B::__fromShape($val9),
      );
    }
    if (Shapes::idx($shape, 'list_of_list_of_self') !== null) {
      $me->list_of_list_of_self = (new Vector($shape['list_of_list_of_self']))->map(
        $val10 ==> (new Vector($val10))->map(
          $val11 ==> B::__fromShape($val11),
        ),
      );
    }
    if (Shapes::idx($shape, 'list_of_map_of_string_to_list_of_A') !== null) {
      $me->list_of_map_of_string_to_list_of_A = (new Vector($shape['list_of_map_of_string_to_list_of_A']))->map(
        $val12 ==> (new Map($val12))->map(
          $val13 ==> (new Vector($val13))->map(
            $val14 ==> A::__fromShape($val14),
          ),
        ),
      );
    }
    return $me;
  }

  <<__Rx>>
  public function __toShape(): self::TShape {
    return shape(
      'map_of_string_to_string' => $this->map_of_string_to_string
        |> $$ === null ? null : dict($$),
      'map_of_string_to_i32' => $this->map_of_string_to_i32
        |> $$ === null ? null : dict($$),
      'map_of_string_to_A' => $this->map_of_string_to_A?->map(
        $_val0 ==> $_val0->__toShape(),
      )
        |> $$ === null ? null : dict($$),
      'map_of_string_to_self' => $this->map_of_string_to_self?->map(
        $_val0 ==> $_val0->__toShape(),
      )
        |> $$ === null ? null : dict($$),
      'map_of_string_to_list_of_A' => $this->map_of_string_to_list_of_A?->map(
        $_val0 ==> $_val0->map(
          $_val1 ==> $_val1->__toShape(),
        )
          |> vec($$),
      )
        |> $$ === null ? null : dict($$),
      'map_of_string_to_map_of_string_to_i32' => $this->map_of_string_to_map_of_string_to_i32?->map(
        $_val0 ==> dict($_val0),
      )
        |> $$ === null ? null : dict($$),
      'map_of_string_to_map_of_string_to_A' => $this->map_of_string_to_map_of_string_to_A?->map(
        $_val0 ==> $_val0->map(
          $_val1 ==> $_val1->__toShape(),
        )
          |> dict($$),
      )
        |> $$ === null ? null : dict($$),
      'list_of_string' => $this->list_of_string
        |> $$ === null ? null : vec($$),
      'list_of_map_of_string_to_A' => $this->list_of_map_of_string_to_A?->map(
        $_val0 ==> $_val0->map(
          $_val1 ==> $_val1->__toShape(),
        )
          |> dict($$),
      )
        |> $$ === null ? null : vec($$),
      'list_of_self' => $this->list_of_self?->map(
        $_val0 ==> $_val0->__toShape(),
      )
        |> $$ === null ? null : vec($$),
      'list_of_list_of_self' => $this->list_of_list_of_self?->map(
        $_val0 ==> $_val0->map(
          $_val1 ==> $_val1->__toShape(),
        )
          |> vec($$),
      )
        |> $$ === null ? null : vec($$),
      'list_of_map_of_string_to_list_of_A' => $this->list_of_map_of_string_to_list_of_A?->map(
        $_val0 ==> $_val0->map(
          $_val1 ==> $_val1->map(
            $_val2 ==> $_val2->__toShape(),
          )
            |> vec($$),
        )
          |> dict($$),
      )
        |> $$ === null ? null : vec($$),
    );
  }
}

/**
 * Original thrift struct:-
 * C
 */
class C implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'map_of_string_to_string',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::STRING,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'collection',
    ),
    2 => shape(
      'var' => 'map_of_string_to_i32',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::I32,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::I32,
      ),
      'format' => 'collection',
    ),
    3 => shape(
      'var' => 'map_of_string_to_A',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::STRUCT,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::STRUCT,
        'class' => A::class,
      ),
      'format' => 'collection',
    ),
    4 => shape(
      'var' => 'map_of_string_to_self',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::STRUCT,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::STRUCT,
        'class' => B::class,
      ),
      'format' => 'collection',
    ),
    5 => shape(
      'var' => 'map_of_string_to_list_of_A',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::LST,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::LST,
        'etype' => \TType::STRUCT,
        'elem' => shape(
          'type' => \TType::STRUCT,
          'class' => A::class,
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
    6 => shape(
      'var' => 'map_of_string_to_map_of_string_to_i32',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::MAP,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::STRING,
        'vtype' => \TType::I32,
        'key' => shape(
          'type' => \TType::STRING,
        ),
        'val' => shape(
          'type' => \TType::I32,
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
    7 => shape(
      'var' => 'map_of_string_to_map_of_string_to_A',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::MAP,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::STRING,
        'vtype' => \TType::STRUCT,
        'key' => shape(
          'type' => \TType::STRING,
        ),
        'val' => shape(
          'type' => \TType::STRUCT,
          'class' => A::class,
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
    8 => shape(
      'var' => 'list_of_string',
      'type' => \TType::LST,
      'etype' => \TType::STRING,
      'elem' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'collection',
    ),
    9 => shape(
      'var' => 'list_of_map_of_string_to_A',
      'type' => \TType::LST,
      'etype' => \TType::MAP,
      'elem' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::STRING,
        'vtype' => \TType::STRUCT,
        'key' => shape(
          'type' => \TType::STRING,
        ),
        'val' => shape(
          'type' => \TType::STRUCT,
          'class' => A::class,
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
    10 => shape(
      'var' => 'list_of_self',
      'type' => \TType::LST,
      'etype' => \TType::STRUCT,
      'elem' => shape(
        'type' => \TType::STRUCT,
        'class' => B::class,
      ),
      'format' => 'collection',
    ),
    11 => shape(
      'var' => 'list_of_list_of_self',
      'type' => \TType::LST,
      'etype' => \TType::LST,
      'elem' => shape(
        'type' => \TType::LST,
        'etype' => \TType::STRUCT,
        'elem' => shape(
          'type' => \TType::STRUCT,
          'class' => B::class,
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
    12 => shape(
      'var' => 'list_of_map_of_string_to_list_of_A',
      'type' => \TType::LST,
      'etype' => \TType::MAP,
      'elem' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::STRING,
        'vtype' => \TType::LST,
        'key' => shape(
          'type' => \TType::STRING,
        ),
        'val' => shape(
          'type' => \TType::LST,
          'etype' => \TType::STRUCT,
          'elem' => shape(
            'type' => \TType::STRUCT,
            'class' => A::class,
          ),
          'format' => 'collection',
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'map_of_string_to_string' => 1,
    'map_of_string_to_i32' => 2,
    'map_of_string_to_A' => 3,
    'map_of_string_to_self' => 4,
    'map_of_string_to_list_of_A' => 5,
    'map_of_string_to_map_of_string_to_i32' => 6,
    'map_of_string_to_map_of_string_to_A' => 7,
    'list_of_string' => 8,
    'list_of_map_of_string_to_A' => 9,
    'list_of_self' => 10,
    'list_of_list_of_self' => 11,
    'list_of_map_of_string_to_list_of_A' => 12,
  ];

  const type TConstructorShape = shape(
    ?'map_of_string_to_string' => ?Map<string, string>,
    ?'map_of_string_to_i32' => ?Map<string, int>,
    ?'map_of_string_to_A' => ?Map<string, A>,
    ?'map_of_string_to_self' => ?Map<string, B>,
    ?'map_of_string_to_list_of_A' => ?Map<string, Vector<A>>,
    ?'map_of_string_to_map_of_string_to_i32' => ?Map<string, Map<string, int>>,
    ?'map_of_string_to_map_of_string_to_A' => ?Map<string, Map<string, A>>,
    ?'list_of_string' => ?Vector<string>,
    ?'list_of_map_of_string_to_A' => ?Vector<Map<string, A>>,
    ?'list_of_self' => ?Vector<B>,
    ?'list_of_list_of_self' => ?Vector<Vector<B>>,
    ?'list_of_map_of_string_to_list_of_A' => ?Vector<Map<string, Vector<A>>>,
  );

  const type TShape = shape(
    ?'map_of_string_to_string' => ?dict<string, string>,
    ?'map_of_string_to_i32' => ?dict<string, int>,
    ?'map_of_string_to_A' => ?dict<string, A::TShape>,
    ?'map_of_string_to_self' => ?dict<string, B::TShape>,
    ?'map_of_string_to_list_of_A' => ?dict<string, vec<A::TShape>>,
    ?'map_of_string_to_map_of_string_to_i32' => ?dict<string, dict<string, int>>,
    ?'map_of_string_to_map_of_string_to_A' => ?dict<string, dict<string, A::TShape>>,
    ?'list_of_string' => ?vec<string>,
    ?'list_of_map_of_string_to_A' => ?vec<dict<string, A::TShape>>,
    ?'list_of_self' => ?vec<B::TShape>,
    ?'list_of_list_of_self' => ?vec<vec<B::TShape>>,
    ?'list_of_map_of_string_to_list_of_A' => ?vec<dict<string, vec<A::TShape>>>,
    ...
  );
  const int STRUCTURAL_ID = 8031476337653899449;
  /**
   * Original thrift field:-
   * 1: map<string, string> map_of_string_to_string
   */
  public ?Map<string, string> $map_of_string_to_string;
  /**
   * Original thrift field:-
   * 2: map<string, i32> map_of_string_to_i32
   */
  public ?Map<string, int> $map_of_string_to_i32;
  /**
   * Original thrift field:-
   * 3: map<string, struct module.A> map_of_string_to_A
   */
  public ?Map<string, A> $map_of_string_to_A;
  /**
   * Original thrift field:-
   * 4: map<string, struct module.B> map_of_string_to_self
   */
  public ?Map<string, B> $map_of_string_to_self;
  /**
   * Original thrift field:-
   * 5: map<string, list<struct module.A>> map_of_string_to_list_of_A
   */
  public ?Map<string, Vector<A>> $map_of_string_to_list_of_A;
  /**
   * Original thrift field:-
   * 6: map<string, map<string, i32>> map_of_string_to_map_of_string_to_i32
   */
  public ?Map<string, Map<string, int>> $map_of_string_to_map_of_string_to_i32;
  /**
   * Original thrift field:-
   * 7: map<string, map<string, struct module.A>> map_of_string_to_map_of_string_to_A
   */
  public ?Map<string, Map<string, A>> $map_of_string_to_map_of_string_to_A;
  /**
   * Original thrift field:-
   * 8: list<string> list_of_string
   */
  public ?Vector<string> $list_of_string;
  /**
   * Original thrift field:-
   * 9: list<map<string, struct module.A>> list_of_map_of_string_to_A
   */
  public ?Vector<Map<string, A>> $list_of_map_of_string_to_A;
  /**
   * Original thrift field:-
   * 10: list<struct module.B> list_of_self
   */
  public ?Vector<B> $list_of_self;
  /**
   * Original thrift field:-
   * 11: list<list<struct module.B>> list_of_list_of_self
   */
  public ?Vector<Vector<B>> $list_of_list_of_self;
  /**
   * Original thrift field:-
   * 12: list<map<string, list<struct module.A>>> list_of_map_of_string_to_list_of_A
   */
  public ?Vector<Map<string, Vector<A>>> $list_of_map_of_string_to_list_of_A;

  <<__Rx>>
  public function __construct(?Map<string, string> $map_of_string_to_string = null, ?Map<string, int> $map_of_string_to_i32 = null, ?Map<string, A> $map_of_string_to_A = null, ?Map<string, B> $map_of_string_to_self = null, ?Map<string, Vector<A>> $map_of_string_to_list_of_A = null, ?Map<string, Map<string, int>> $map_of_string_to_map_of_string_to_i32 = null, ?Map<string, Map<string, A>> $map_of_string_to_map_of_string_to_A = null, ?Vector<string> $list_of_string = null, ?Vector<Map<string, A>> $list_of_map_of_string_to_A = null, ?Vector<B> $list_of_self = null, ?Vector<Vector<B>> $list_of_list_of_self = null, ?Vector<Map<string, Vector<A>>> $list_of_map_of_string_to_list_of_A = null  ) {
    $this->map_of_string_to_string = $map_of_string_to_string;
    $this->map_of_string_to_i32 = $map_of_string_to_i32;
    $this->map_of_string_to_A = $map_of_string_to_A;
    $this->map_of_string_to_self = $map_of_string_to_self;
    $this->map_of_string_to_list_of_A = $map_of_string_to_list_of_A;
    $this->map_of_string_to_map_of_string_to_i32 = $map_of_string_to_map_of_string_to_i32;
    $this->map_of_string_to_map_of_string_to_A = $map_of_string_to_map_of_string_to_A;
    $this->list_of_string = $list_of_string;
    $this->list_of_map_of_string_to_A = $list_of_map_of_string_to_A;
    $this->list_of_self = $list_of_self;
    $this->list_of_list_of_self = $list_of_list_of_self;
    $this->list_of_map_of_string_to_list_of_A = $list_of_map_of_string_to_list_of_A;
  }

  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'map_of_string_to_string'),
      Shapes::idx($shape, 'map_of_string_to_i32'),
      Shapes::idx($shape, 'map_of_string_to_A'),
      Shapes::idx($shape, 'map_of_string_to_self'),
      Shapes::idx($shape, 'map_of_string_to_list_of_A'),
      Shapes::idx($shape, 'map_of_string_to_map_of_string_to_i32'),
      Shapes::idx($shape, 'map_of_string_to_map_of_string_to_A'),
      Shapes::idx($shape, 'list_of_string'),
      Shapes::idx($shape, 'list_of_map_of_string_to_A'),
      Shapes::idx($shape, 'list_of_self'),
      Shapes::idx($shape, 'list_of_list_of_self'),
      Shapes::idx($shape, 'list_of_map_of_string_to_list_of_A'),
    );
  }

  public function getName(): string {
    return 'C';
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }
  public static function __fromShape(self::TShape $shape): this {
    $me = new static();
    if (Shapes::idx($shape, 'map_of_string_to_string') !== null) {
      $me->map_of_string_to_string = (new Map($shape['map_of_string_to_string']));
    }
    if (Shapes::idx($shape, 'map_of_string_to_i32') !== null) {
      $me->map_of_string_to_i32 = (new Map($shape['map_of_string_to_i32']));
    }
    if (Shapes::idx($shape, 'map_of_string_to_A') !== null) {
      $me->map_of_string_to_A = (new Map($shape['map_of_string_to_A']))->map(
        $val0 ==> A::__fromShape($val0),
      );
    }
    if (Shapes::idx($shape, 'map_of_string_to_self') !== null) {
      $me->map_of_string_to_self = (new Map($shape['map_of_string_to_self']))->map(
        $val1 ==> B::__fromShape($val1),
      );
    }
    if (Shapes::idx($shape, 'map_of_string_to_list_of_A') !== null) {
      $me->map_of_string_to_list_of_A = (new Map($shape['map_of_string_to_list_of_A']))->map(
        $val2 ==> (new Vector($val2))->map(
          $val3 ==> A::__fromShape($val3),
        ),
      );
    }
    if (Shapes::idx($shape, 'map_of_string_to_map_of_string_to_i32') !== null) {
      $me->map_of_string_to_map_of_string_to_i32 = (new Map($shape['map_of_string_to_map_of_string_to_i32']))->map(
        $val4 ==> (new Map($val4)),
      );
    }
    if (Shapes::idx($shape, 'map_of_string_to_map_of_string_to_A') !== null) {
      $me->map_of_string_to_map_of_string_to_A = (new Map($shape['map_of_string_to_map_of_string_to_A']))->map(
        $val5 ==> (new Map($val5))->map(
          $val6 ==> A::__fromShape($val6),
        ),
      );
    }
    if (Shapes::idx($shape, 'list_of_string') !== null) {
      $me->list_of_string = (new Vector($shape['list_of_string']));
    }
    if (Shapes::idx($shape, 'list_of_map_of_string_to_A') !== null) {
      $me->list_of_map_of_string_to_A = (new Vector($shape['list_of_map_of_string_to_A']))->map(
        $val7 ==> (new Map($val7))->map(
          $val8 ==> A::__fromShape($val8),
        ),
      );
    }
    if (Shapes::idx($shape, 'list_of_self') !== null) {
      $me->list_of_self = (new Vector($shape['list_of_self']))->map(
        $val9 ==> B::__fromShape($val9),
      );
    }
    if (Shapes::idx($shape, 'list_of_list_of_self') !== null) {
      $me->list_of_list_of_self = (new Vector($shape['list_of_list_of_self']))->map(
        $val10 ==> (new Vector($val10))->map(
          $val11 ==> B::__fromShape($val11),
        ),
      );
    }
    if (Shapes::idx($shape, 'list_of_map_of_string_to_list_of_A') !== null) {
      $me->list_of_map_of_string_to_list_of_A = (new Vector($shape['list_of_map_of_string_to_list_of_A']))->map(
        $val12 ==> (new Map($val12))->map(
          $val13 ==> (new Vector($val13))->map(
            $val14 ==> A::__fromShape($val14),
          ),
        ),
      );
    }
    return $me;
  }

  <<__Rx>>
  public function __toShape(): self::TShape {
    return shape(
      'map_of_string_to_string' => $this->map_of_string_to_string
        |> $$ === null ? null : dict($$),
      'map_of_string_to_i32' => $this->map_of_string_to_i32
        |> $$ === null ? null : dict($$),
      'map_of_string_to_A' => $this->map_of_string_to_A?->map(
        $_val0 ==> $_val0->__toShape(),
      )
        |> $$ === null ? null : dict($$),
      'map_of_string_to_self' => $this->map_of_string_to_self?->map(
        $_val0 ==> $_val0->__toShape(),
      )
        |> $$ === null ? null : dict($$),
      'map_of_string_to_list_of_A' => $this->map_of_string_to_list_of_A?->map(
        $_val0 ==> $_val0->map(
          $_val1 ==> $_val1->__toShape(),
        )
          |> vec($$),
      )
        |> $$ === null ? null : dict($$),
      'map_of_string_to_map_of_string_to_i32' => $this->map_of_string_to_map_of_string_to_i32?->map(
        $_val0 ==> dict($_val0),
      )
        |> $$ === null ? null : dict($$),
      'map_of_string_to_map_of_string_to_A' => $this->map_of_string_to_map_of_string_to_A?->map(
        $_val0 ==> $_val0->map(
          $_val1 ==> $_val1->__toShape(),
        )
          |> dict($$),
      )
        |> $$ === null ? null : dict($$),
      'list_of_string' => $this->list_of_string
        |> $$ === null ? null : vec($$),
      'list_of_map_of_string_to_A' => $this->list_of_map_of_string_to_A?->map(
        $_val0 ==> $_val0->map(
          $_val1 ==> $_val1->__toShape(),
        )
          |> dict($$),
      )
        |> $$ === null ? null : vec($$),
      'list_of_self' => $this->list_of_self?->map(
        $_val0 ==> $_val0->__toShape(),
      )
        |> $$ === null ? null : vec($$),
      'list_of_list_of_self' => $this->list_of_list_of_self?->map(
        $_val0 ==> $_val0->map(
          $_val1 ==> $_val1->__toShape(),
        )
          |> vec($$),
      )
        |> $$ === null ? null : vec($$),
      'list_of_map_of_string_to_list_of_A' => $this->list_of_map_of_string_to_list_of_A?->map(
        $_val0 ==> $_val0->map(
          $_val1 ==> $_val1->map(
            $_val2 ==> $_val2->__toShape(),
          )
            |> vec($$),
        )
          |> dict($$),
      )
        |> $$ === null ? null : vec($$),
    );
  }
}

