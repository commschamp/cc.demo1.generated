// Generated by commsdsl2comms v6.2.1

/// @file
/// @brief Contains definition of protocol server input messages dynamic memory allocation message factory options.

#pragma once

#include "cc_demo1/factory/ServerInputMessagesDynMemMsgFactory.h"
#include "cc_demo1/options/DefaultOptions.h"

namespace cc_demo1
{

namespace options
{

/// @brief Provided server input messages dynamic memory allocation message factory options of the protocol.
/// @details Must be used as the outermost wrapper of the protocol options.
template <typename TBase = cc_demo1::options::DefaultOptions>
struct ServerInputMessagesDynMemMsgFactoryDefaultOptionsT : public TBase
{
    /// @brief Alias to @ref cc_demo1::factory::ServerInputMessagesDynMemMsgFactory message factory.
    /// @details Exposes the same template parameters as @b comms::MsgFactory.
    template <typename TInterface, typename TAllMessages, typename... TOptions>
    using MsgFactory = cc_demo1::factory::ServerInputMessagesDynMemMsgFactory<TInterface, ServerInputMessagesDynMemMsgFactoryDefaultOptionsT<TBase> >;

    /// @brief Extra options for frames.
    struct frame : public TBase::frame
    {
        /// @brief Extra options for layers of
        ///     @ref cc_demo1::frame::Frame frame.
        struct FrameLayers : public TBase::frame::FrameLayers
        {
            /// @brief Extra options for @ref
            ///     cc_demo1::frame::FrameLayers::Id layer.
            using Id =
                std::tuple<
                    comms::option::app::MsgFactoryTempl<MsgFactory>,
                    typename TBase::frame::FrameLayers::Id
                >;
        }; // struct FrameLayers
    }; // struct frame
};

/// @brief Alias to @ref ServerInputMessagesDynMemMsgFactoryDefaultOptionsT with default template parameter.
using ServerInputMessagesDynMemMsgFactoryDefaultOptions = ServerInputMessagesDynMemMsgFactoryDefaultOptionsT<>;

} // namespace options

} // namespace cc_demo1
