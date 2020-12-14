// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref demo1::message::Ack message and its fields.

#pragma once

#include "demo1/field/MsgIdCommon.h"

namespace demo1
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref demo1::message::Ack message.
/// @see demo1::message::AckFields
struct AckFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref demo1::message::AckFields::MsgId field.
    using MsgIdCommon = demo1::field::MsgIdCommon;
    
};

/// @brief Common types and functions of 
///     @ref demo1::message::Ack message.
/// @see demo1::message::Ack
struct AckCommon
{
    /// @brief Name of the @ref demo1::message::Ack message.
    static const char* name()
    {
        return "Ack";
    }
    
};

} // namespace message

} // namespace demo1


