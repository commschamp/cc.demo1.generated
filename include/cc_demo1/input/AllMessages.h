// Generated by commsdsl2comms v6.1.0

/// @file
/// @brief Contains definition of the AllMessages messages bundle.

#pragma once

#include <tuple>
#include "cc_demo1/message/Ack.h"
#include "cc_demo1/message/Bitfields.h"
#include "cc_demo1/message/Datas.h"
#include "cc_demo1/message/Enums.h"
#include "cc_demo1/message/Floats.h"
#include "cc_demo1/message/Lists.h"
#include "cc_demo1/message/Optionals.h"
#include "cc_demo1/message/ScaledInts.h"
#include "cc_demo1/message/Sets.h"
#include "cc_demo1/message/SimpleInts.h"
#include "cc_demo1/message/Strings.h"
#include "cc_demo1/message/Variants.h"
#include "cc_demo1/options/DefaultOptions.h"

namespace cc_demo1
{

namespace input
{

/// @brief All messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = cc_demo1::options::DefaultOptions>
using AllMessages =
    std::tuple<
        cc_demo1::message::Ack<TBase, TOpt>,
        cc_demo1::message::SimpleInts<TBase, TOpt>,
        cc_demo1::message::ScaledInts<TBase, TOpt>,
        cc_demo1::message::Floats<TBase, TOpt>,
        cc_demo1::message::Enums<TBase, TOpt>,
        cc_demo1::message::Sets<TBase, TOpt>,
        cc_demo1::message::Bitfields<TBase, TOpt>,
        cc_demo1::message::Strings<TBase, TOpt>,
        cc_demo1::message::Datas<TBase, TOpt>,
        cc_demo1::message::Lists<TBase, TOpt>,
        cc_demo1::message::Optionals<TBase, TOpt>,
        cc_demo1::message::Variants<TBase, TOpt>
    >;

} // namespace input

} // namespace cc_demo1

/// @brief Create type aliases for the all messages of the protocol.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
/// @param opts_ Type of the used protocol definition options.
#define CC_DEMO1_ALIASES_FOR_ALL_MESSAGES(prefix_, suffix_, interface_, opts_) \
    using prefix_ ## Ack ## suffix_ = cc_demo1::message::Ack<interface_, opts_>; \
    using prefix_ ## SimpleInts ## suffix_ = cc_demo1::message::SimpleInts<interface_, opts_>; \
    using prefix_ ## ScaledInts ## suffix_ = cc_demo1::message::ScaledInts<interface_, opts_>; \
    using prefix_ ## Floats ## suffix_ = cc_demo1::message::Floats<interface_, opts_>; \
    using prefix_ ## Enums ## suffix_ = cc_demo1::message::Enums<interface_, opts_>; \
    using prefix_ ## Sets ## suffix_ = cc_demo1::message::Sets<interface_, opts_>; \
    using prefix_ ## Bitfields ## suffix_ = cc_demo1::message::Bitfields<interface_, opts_>; \
    using prefix_ ## Strings ## suffix_ = cc_demo1::message::Strings<interface_, opts_>; \
    using prefix_ ## Datas ## suffix_ = cc_demo1::message::Datas<interface_, opts_>; \
    using prefix_ ## Lists ## suffix_ = cc_demo1::message::Lists<interface_, opts_>; \
    using prefix_ ## Optionals ## suffix_ = cc_demo1::message::Optionals<interface_, opts_>; \
    using prefix_ ## Variants ## suffix_ = cc_demo1::message::Variants<interface_, opts_>;

/// @brief Create type aliases for the all messages of the protocol using default options.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
#define CC_DEMO1_ALIASES_FOR_ALL_MESSAGES_DEFAULT_OPTIONS(prefix_, suffix_, interface_) \
    CC_DEMO1_ALIASES_FOR_ALL_MESSAGES(prefix_, suffix_, interface_, cc_demo1::options::DefaultOptions)
