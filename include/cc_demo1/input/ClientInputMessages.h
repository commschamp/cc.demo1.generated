// Generated by commsdsl2comms v7.1.0

/// @file
/// @brief Contains definition of the ClientInputMessages messages bundle.

#pragma once

#include <tuple>
#include "cc_demo1/message/Ack.h"
#include "cc_demo1/options/DefaultOptions.h"

namespace cc_demo1
{

namespace input
{

/// @brief Client input messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = cc_demo1::options::DefaultOptions>
using ClientInputMessages =
    std::tuple<
        cc_demo1::message::Ack<TBase, TOpt>
    >;

} // namespace input

} // namespace cc_demo1

/// @brief Create type aliases for the client input messages of the protocol.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
/// @param opts_ Type of the used protocol definition options.
#define CC_DEMO1_ALIASES_FOR_CLIENT_INPUT_MESSAGES(prefix_, suffix_, interface_, opts_) \
    using prefix_ ## Ack ## suffix_ = cc_demo1::message::Ack<interface_, opts_>;

/// @brief Create type aliases for the client input messages of the protocol using default options.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
#define CC_DEMO1_ALIASES_FOR_CLIENT_INPUT_MESSAGES_DEFAULT_OPTIONS(prefix_, suffix_, interface_) \
    CC_DEMO1_ALIASES_FOR_CLIENT_INPUT_MESSAGES(prefix_, suffix_, interface_, cc_demo1::options::DefaultOptions)
