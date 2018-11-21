/// @file
/// @brief Contains definition of <b>"MsgId"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "demo1/DefaultOptions.h"
#include "demo1/MsgId.h"
#include "demo1/field/FieldBase.h"

namespace demo1
{

namespace field
{

/// @brief Definition of <b>"MsgId"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = demo1::DefaultOptions, typename... TExtraOpts>
struct MsgId : public
    comms::field::EnumValue<
        demo1::field::FieldBase<>,
        demo1::MsgId,
        TExtraOpts...,
        comms::option::ValidNumValueRange<0, 11>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "MsgId";
    }
    
};

} // namespace field

} // namespace demo1


