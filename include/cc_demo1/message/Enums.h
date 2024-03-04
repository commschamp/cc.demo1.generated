// Generated by commsdsl2comms v6.3.0

/// @file
/// @brief Contains definition of <b>"Enums"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_demo1/MsgId.h"
#include "cc_demo1/field/FieldBase.h"
#include "cc_demo1/message/EnumsCommon.h"
#include "cc_demo1/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"

namespace cc_demo1
{

namespace message
{

/// @brief Fields of @ref Enums.
/// @tparam TOpt Extra options
/// @see @ref Enums
/// @headerfile cc_demo1/message/Enums.h
template <typename TOpt = cc_demo1::options::DefaultOptions>
struct EnumsFields
{
    /// @brief Definition of <b>"F1"</b> field.
    /// @details
    ///     Simple enum with sequential values
    /// @see @ref cc_demo1::message::EnumsFieldsCommon::F1Common::ValueType
    class F1 : public
        comms::field::EnumValue<
            cc_demo1::field::FieldBase<>,
            cc_demo1::message::EnumsFieldsCommon::F1Common::ValueType,
            comms::option::def::ValidNumValueRange<0, 2>
        >
    {
        using Base =
            comms::field::EnumValue<
                cc_demo1::field::FieldBase<>,
                cc_demo1::message::EnumsFieldsCommon::F1Common::ValueType,
                comms::option::def::ValidNumValueRange<0, 2>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Single value name info entry.
        using ValueNameInfo = cc_demo1::message::EnumsFieldsCommon::F1Common::ValueNameInfo;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @see @ref cc_demo1::message::EnumsFieldsCommon::F1Common::ValueNamesMapInfo.
        using ValueNamesMapInfo = cc_demo1::message::EnumsFieldsCommon::F1Common::ValueNamesMapInfo;

        /// @brief Retrieve name of the enum value.
        /// @see @ref cc_demo1::message::EnumsFieldsCommon::F1Common::valueName().
        static const char* valueName(ValueType val)
        {
            return cc_demo1::message::EnumsFieldsCommon::F1Common::valueName(val);
        }

        /// @brief Retrieve name of the enum value.
        /// @see @ref cc_demo1::message::EnumsFieldsCommon::F1Common::valueName().
        static const char* valueNameOf(ValueType val)
        {
            return cc_demo1::message::EnumsFieldsCommon::F1Common::valueName(val);
        }

        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::getValue());
        }

        /// @brief Retrieve map of enum value names.
        /// @see @ref cc_demo1::message::EnumsFieldsCommon::F1Common::valueNamesMap().
        static ValueNamesMapInfo valueNamesMap()
        {
            return cc_demo1::message::EnumsFieldsCommon::F1Common::valueNamesMap();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_demo1::message::EnumsFieldsCommon::F1Common::name();
        }
    };

