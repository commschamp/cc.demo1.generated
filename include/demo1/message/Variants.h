/// @file
/// @brief Contains definition of <b>"Variants"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/field/String.h"
#include "comms/field/Variant.h"
#include "comms/options.h"
#include "demo1/DefaultOptions.h"
#include "demo1/MsgId.h"
#include "demo1/field/FieldBase.h"

namespace demo1
{

namespace message
{

/// @brief Fields of @ref Variants.
/// @tparam TOpt Extra options
/// @see @ref Variants
/// @headerfile "demo1/message/Variants.h"
template <typename TOpt = demo1::DefaultOptions>
struct VariantsFields
{
    /// @brief Scope for all the member fields of @ref Properties list.
    struct PropertiesMembers
    {
        /// @brief Scope for all the member fields of @ref Property bitfield.
        struct PropertyMembers
        {
            /// @brief Scope for all the member fields of @ref Prop1 bitfield.
            struct Prop1Members
            {
                /// @brief Definition of <b>"Key"</b> field.
                struct Key : public
                    comms::field::IntValue<
                        demo1::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::FailOnInvalid<>,
                        comms::option::DefaultNumValue<1>,
                        comms::option::ValidNumValue<1>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "Key";
                    }
                    
                };
                
                /// @brief Definition of <b>"Val"</b> field.
                struct Val : public
                    comms::field::IntValue<
                        demo1::field::FieldBase<>,
                        std::int16_t
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "Val";
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       Key,
                       Val
                    >;
            };
            
            /// @brief Definition of <b>"Prop1"</b> field.
            class Prop1 : public
                comms::field::Bundle<
                    demo1::field::FieldBase<>,
                    typename Prop1Members::All
                >
            {
                using Base = 
                    comms::field::Bundle<
                        demo1::field::FieldBase<>,
                        typename Prop1Members::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
                ///     related to @b comms::field::Bundle class from COMMS library
                ///     for details.
                ///
                ///     The generated access functions are:
                ///     @li @b field_key() - for Prop1Members::Key member field.
                ///     @li @b field_val() - for Prop1Members::Val member field.
                COMMS_FIELD_MEMBERS_ACCESS(
                    key,
                    val
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "Prop1";
                }
                
            };
            
            /// @brief Scope for all the member fields of @ref Prop2 bitfield.
            struct Prop2Members
            {
                /// @brief Definition of <b>"Key"</b> field.
                struct Key : public
                    comms::field::IntValue<
                        demo1::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::FailOnInvalid<>,
                        comms::option::DefaultNumValue<2>,
                        comms::option::ValidNumValue<2>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "Key";
                    }
                    
                };
                
                /// @brief Definition of <b>"Val"</b> field.
                struct Val : public
                    comms::field::IntValue<
                        demo1::field::FieldBase<>,
                        std::uint32_t
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "Val";
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       Key,
                       Val
                    >;
            };
            
            /// @brief Definition of <b>"Prop2"</b> field.
            class Prop2 : public
                comms::field::Bundle<
                    demo1::field::FieldBase<>,
                    typename Prop2Members::All
                >
            {
                using Base = 
                    comms::field::Bundle<
                        demo1::field::FieldBase<>,
                        typename Prop2Members::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
                ///     related to @b comms::field::Bundle class from COMMS library
                ///     for details.
                ///
                ///     The generated access functions are:
                ///     @li @b field_key() - for Prop2Members::Key member field.
                ///     @li @b field_val() - for Prop2Members::Val member field.
                COMMS_FIELD_MEMBERS_ACCESS(
                    key,
                    val
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "Prop2";
                }
                
            };
            
