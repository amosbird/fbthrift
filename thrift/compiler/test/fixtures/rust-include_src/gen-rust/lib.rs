// @generated by Thrift for src/module.thrift
// This file is probably not the place you want to edit!

#![recursion_limit = "100000000"]
#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, unused_crate_dependencies)]
include!("impl_my_things.rs");
include!("my/other/thing.rs");

pub use self::errors::*;
pub use self::types::*;

/// Thrift type definitions for `module`.
pub mod types {
    #![allow(clippy::redundant_closure)]


    #[derive(Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
    pub struct MyStruct {
        pub foo: ::std::primitive::i32,
        pub bar: ::std::string::String,
        // This field forces `..Default::default()` when instantiating this
        // struct, to make code future-proof against new fields added later to
        // the definition in Thrift. If you don't want this, add the annotation
        // `(rust.exhaustive)` to the Thrift struct to eliminate this field.
        #[doc(hidden)]
        pub _dot_dot_Default_default: self::dot_dot::OtherFields,
    }

    impl ::std::default::Default for self::MyStruct {
        fn default() -> Self {
            Self {
                foo: ::std::default::Default::default(),
                bar: ::std::default::Default::default(),
                _dot_dot_Default_default: self::dot_dot::OtherFields(()),
            }
        }
    }

    impl ::std::fmt::Debug for self::MyStruct {
        fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
            formatter
                .debug_struct("MyStruct")
                .field("foo", &self.foo)
                .field("bar", &self.bar)
                .finish()
        }
    }

    unsafe impl ::std::marker::Send for self::MyStruct {}
    unsafe impl ::std::marker::Sync for self::MyStruct {}

    impl ::fbthrift::GetTType for self::MyStruct {
        const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
    }

    impl<P> ::fbthrift::Serialize<P> for self::MyStruct
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            p.write_struct_begin("MyStruct");
            p.write_field_begin("foo", ::fbthrift::TType::I32, 1);
            ::fbthrift::Serialize::write(&self.foo, p);
            p.write_field_end();
            p.write_field_begin("bar", ::fbthrift::TType::String, 2);
            ::fbthrift::Serialize::write(&self.bar, p);
            p.write_field_end();
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for self::MyStruct
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            static FIELDS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("bar", ::fbthrift::TType::String, 2),
                ::fbthrift::Field::new("foo", ::fbthrift::TType::I32, 1),
            ];
            let mut field_foo = ::std::option::Option::None;
            let mut field_bar = ::std::option::Option::None;
            let _ = p.read_struct_begin(|_| ())?;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
                match (fty, fid as ::std::primitive::i32) {
                    (::fbthrift::TType::Stop, _) => break,
                    (::fbthrift::TType::I32, 1) => field_foo = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::String, 2) => field_bar = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (fty, _) => p.skip(fty)?,
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(Self {
                foo: field_foo.unwrap_or_default(),
                bar: field_bar.unwrap_or_default(),
                _dot_dot_Default_default: self::dot_dot::OtherFields(()),
            })
        }
    }


    mod dot_dot {
        #[derive(Copy, Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
        pub struct OtherFields(pub(crate) ());
    }
}

/// Error return types.
pub mod errors {
}
