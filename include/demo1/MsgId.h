/// @file
/// @brief Contains definition of message ids enumeration.

#pragma once

#include <cstdint>
#include "demo1/Version.h"

namespace demo1
{

/// @brief Message ids enumeration.
enum MsgId : std::uint8_t
{
    MsgId_Ack = 0, ///< message id of @b Ack message.
    MsgId_SimpleInts = 1, ///< message id of @b SimpleInts message.
    MsgId_ScaledInts = 2, ///< message id of @b ScaledInts message.
    MsgId_Floats = 3, ///< message id of @b Floats message.
    MsgId_Enums = 4, ///< message id of @b Enums message.
    MsgId_Sets = 5, ///< message id of @b Sets message.
    MsgId_Bitfields = 6, ///< message id of @b Bitfields message.
    MsgId_Strings = 7, ///< message id of @b Strings message.
    MsgId_Datas = 8, ///< message id of @b Datas message.
    MsgId_Lists = 9, ///< message id of @b Lists message.
    MsgId_Optionals = 10, ///< message id of @b Optionals message.
    MsgId_Variants = 11, ///< message id of @b Variants message.
    
};

} // namespace demo1


