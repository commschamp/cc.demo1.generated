/// @file
/// @brief Contains definition of protocol default options for server.

#pragma once

#include "DefaultOptions.h"

namespace demo1
{

/// @brief Default options of the protocol specific for a server.
struct ServerDefaultOptions
{
    /// @brief Extra options for messages.
    struct message : public DefaultOptions::message
    {
        /// @brief Extra options for @ref demo1::message::Ack message.
        using Ack =
            std::tuple<
                comms::option::NoReadImpl,
                comms::option::NoDispatchImpl
            >;
        
        /// @brief Extra options for @ref demo1::message::Bitfields message.
        using Bitfields =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref demo1::message::Datas message.
        using Datas =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref demo1::message::Enums message.
        using Enums =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref demo1::message::Floats message.
        using Floats =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref demo1::message::Lists message.
        using Lists =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref demo1::message::Optionals message.
        using Optionals =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref demo1::message::ScaledInts message.
        using ScaledInts =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref demo1::message::Sets message.
        using Sets =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref demo1::message::SimpleInts message.
        using SimpleInts =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref demo1::message::Strings message.
        using Strings =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref demo1::message::Variants message.
        using Variants =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
    };
    
};

} // namespace demo1


