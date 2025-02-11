// Generated by commsdsl2comms v7.0.3

/// @file
/// @brief Contains definition of <b>"Lat"</b> field.

#pragma once

#include <cstdint>
#include "cc_demo1/field/FieldBase.h"
#include "cc_demo1/field/LatCommon.h"
#include "cc_demo1/options/DefaultOptions.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_demo1
{

namespace field
{

/// @brief Definition of <b>"Lat"</b> field.
/// @details
///     Latitude in 1/10^7 of the degrees
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_demo1::options::DefaultOptions, typename... TExtraOpts>
class Lat : public
    comms::field::IntValue<
        cc_demo1::field::FieldBase<>,
        std::int32_t,
        TExtraOpts...,
        comms::option::def::HasName,
        comms::option::def::ScalingRatio<1, 10000000L>,
        comms::option::def::UnitsDegrees
    >
{
    using Base =
        comms::field::IntValue<
            cc_demo1::field::FieldBase<>,
            std::int32_t,
            TExtraOpts...,
            comms::option::def::HasName,
            comms::option::def::ScalingRatio<1, 10000000L>,
            comms::option::def::UnitsDegrees
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return cc_demo1::field::LatCommon::hasSpecials();
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
        return cc_demo1::field::LatCommon::name();
    }
};

} // namespace field

} // namespace cc_demo1
