// Generated by commsdsl2comms v7.1.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_demo1::message::Ack message and its fields.

#pragma once

#include "cc_demo1/field/MsgIdCommon.h"

namespace cc_demo1
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_demo1::message::Ack message.
/// @see cc_demo1::message::AckFields
struct AckFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::AckFields::MsgId field.
    using MsgIdCommon = cc_demo1::field::MsgIdCommon;
};

/// @brief Common types and functions of 
///     @ref cc_demo1::message::Ack message.
struct AckCommon
{
    /// @brief Name of the @ref cc_demo1::message::Ack message.
    static const char* name()
    {
        return "Ack";
    }
};

} // namespace message

} // namespace cc_demo1