            /// @brief Scope for all the member fields of @ref Prop3 bitfield.
            struct Prop3Members
            {
                /// @brief Definition of <b>"Key"</b> field.
                struct Key : public
                    comms::field::IntValue<
                        demo1::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::FailOnInvalid<>,
                        comms::option::DefaultNumValue<3>,
                        comms::option::ValidNumValue<3>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "Key";
                    }
                    
                };
                
                /// @brief Scope for all the member fields of @ref Val string.
                struct ValMembers
                {
                    /// @brief Definition of <b>"Length"</b> field.
                    struct Length : public
                        comms::field::IntValue<
                            demo1::field::FieldBase<>,
                            std::uint8_t
                        >
                    {
                        /// @brief Name of the field.
                        static const char* name()
                        {
                            return "Length";
                        }
                        
                    };
                    
                };
                
                /// @brief Definition of <b>"Val"</b> field.
                struct Val : public
                    comms::field::String<
                        demo1::field::FieldBase<>,
                        typename TOpt::message::VariantsFields::PropertiesMembers::PropertyMembers::Prop3Members::Val,
                        comms::option::SequenceSerLengthFieldPrefix<typename ValMembers::Length>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "Val";
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       Key,
                       Val
                    >;
            };
            
            /// @brief Definition of <b>"Prop3"</b> field.
            class Prop3 : public
                comms::field::Bundle<
                    demo1::field::FieldBase<>,
                    typename Prop3Members::All
                >
            {
                using Base = 
                    comms::field::Bundle<
                        demo1::field::FieldBase<>,
                        typename Prop3Members::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
                ///     related to @b comms::field::Bundle class from COMMS library
                ///     for details.
                ///
                ///     The generated access functions are:
                ///     @li @b field_key() - for Prop3Members::Key member field.
                ///     @li @b field_val() - for Prop3Members::Val member field.
                COMMS_FIELD_MEMBERS_ACCESS(
                    key,
                    val
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "Prop3";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Prop1,
                   Prop2,
                   Prop3
                >;
        };
        
        /// @brief Definition of <b>"Property"</b> field.
        class Property : public
            comms::field::Variant<
                demo1::field::FieldBase<>,
                typename PropertyMembers::All
            >
        {
            using Base = 
                comms::field::Variant<
                    demo1::field::FieldBase<>,
                    typename PropertyMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_VARIANT_MEMBERS_ACCESS macro
            ///     related to @b comms::field::Variant class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b initField_prop1() and @b accessField_prop1 - for PropertyMembers::Prop1 member field.
            ///     @li @b initField_prop2() and @b accessField_prop2 - for PropertyMembers::Prop2 member field.
            ///     @li @b initField_prop3() and @b accessField_prop3 - for PropertyMembers::Prop3 member field.
            COMMS_VARIANT_MEMBERS_ACCESS(
                prop1,
                prop2,
                prop3
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "Property";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"Properties"</b> field.
    struct Properties : public
        comms::field::ArrayList<
            demo1::field::FieldBase<>,
            typename PropertiesMembers::Property,
            typename TOpt::message::VariantsFields::Properties
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "Properties";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Properties
    >;
};

/// @brief Definition of <b>"Variants"</b> message class.
/// @details
///     To demonstrate usage of variants fields, this message contains
///     a list of heterogatious values implemented using variant field.
///     Every element is a key-value pair. @n
///     See @ref VariantsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "demo1/message/Variants.h"
template <typename TMsgBase, typename TOpt = demo1::DefaultOptions>
class Variants : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Variants,
        comms::option::StaticNumIdImpl<demo1::MsgId_Variants>,
        comms::option::FieldsImpl<typename VariantsFields<TOpt>::All>,
        comms::option::MsgType<Variants<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Variants,
            comms::option::StaticNumIdImpl<demo1::MsgId_Variants>,
            comms::option::FieldsImpl<typename VariantsFields<TOpt>::All>,
            comms::option::MsgType<Variants<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_properties() for @ref VariantsFields::Properties field.
    COMMS_MSG_FIELDS_ACCESS(
        properties
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "Variants";
    }
    
    
};

} // namespace message

} // namespace demo1