    /// @brief Definition of <b>"F2"</b> field.
    /// @details
    ///     Enum with signed values
    /// @see @ref cc_demo1::message::EnumsFieldsCommon::F2Common::ValueType
    class F2 : public
        comms::field::EnumValue<
            cc_demo1::field::FieldBase<>,
            cc_demo1::message::EnumsFieldsCommon::F2Common::ValueType,
            comms::option::def::DefaultNumValue<6>,
            comms::option::def::ValidNumValue<-1>,
            comms::option::def::ValidNumValueRange<5, 7>
        >
    {
        using Base =
            comms::field::EnumValue<
                cc_demo1::field::FieldBase<>,
                cc_demo1::message::EnumsFieldsCommon::F2Common::ValueType,
                comms::option::def::DefaultNumValue<6>,
                comms::option::def::ValidNumValue<-1>,
                comms::option::def::ValidNumValueRange<5, 7>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Single value name info entry.
        using ValueNameInfo = cc_demo1::message::EnumsFieldsCommon::F2Common::ValueNameInfo;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @see @ref cc_demo1::message::EnumsFieldsCommon::F2Common::ValueNamesMapInfo.
        using ValueNamesMapInfo = cc_demo1::message::EnumsFieldsCommon::F2Common::ValueNamesMapInfo;

        /// @brief Retrieve name of the enum value.
        /// @see @ref cc_demo1::message::EnumsFieldsCommon::F2Common::valueName().
        static const char* valueName(ValueType val)
        {
            return cc_demo1::message::EnumsFieldsCommon::F2Common::valueName(val);
        }

        /// @brief Retrieve name of the enum value.
        /// @see @ref cc_demo1::message::EnumsFieldsCommon::F2Common::valueName().
        static const char* valueNameOf(ValueType val)
        {
            return cc_demo1::message::EnumsFieldsCommon::F2Common::valueName(val);
        }

        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::getValue());
        }

        /// @brief Retrieve map of enum value names.
        /// @see @ref cc_demo1::message::EnumsFieldsCommon::F2Common::valueNamesMap().
        static ValueNamesMapInfo valueNamesMap()
        {
            return cc_demo1::message::EnumsFieldsCommon::F2Common::valueNamesMap();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_demo1::message::EnumsFieldsCommon::F2Common::name();
        }
    };

    /// @brief Definition of <b>"F3"</b> field.
    /// @details
    ///     Enum with non-standard length
    /// @see @ref cc_demo1::message::EnumsFieldsCommon::F3Common::ValueType
    class F3 : public
        comms::field::EnumValue<
            cc_demo1::field::FieldBase<>,
            cc_demo1::message::EnumsFieldsCommon::F3Common::ValueType,
            comms::option::def::DefaultNumValue<66051L>,
            comms::option::def::FixedLength<3U>,
            comms::option::def::ValidNumValue<66051L>,
            comms::option::def::ValidNumValue<263430L>
        >
    {
        using Base =
            comms::field::EnumValue<
                cc_demo1::field::FieldBase<>,
                cc_demo1::message::EnumsFieldsCommon::F3Common::ValueType,
                comms::option::def::DefaultNumValue<66051L>,
                comms::option::def::FixedLength<3U>,
                comms::option::def::ValidNumValue<66051L>,
                comms::option::def::ValidNumValue<263430L>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Single value name info entry.
        using ValueNameInfo = cc_demo1::message::EnumsFieldsCommon::F3Common::ValueNameInfo;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @see @ref cc_demo1::message::EnumsFieldsCommon::F3Common::ValueNamesMapInfo.
        using ValueNamesMapInfo = cc_demo1::message::EnumsFieldsCommon::F3Common::ValueNamesMapInfo;

        /// @brief Retrieve name of the enum value.
        /// @see @ref cc_demo1::message::EnumsFieldsCommon::F3Common::valueName().
        static const char* valueName(ValueType val)
        {
            return cc_demo1::message::EnumsFieldsCommon::F3Common::valueName(val);
        }

        /// @brief Retrieve name of the enum value.
        /// @see @ref cc_demo1::message::EnumsFieldsCommon::F3Common::valueName().
        static const char* valueNameOf(ValueType val)
        {
            return cc_demo1::message::EnumsFieldsCommon::F3Common::valueName(val);
        }

        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::getValue());
        }

        /// @brief Retrieve map of enum value names.
        /// @see @ref cc_demo1::message::EnumsFieldsCommon::F3Common::valueNamesMap().
        static ValueNamesMapInfo valueNamesMap()
        {
            return cc_demo1::message::EnumsFieldsCommon::F3Common::valueNamesMap();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_demo1::message::EnumsFieldsCommon::F3Common::name();
        }
    };

    /// @brief Definition of <b>"F4"</b> field.
    /// @details
    ///     Enum with variable length
    /// @see @ref cc_demo1::message::EnumsFieldsCommon::F4Common::ValueType
    class F4 : public
        comms::field::EnumValue<
            cc_demo1::field::FieldBase<>,
            cc_demo1::message::EnumsFieldsCommon::F4Common::ValueType,
            comms::option::def::VarLength<1U, 2U>,
            comms::option::def::ValidNumValue<0>,
            comms::option::def::ValidNumValue<128>
        >
    {
        using Base =
            comms::field::EnumValue<
                cc_demo1::field::FieldBase<>,
                cc_demo1::message::EnumsFieldsCommon::F4Common::ValueType,
                comms::option::def::VarLength<1U, 2U>,
                comms::option::def::ValidNumValue<0>,
                comms::option::def::ValidNumValue<128>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Single value name info entry.
        using ValueNameInfo = cc_demo1::message::EnumsFieldsCommon::F4Common::ValueNameInfo;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @see @ref cc_demo1::message::EnumsFieldsCommon::F4Common::ValueNamesMapInfo.
        using ValueNamesMapInfo = cc_demo1::message::EnumsFieldsCommon::F4Common::ValueNamesMapInfo;

        /// @brief Retrieve name of the enum value.
        /// @see @ref cc_demo1::message::EnumsFieldsCommon::F4Common::valueName().
        static const char* valueName(ValueType val)
        {
            return cc_demo1::message::EnumsFieldsCommon::F4Common::valueName(val);
        }

        /// @brief Retrieve name of the enum value.
        /// @see @ref cc_demo1::message::EnumsFieldsCommon::F4Common::valueName().
        static const char* valueNameOf(ValueType val)
        {
            return cc_demo1::message::EnumsFieldsCommon::F4Common::valueName(val);
        }

        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::getValue());
        }

        /// @brief Retrieve map of enum value names.
        /// @see @ref cc_demo1::message::EnumsFieldsCommon::F4Common::valueNamesMap().
        static ValueNamesMapInfo valueNamesMap()
        {
            return cc_demo1::message::EnumsFieldsCommon::F4Common::valueNamesMap();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_demo1::message::EnumsFieldsCommon::F4Common::name();
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
/// @headerfile cc_demo1/message/Enums.h
template <typename TMsgBase, typename TOpt = cc_demo1::options::DefaultOptions>
class Enums : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Enums,
        comms::option::def::StaticNumIdImpl<cc_demo1::MsgId_Enums>,
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
            comms::option::def::StaticNumIdImpl<cc_demo1::MsgId_Enums>,
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
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_f1 index, @b Field_f1 type and @b field_f1() access fuction
    ///         for @ref EnumsFields::F1 field.
    ///     @li @b FieldIdx_f2 index, @b Field_f2 type and @b field_f2() access fuction
    ///         for @ref EnumsFields::F2 field.
    ///     @li @b FieldIdx_f3 index, @b Field_f3 type and @b field_f3() access fuction
    ///         for @ref EnumsFields::F3 field.
    ///     @li @b FieldIdx_f4 index, @b Field_f4 type and @b field_f4() access fuction
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
        return cc_demo1::message::EnumsCommon::name();
    }
};

} // namespace message

} // namespace cc_demo1
