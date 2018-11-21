/// @file
/// @brief Contains definition of all client input messages bundle.

#pragma once

#include <tuple>
#include "demo1/DefaultOptions.h"
#include "demo1/message/Ack.h"

namespace demo1
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = demo1::DefaultOptions>
using ClientInputMessages =
    std::tuple<
        demo1::message::Ack<TBase, TOpt>
    >;

} // namespace demo1


