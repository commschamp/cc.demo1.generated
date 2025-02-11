// Generated by commsdsl2comms v7.0.3

/// @file
/// @brief Contains definition of <b>"Scaled Ints"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_demo1/MsgId.h"
#include "cc_demo1/field/FieldBase.h"
#include "cc_demo1/field/Lat.h"
#include "cc_demo1/field/Lon.h"
#include "cc_demo1/message/ScaledIntsCommon.h"
#include "cc_demo1/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_demo1
{

namespace message
{

/// @brief Fields of @ref ScaledInts.
/// @tparam TOpt Extra options
/// @see @ref ScaledInts
/// @headerfile cc_demo1/message/ScaledInts.h
template <typename TOpt = cc_demo1::options::DefaultOptions>
struct ScaledIntsFields
{
    /// @brief Definition of <b>"Lat"</b> field.
    using Lat =
        cc_demo1::field::Lat<
            TOpt,
            comms::option::def::HasName
        >;

    /// @brief Definition of <b>"Lon"</b> field.
    using Lon =
        cc_demo1::field::Lon<
            TOpt,
            comms::option::def::HasName
        >;

    /// @brief Definition of <b>"Height"</b> field.
    /// @details
    ///     Height above ellipsoid in mm
    class Height : public
        comms::field::IntValue<
            cc_demo1::field::FieldBase<>,
            std::int32_t,
            comms::option::def::HasName,
            comms::option::def::UnitsMillimeters
        >
    {
        using Base =
            comms::field::IntValue<
                cc_demo1::field::FieldBase<>,
                std::int32_t,
                comms::option::def::HasName,
                comms::option::def::UnitsMillimeters
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_demo1::message::ScaledIntsFieldsCommon::HeightCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_demo1::message::ScaledIntsFieldsCommon::HeightCommon::name();
        }
    };

    /// @brief Definition of <b>"Some Scaled Value"</b> field.
    /// @details
    ///     Some scaled value without units.
    class SomeScaledVal : public
        comms::field::IntValue<
            cc_demo1::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::HasName,
            comms::option::def::ScalingRatio<1, 100>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_demo1::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::HasName,
                comms::option::def::ScalingRatio<1, 100>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_demo1::message::ScaledIntsFieldsCommon::SomeScaledValCommon::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 2U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_demo1::message::ScaledIntsFieldsCommon::SomeScaledValCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Lat,
        Lon,
        Height,
        SomeScaledVal
    >;
};

/// @brief Definition of <b>"Scaled Ints"</b> message class.
/// @details
///     See @ref ScaledIntsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_demo1/message/ScaledInts.h
template <typename TMsgBase, typename TOpt = cc_demo1::options::DefaultOptions>
class ScaledInts : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::ScaledInts,
        comms::option::def::StaticNumIdImpl<cc_demo1::MsgId_ScaledInts>,
        comms::option::def::FieldsImpl<typename ScaledIntsFields<TOpt>::All>,
        comms::option::def::MsgType<ScaledInts<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::ScaledInts,
            comms::option::def::StaticNumIdImpl<cc_demo1::MsgId_ScaledInts>,
            comms::option::def::FieldsImpl<typename ScaledIntsFields<TOpt>::All>,
            comms::option::def::MsgType<ScaledInts<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_lat index, @b Field_lat type and @b field_lat() access fuction
    ///         for @ref ScaledIntsFields::Lat field.
    ///     @li @b FieldIdx_lon index, @b Field_lon type and @b field_lon() access fuction
    ///         for @ref ScaledIntsFields::Lon field.
    ///     @li @b FieldIdx_height index, @b Field_height type and @b field_height() access fuction
    ///         for @ref ScaledIntsFields::Height field.
    ///     @li @b FieldIdx_someScaledVal index, @b Field_someScaledVal type and @b field_someScaledVal() access fuction
    ///         for @ref ScaledIntsFields::SomeScaledVal field.
    COMMS_MSG_FIELDS_NAMES(
        lat,
        lon,
        height,
        someScaledVal
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_demo1::message::ScaledIntsCommon::name();
    }
};

} // namespace message

} // namespace cc_demo1
