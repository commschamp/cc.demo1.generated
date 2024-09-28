// Generated by commsdsl2comms v6.3.4

/// @file
/// @brief Contains definition of <b>"Lon"</b> field.

#pragma once

#include <cstdint>
#include "cc_demo1/field/FieldBase.h"
#include "cc_demo1/field/LonCommon.h"
#include "cc_demo1/options/DefaultOptions.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_demo1
{

namespace field
{

/// @brief Definition of <b>"Lon"</b> field.
/// @details
///     Longitude in 1/10^7 of the degrees
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_demo1::options::DefaultOptions, typename... TExtraOpts>
class Lon : public
    comms::field::IntValue<
        cc_demo1::field::FieldBase<>,
        std::int32_t,
        TExtraOpts...,
        comms::option::def::ScalingRatio<1, 10000000L>,
        comms::option::def::UnitsDegrees
    >
{
    using Base =
        comms::field::IntValue<
            cc_demo1::field::FieldBase<>,
            std::int32_t,
            TExtraOpts...,
            comms::option::def::ScalingRatio<1, 10000000L>,
            comms::option::def::UnitsDegrees
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return cc_demo1::field::LonCommon::hasSpecials();
    }

    /// @brief Requested number of digits after decimal point when value
    ///     is displayed.
    static constexpr unsigned displayDecimals()
    {
        return 7U;
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_demo1::field::LonCommon::name();
    }
};

} // namespace field

} // namespace cc_demo1
