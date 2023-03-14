// Generated by commsdsl2comms v6.0.0

/// @file
/// @brief Contains definition of <b>"Floats"</b> message and its fields.

#pragma once

#include <cmath>
#include <limits>
#include <tuple>
#include "cc_demo1/MsgId.h"
#include "cc_demo1/field/FieldBase.h"
#include "cc_demo1/message/FloatsCommon.h"
#include "cc_demo1/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/FloatValue.h"
#include "comms/options.h"

namespace cc_demo1
{

namespace message
{

/// @brief Fields of @ref Floats.
/// @tparam TOpt Extra options
/// @see @ref Floats
/// @headerfile cc_demo1/message/Floats.h
template <typename TOpt = cc_demo1::options::DefaultOptions>
struct FloatsFields
{
    /// @brief Definition of <b>"Timeout"</b> field.
    class Timeout : public
        comms::field::FloatValue<
            cc_demo1::field::FieldBase<>,
            float,
            comms::option::def::UnitsSeconds
        >
    {
        using Base =
            comms::field::FloatValue<
                cc_demo1::field::FieldBase<>,
                float,
                comms::option::def::UnitsSeconds
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Single special value name info entry.
        using SpecialNameInfo = cc_demo1::message::FloatsFieldsCommon::TimeoutCommon::SpecialNameInfo;

        /// @brief Type returned from @ref specialNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using SpecialNamesMapInfo = cc_demo1::message::FloatsFieldsCommon::TimeoutCommon::SpecialNamesMapInfo;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_demo1::message::FloatsFieldsCommon::TimeoutCommon::hasSpecials();
        }

        /// @brief Special value <b>"Infinite"</b>.
        /// @see @ref cc_demo1::message::FloatsFieldsCommon::TimeoutCommon::valueInfinite().
        static constexpr ValueType valueInfinite()
        {
            return cc_demo1::message::FloatsFieldsCommon::TimeoutCommon::valueInfinite();
        }

        /// @brief Check the value is equal to special @ref valueInfinite().
        bool isInfinite() const
        {
            return (std::abs(Base::getValue() - static_cast<ValueType>(0.000000)) < std::numeric_limits<ValueType>::epsilon());
        }

        /// @brief Assign special value @ref valueInfinite() to the field.
        void setInfinite()
        {
            Base::setValue(valueInfinite());
        }

        /// @brief Special value <b>"Invalid"</b>.
        /// @see @ref cc_demo1::message::FloatsFieldsCommon::TimeoutCommon::valueInvalid().
        static constexpr ValueType valueInvalid()
        {
            return cc_demo1::message::FloatsFieldsCommon::TimeoutCommon::valueInvalid();
        }

        /// @brief Check the value is equal to special @ref valueInvalid().
        bool isInvalid() const
        {
            return (std::isnan(Base::getValue()));
        }

        /// @brief Assign special value @ref valueInvalid() to the field.
        void setInvalid()
        {
            Base::setValue(valueInvalid());
        }

        /// @brief Retrieve map of special value names
        static SpecialNamesMapInfo specialNamesMap()
        {
            return cc_demo1::message::FloatsFieldsCommon::TimeoutCommon::specialNamesMap();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 0U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_demo1::message::FloatsFieldsCommon::TimeoutCommon::name();
        }
    };

    /// @brief Definition of <b>"Distance"</b> field.
    class Distance : public
        comms::field::FloatValue<
            cc_demo1::field::FieldBase<>,
            float,
            comms::option::def::UnitsMeters
        >
    {
        using Base =
            comms::field::FloatValue<
                cc_demo1::field::FieldBase<>,
                float,
                comms::option::def::UnitsMeters
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Single special value name info entry.
        using SpecialNameInfo = cc_demo1::message::FloatsFieldsCommon::DistanceCommon::SpecialNameInfo;

        /// @brief Type returned from @ref specialNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using SpecialNamesMapInfo = cc_demo1::message::FloatsFieldsCommon::DistanceCommon::SpecialNamesMapInfo;

        /// @brief Generated default constructor.
        Distance()
        {
            Base::setValue(std::numeric_limits<ValueType>::quiet_NaN());
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_demo1::message::FloatsFieldsCommon::DistanceCommon::hasSpecials();
        }

        /// @brief Special value <b>"Infinite"</b>.
        /// @see @ref cc_demo1::message::FloatsFieldsCommon::DistanceCommon::valueInfinite().
        static constexpr ValueType valueInfinite()
        {
            return cc_demo1::message::FloatsFieldsCommon::DistanceCommon::valueInfinite();
        }

        /// @brief Check the value is equal to special @ref valueInfinite().
        bool isInfinite() const
        {
            return ((0 < Base::getValue()) &&
                    (std::isinf(Base::getValue())));
        }

        /// @brief Assign special value @ref valueInfinite() to the field.
        void setInfinite()
        {
            Base::setValue(valueInfinite());
        }

        /// @brief Special value <b>"Invalid"</b>.
        /// @see @ref cc_demo1::message::FloatsFieldsCommon::DistanceCommon::valueInvalid().
        static constexpr ValueType valueInvalid()
        {
            return cc_demo1::message::FloatsFieldsCommon::DistanceCommon::valueInvalid();
        }

        /// @brief Check the value is equal to special @ref valueInvalid().
        bool isInvalid() const
        {
            return (std::isnan(Base::getValue()));
        }

        /// @brief Assign special value @ref valueInvalid() to the field.
        void setInvalid()
        {
            Base::setValue(valueInvalid());
        }

        /// @brief Retrieve map of special value names
        static SpecialNamesMapInfo specialNamesMap()
        {
            return cc_demo1::message::FloatsFieldsCommon::DistanceCommon::specialNamesMap();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 3U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_demo1::message::FloatsFieldsCommon::DistanceCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Timeout,
        Distance
    >;
};

/// @brief Definition of <b>"Floats"</b> message class.
/// @details
///     See @ref FloatsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_demo1/message/Floats.h
template <typename TMsgBase, typename TOpt = cc_demo1::options::DefaultOptions>
class Floats : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Floats,
        comms::option::def::StaticNumIdImpl<cc_demo1::MsgId_Floats>,
        comms::option::def::FieldsImpl<typename FloatsFields<TOpt>::All>,
        comms::option::def::MsgType<Floats<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Floats,
            comms::option::def::StaticNumIdImpl<cc_demo1::MsgId_Floats>,
            comms::option::def::FieldsImpl<typename FloatsFields<TOpt>::All>,
            comms::option::def::MsgType<Floats<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_timeout index, @b Field_timeout type and @b field_timeout() access fuction
    ///         for @ref FloatsFields::Timeout field.
    ///     @li @b FieldIdx_distance index, @b Field_distance type and @b field_distance() access fuction
    ///         for @ref FloatsFields::Distance field.
    COMMS_MSG_FIELDS_NAMES(
        timeout,
        distance
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_demo1::message::FloatsCommon::name();
    }
};

} // namespace message

} // namespace cc_demo1
