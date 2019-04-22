/// @file
/// @brief Contains definition of <b>"Ack"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "demo1/MsgId.h"
#include "demo1/field/FieldBase.h"
#include "demo1/field/MsgId.h"
#include "demo1/options/DefaultOptions.h"

namespace demo1
{

namespace message
{

/// @brief Fields of @ref Ack.
/// @tparam TOpt Extra options
/// @see @ref Ack
/// @headerfile "demo1/message/Ack.h"
template <typename TOpt = demo1::options::DefaultOptions>
struct AckFields
{
    /// @brief Definition of <b>"MsgId"</b> field.
    using MsgId =
        demo1::field::MsgId<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        MsgId
    >;
};

/// @brief Definition of <b>"Ack"</b> message class.
/// @details
///     See @ref AckFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "demo1/message/Ack.h"
template <typename TMsgBase, typename TOpt = demo1::options::DefaultOptions>
class Ack : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Ack,
        comms::option::StaticNumIdImpl<demo1::MsgId_Ack>,
        comms::option::FieldsImpl<typename AckFields<TOpt>::All>,
        comms::option::MsgType<Ack<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Ack,
            comms::option::StaticNumIdImpl<demo1::MsgId_Ack>,
            comms::option::FieldsImpl<typename AckFields<TOpt>::All>,
            comms::option::MsgType<Ack<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_msgId() for @ref AckFields::MsgId field.
    COMMS_MSG_FIELDS_ACCESS(
        msgId
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 1U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 1U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "Ack";
    }
    
    
};

} // namespace message

} // namespace demo1


