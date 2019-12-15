/// @file
/// @brief Contains definition of <b>"Enums"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <tuple>
#include <type_traits>
#include <utility>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "demo1/MsgId.h"
#include "demo1/field/FieldBase.h"
#include "demo1/options/DefaultOptions.h"

namespace demo1
{

namespace message
{

/// @brief Common definitions for fields from @ref EnumsFields.
/// @see @ref EnumsFields
/// @headerfile "demo1/message/Enums.h"
struct EnumsFieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref demo1::message::EnumsFields::F1 field.
    enum class F1Val : std::uint8_t
    {
        V0 = 0, ///< value @b V0
        V1 = 1, ///< value @b V1
        V2 = 2, ///< value @b V2
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 2, ///< Last defined value.
        ValuesLimit = 3, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref demo1::message::EnumsFields::F1 field.
    struct F1Common
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(F1Val val)
        {
            static const char* Map[] = {
                "V0",
                "V1",
                "V2"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref demo1::message::EnumsFields::F2 field.
    enum class F2Val : std::int16_t
    {
        V1 = -1, ///< value @b V1
        V2 = 5, ///< value @b V2
        V3 = 6, ///< value @b V3
        V4 = 7, ///< value @b V4
        
        // --- Extra values generated for convenience ---
        FirstValue = -1, ///< First defined value.
        LastValue = 7, ///< Last defined value.
        ValuesLimit = 8, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref demo1::message::EnumsFields::F2 field.
    struct F2Common
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(F2Val val)
        {
            using NameInfo = std::pair<F2Val, const char*>;
            static const NameInfo Map[] = {
                std::make_pair(F2Val::V1, "V1"),
                std::make_pair(F2Val::V2, "V2"),
                std::make_pair(F2Val::V3, "V3"),
                std::make_pair(F2Val::V4, "V4")
            };
            
            auto iter = std::lower_bound(
                std::begin(Map), std::end(Map), val,
                [](const NameInfo& info, F2Val v) -> bool
                {
                    return info.first < v;
                });
            
            if ((iter == std::end(Map)) || (iter->first != val)) {
                return nullptr;
            }
            
            return iter->second;
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref demo1::message::EnumsFields::F3 field.
    enum class F3Val : std::uint32_t
    {
        V1 = 0x010203UL, ///< value @b V1
        V2 = 0x040506UL, ///< value @b V2
        
        // --- Extra values generated for convenience ---
        FirstValue = 0x010203UL, ///< First defined value.
        LastValue = 0x040506UL, ///< Last defined value.
        ValuesLimit = 0x040507UL, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref demo1::message::EnumsFields::F3 field.
    struct F3Common
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(F3Val val)
        {
            using NameInfo = std::pair<F3Val, const char*>;
            static const NameInfo Map[] = {
                std::make_pair(F3Val::V1, "V1"),
                std::make_pair(F3Val::V2, "V2")
            };
            
            auto iter = std::lower_bound(
                std::begin(Map), std::end(Map), val,
                [](const NameInfo& info, F3Val v) -> bool
                {
                    return info.first < v;
                });
            
            if ((iter == std::end(Map)) || (iter->first != val)) {
                return nullptr;
            }
            
            return iter->second;
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref demo1::message::EnumsFields::F4 field.
    enum class F4Val : std::uint16_t
    {
        V1 = 0U, ///< value @b V1
        V2 = 128U, ///< value @b V2
        
        // --- Extra values generated for convenience ---
        FirstValue = 0U, ///< First defined value.
        LastValue = 128U, ///< Last defined value.
        ValuesLimit = 129U, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref demo1::message::EnumsFields::F4 field.
    struct F4Common
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(F4Val val)
        {
            using NameInfo = std::pair<F4Val, const char*>;
            static const NameInfo Map[] = {
                std::make_pair(F4Val::V1, "V1"),
                std::make_pair(F4Val::V2, "V2")
            };
            
            auto iter = std::lower_bound(
                std::begin(Map), std::end(Map), val,
                [](const NameInfo& info, F4Val v) -> bool
                {
                    return info.first < v;
                });
            
            if ((iter == std::end(Map)) || (iter->first != val)) {
                return nullptr;
            }
            
            return iter->second;
        }
        
    };
    
};

/// @brief Fields of @ref Enums.
/// @tparam TOpt Extra options
/// @see @ref Enums
/// @headerfile "demo1/message/Enums.h"
template <typename TOpt = demo1::options::DefaultOptions>
struct EnumsFields
{
    /// @brief Values enumerator for
    ///     @ref demo1::message::EnumsFields::F1 field.
    using F1Val = demo1::message::EnumsFieldsCommon::F1Val;
    
    /// @brief Definition of <b>"F1"</b> field.
    /// @details
    ///     Simple enum with sequential values
    /// @see @ref demo1::message::EnumsFields::F1Val
    struct F1 : public
        comms::field::EnumValue<
            demo1::field::FieldBase<>,
            F1Val,
            comms::option::def::ValidNumValueRange<0, 2>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "F1";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(F1Val val)
        {
            return demo1::message::EnumsFieldsCommon::F1Common::valueName(val);
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref demo1::message::EnumsFields::F2 field.
    using F2Val = demo1::message::EnumsFieldsCommon::F2Val;
    
    /// @brief Definition of <b>"F2"</b> field.
    /// @details
    ///     Enum with signed values
    /// @see @ref demo1::message::EnumsFields::F2Val
    struct F2 : public
        comms::field::EnumValue<
            demo1::field::FieldBase<>,
            F2Val,
            comms::option::def::DefaultNumValue<6>,
            comms::option::def::ValidNumValue<-1>,
            comms::option::def::ValidNumValueRange<5, 7>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "F2";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(F2Val val)
        {
            return demo1::message::EnumsFieldsCommon::F2Common::valueName(val);
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref demo1::message::EnumsFields::F3 field.
    using F3Val = demo1::message::EnumsFieldsCommon::F3Val;
    
    /// @brief Definition of <b>"F3"</b> field.
    /// @details
    ///     Enum with non-standard length
    /// @see @ref demo1::message::EnumsFields::F3Val
    struct F3 : public
        comms::field::EnumValue<
            demo1::field::FieldBase<>,
            F3Val,
            comms::option::def::DefaultNumValue<66051L>,
            comms::option::def::FixedLength<3U>,
            comms::option::def::ValidNumValue<66051L>,
            comms::option::def::ValidNumValue<263430L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "F3";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(F3Val val)
        {
            return demo1::message::EnumsFieldsCommon::F3Common::valueName(val);
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref demo1::message::EnumsFields::F4 field.
    using F4Val = demo1::message::EnumsFieldsCommon::F4Val;
    
    /// @brief Definition of <b>"F4"</b> field.
    /// @details
    ///     Enum with variable length
    /// @see @ref demo1::message::EnumsFields::F4Val
    struct F4 : public
        comms::field::EnumValue<
            demo1::field::FieldBase<>,
            F4Val,
            comms::option::def::VarLength<1U, 2U>,
            comms::option::def::ValidNumValue<0>,
            comms::option::def::ValidNumValue<128>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "F4";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(F4Val val)
        {
            return demo1::message::EnumsFieldsCommon::F4Common::valueName(val);
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        F1,
        F2,
        F3,
        F4
    >;
};

/// @brief Definition of <b>"Enums"</b> message class.
/// @details
///     See @ref EnumsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "demo1/message/Enums.h"
template <typename TMsgBase, typename TOpt = demo1::options::DefaultOptions>
class Enums : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Enums,
        comms::option::def::StaticNumIdImpl<demo1::MsgId_Enums>,
        comms::option::def::FieldsImpl<typename EnumsFields<TOpt>::All>,
        comms::option::def::MsgType<Enums<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Enums,
            comms::option::def::StaticNumIdImpl<demo1::MsgId_Enums>,
            comms::option::def::FieldsImpl<typename EnumsFields<TOpt>::All>,
            comms::option::def::MsgType<Enums<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_f1 type and @b field_f1() fuction
    ///         for @ref EnumsFields::F1 field.
    ///     @li @b Field_f2 type and @b field_f2() fuction
    ///         for @ref EnumsFields::F2 field.
    ///     @li @b Field_f3 type and @b field_f3() fuction
    ///         for @ref EnumsFields::F3 field.
    ///     @li @b Field_f4 type and @b field_f4() fuction
    ///         for @ref EnumsFields::F4 field.
    COMMS_MSG_FIELDS_NAMES(
        f1,
        f2,
        f3,
        f4
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 7U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "Enums";
    }
    
    
};

} // namespace message

} // namespace demo1


