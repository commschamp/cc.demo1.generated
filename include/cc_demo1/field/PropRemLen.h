// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"Length"</b> field.

#pragma once

#include <cstdint>
#include "cc_demo1/field/FieldBase.h"
#include "cc_demo1/field/PropRemLenCommon.h"
#include "cc_demo1/options/DefaultOptions.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_demo1
{

namespace field
{

/// @brief Definition of <b>"Length"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_demo1::options::DefaultOptions, typename... TExtraOpts>
class PropRemLen : public
    comms::field::IntValue<
        cc_demo1::field::FieldBase<>,
        std::uint16_t,
        TExtraOpts...
    >
{
    using Base =
        comms::field::IntValue<
            cc_demo1::field::FieldBase<>,
            std::uint16_t,
            TExtraOpts...
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return cc_demo1::field::PropRemLenCommon::hasSpecials();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_demo1::field::PropRemLenCommon::name();
    }
};

} // namespace field

} // namespace cc_demo1
