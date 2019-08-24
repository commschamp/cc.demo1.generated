/// @file
/// @brief Contains definition of <b>"MsgId"</b> field.

#pragma once

#include <cstdint>
#include <type_traits>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "demo1/MsgId.h"
#include "demo1/field/FieldBase.h"
#include "demo1/options/DefaultOptions.h"

namespace demo1
{

namespace field
{

/// @brief Common functions for
///     @ref demo1::field::MsgId field.
struct MsgIdCommon
{
    /// @brief Retrieve name of the enum value
    static const char* valueName(demo1::MsgId val)
    {
        static const char* Map[] = {
            "Ack",
            "SimpleInts",
            "ScaledInts",
            "Floats",
            "Enums",
            "Sets",
            "Bitfields",
            "Strings",
            "Datas",
            "Lists",
            "Optionals",
            "Variants"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Definition of <b>"MsgId"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = demo1::options::DefaultOptions, typename... TExtraOpts>
struct MsgId : public
    comms::field::EnumValue<
        demo1::field::FieldBase<>,
        demo1::MsgId,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 11>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "MsgId";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(demo1::MsgId val)
    {
        return demo1::field::MsgIdCommon::valueName(val);
    }
    
};

} // namespace field

} // namespace demo1


