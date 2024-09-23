// Generated by commsdsl2comms v6.3.4

/// @file
/// @brief Contains message factory with dynamic memory allocation for the server input messages.

#pragma once

#include <memory>
#include "cc_demo1/input/ServerInputMessages.h"
#include "comms/MsgFactoryCreateFailureReason.h"

namespace cc_demo1
{

namespace factory
{

/// @brief Message factory with dynamic memory allocation for the server input messages.
/// @details Defines the same public interface as @b comms::MsgFactory and intended for
///     its replacement.
/// @tparam TInterface Interface class of the messages.
/// @tparam TProtOptions Application specific protocol definition options.
template<typename TInterface, typename TProtOptions>
class ServerInputMessagesDynMemMsgFactory
{
public:
    /// @brief Type of the common base class of all the messages.
    using Message = TInterface;

    /// @brief Type of the message ID when passed as a parameter.
    using MsgIdParamType = typename Message::MsgIdParamType;

    /// @brief Type of the message ID.
    using MsgIdType = typename Message::MsgIdType;

    /// @brief Smart pointer to @ref Message which holds allocated message object.
    using MsgPtr = std::unique_ptr<Message>;

    /// @brief Reason for message creation failure
    using CreateFailureReason = comms::MsgFactoryCreateFailureReason;

    /// @brief Type of generic message.
    /// @details Not supported
    using GenericMessage = void;

    /// @brief Create message object given the ID of the message.
    /// @param id ID of the message.
    /// @param idx Relative index (or offset) of the message with the same ID.
    /// @param[out] reason Failure reason in case creation has failed.
    MsgPtr createMsg(MsgIdParamType id, unsigned idx = 0U, CreateFailureReason* reason = nullptr) const
    {
        auto updateReasonFunc =
            [reason](CreateFailureReason val)
            {
                if (reason != nullptr) {
                    *reason = val;
                }
            };

        if (1U <= idx) {
            updateReasonFunc(CreateFailureReason::InvalidId);
            return MsgPtr();
        }

        updateReasonFunc(CreateFailureReason::None);
        switch (id) {
            case cc_demo1::MsgId_SimpleInts: return MsgPtr(new cc_demo1::message::SimpleInts<TInterface, TProtOptions>);
            case cc_demo1::MsgId_ScaledInts: return MsgPtr(new cc_demo1::message::ScaledInts<TInterface, TProtOptions>);
            case cc_demo1::MsgId_Floats: return MsgPtr(new cc_demo1::message::Floats<TInterface, TProtOptions>);
            case cc_demo1::MsgId_Enums: return MsgPtr(new cc_demo1::message::Enums<TInterface, TProtOptions>);
            case cc_demo1::MsgId_Sets: return MsgPtr(new cc_demo1::message::Sets<TInterface, TProtOptions>);
            case cc_demo1::MsgId_Bitfields: return MsgPtr(new cc_demo1::message::Bitfields<TInterface, TProtOptions>);
            case cc_demo1::MsgId_Strings: return MsgPtr(new cc_demo1::message::Strings<TInterface, TProtOptions>);
            case cc_demo1::MsgId_Datas: return MsgPtr(new cc_demo1::message::Datas<TInterface, TProtOptions>);
            case cc_demo1::MsgId_Lists: return MsgPtr(new cc_demo1::message::Lists<TInterface, TProtOptions>);
            case cc_demo1::MsgId_Optionals: return MsgPtr(new cc_demo1::message::Optionals<TInterface, TProtOptions>);
            case cc_demo1::MsgId_Variants: return MsgPtr(new cc_demo1::message::Variants<TInterface, TProtOptions>);
            default: break;
        }

        updateReasonFunc(CreateFailureReason::InvalidId);
        return MsgPtr();
    }

    /// @brief Allocate and initialise @b comms::GenericMessage object.
    MsgPtr createGenericMsg(MsgIdParamType id, unsigned idx = 0U) const
    {
        static_cast<void>(id);
        static_cast<void>(idx);
        return MsgPtr();
    }

    /// @brief Inquiry whether allocation is possible
    bool canAllocate() const
    {
        return true;
    }

    /// @brief Get number of message types that have the specified ID.
    /// @param id ID of the message.
    /// @return Number of message classes that report same ID.
    std::size_t msgCount(MsgIdParamType id) const
    {
        switch (id)
        {
            case cc_demo1::MsgId_SimpleInts: return 1U;
            case cc_demo1::MsgId_ScaledInts: return 1U;
            case cc_demo1::MsgId_Floats: return 1U;
            case cc_demo1::MsgId_Enums: return 1U;
            case cc_demo1::MsgId_Sets: return 1U;
            case cc_demo1::MsgId_Bitfields: return 1U;
            case cc_demo1::MsgId_Strings: return 1U;
            case cc_demo1::MsgId_Datas: return 1U;
            case cc_demo1::MsgId_Lists: return 1U;
            case cc_demo1::MsgId_Optionals: return 1U;
            case cc_demo1::MsgId_Variants: return 1U;
            default: break;
        }

        return 0U;
    }

    /// @brief Compile time inquiry whether all the message classes have unique IDs.
    static constexpr bool hasUniqueIds()
    {
        return true;
    }

    /// @brief Compile time inquiry whether polymorphic dispatch tables are
    ///     generated internally to map message ID to actual type.
    static constexpr bool isDispatchPolymorphic()
    {
        return false;
    }

    /// @brief Compile time inquiry whether static binary search dispatch is
    ///     generated internally to map message ID to actual type.
    static constexpr bool isDispatchStaticBinSearch()
    {
        return false;
    }

    /// @brief Compile time inquiry whether linear switch dispatch is
    ///     generated internally to map message ID to actual type.
    static constexpr bool isDispatchLinearSwitch()
    {
        return false;
    }

    /// @brief Compile time inquiry whether factory supports in-place allocation
    static constexpr bool hasInPlaceAllocation()
    {
        return false;
    }

    /// @brief Compile time inquiry whether factory supports @b comms::GenericMessage allocation.
    static constexpr bool hasGenericMessageSupport()
    {
        return false;
    }

    /// @brief Compile time inquiry whether factory has forced dispatch method
    static constexpr bool hasForcedDispatch()
    {
        return true;
    }
};

} // namespace factory

} // namespace cc_demo1
