// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of protocol server default options.

#pragma once

#include "demo1/options/DefaultOptions.h"

namespace demo1
{

namespace options
{

/// @brief Default server options of the protocol.
template <typename TBase = demo1::options::DefaultOptions>
struct ServerDefaultOptionsT : public TBase
{
    /// @brief Extra options for messages.
    struct message : public TBase::message
    {
        /// @brief Extra options for @ref
        ///     demo1::message::Ack message.
        using Ack =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Ack
            >;
        
        /// @brief Extra options for @ref
        ///     demo1::message::Bitfields message.
        using Bitfields =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Bitfields
            >;
        
        /// @brief Extra options for @ref
        ///     demo1::message::Datas message.
        using Datas =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Datas
            >;
        
        /// @brief Extra options for @ref
        ///     demo1::message::Enums message.
        using Enums =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Enums
            >;
        
        /// @brief Extra options for @ref
        ///     demo1::message::Floats message.
        using Floats =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Floats
            >;
        
        /// @brief Extra options for @ref
        ///     demo1::message::Lists message.
        using Lists =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Lists
            >;
        
        /// @brief Extra options for @ref
        ///     demo1::message::Optionals message.
        using Optionals =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Optionals
            >;
        
        /// @brief Extra options for @ref
        ///     demo1::message::ScaledInts message.
        using ScaledInts =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::ScaledInts
            >;
        
        /// @brief Extra options for @ref
        ///     demo1::message::Sets message.
        using Sets =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Sets
            >;
        
        /// @brief Extra options for @ref
        ///     demo1::message::SimpleInts message.
        using SimpleInts =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::SimpleInts
            >;
        
        /// @brief Extra options for @ref
        ///     demo1::message::Strings message.
        using Strings =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Strings
            >;
        
        /// @brief Extra options for @ref
        ///     demo1::message::Variants message.
        using Variants =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Variants
            >;
        
    }; // struct message
    
    
};

/// @brief Alias to @ref ServerDefaultOptionsT with default template parameter.
using ServerDefaultOptions = ServerDefaultOptionsT<>;

} // namespace options

} // namespace demo1
