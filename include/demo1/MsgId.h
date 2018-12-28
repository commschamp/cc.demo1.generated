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
    MsgId_Ack = 0, ///< message id @b Ack
    MsgId_SimpleInts = 1, ///< message id @b SimpleInts
    MsgId_ScaledInts = 2, ///< message id @b ScaledInts
    MsgId_Floats = 3, ///< message id @b Floats
    MsgId_Enums = 4, ///< message id @b Enums
    MsgId_Sets = 5, ///< message id @b Sets
    MsgId_Bitfields = 6, ///< message id @b Bitfields
    MsgId_Strings = 7, ///< message id @b Strings
    MsgId_Datas = 8, ///< message id @b Datas
    MsgId_Lists = 9, ///< message id @b Lists
    MsgId_Optionals = 10, ///< message id @b Optionals
    MsgId_Variants = 11, ///< message id @b Variants
    
};

} // namespace demo1


