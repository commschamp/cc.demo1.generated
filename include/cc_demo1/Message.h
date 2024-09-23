// Generated by commsdsl2comms v6.3.4

/// @file
/// @brief Contains definition of <b>"Message"</b> interface class.

#pragma once

#include "cc_demo1/MsgId.h"
#include "comms/Message.h"
#include "comms/options.h"

namespace cc_demo1
{

/// @brief Definition of <b>"Message"</b> common interface class.
/// @tparam TOpt Interface definition options
/// @headerfile cc_demo1/Message.h
template <typename... TOpt>
using Message =
    comms::Message<
        TOpt...,
        comms::option::def::BigEndian,
        comms::option::def::MsgIdType<cc_demo1::MsgId>
    >;

} // namespace cc_demo1
