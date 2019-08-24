/// @file
/// @brief Contains protocol version definition.

#pragma once

#include "comms/version.h"

/// @brief Version of the protocol specification.
#define DEMO1_SPEC_VERSION (0U)

/// @brief Major version of the protocol library.
#define DEMO1_MAJOR_VERSION (0U)

/// @brief Minor version of the protocol library.
#define DEMO1_MINOR_VERSION (10U)

/// @brief Patch version of the protocol library.
#define DEMO1_PATCH_VERSION (0U)

/// @brief Full version of the protocol library as single number.
#define DEMO1_VERSION (COMMS_MAKE_VERSION(DEMO1_MAJOR_VERSION, DEMO1_MINOR_VERSION, DEMO1_PATCH_VERSION))


namespace demo1
{

/// @brief Version of the protocol specification.
inline constexpr unsigned specVersion()
{
    return DEMO1_SPEC_VERSION;
}

/// @brief Major version of the protocol library
inline constexpr unsigned versionMajor()
{
    return DEMO1_MAJOR_VERSION;
}

/// @brief Minor version of the protocol library
inline constexpr unsigned versionMinor()
{
    return DEMO1_MINOR_VERSION;
}

/// @brief Patch version of the protocol library
inline constexpr unsigned versionPatch()
{
    return DEMO1_PATCH_VERSION;
}

/// @brief Full version of the protocol library as single number
inline constexpr unsigned version()
{
    return DEMO1_VERSION;
}


} // namespace demo1


// Generated compile time check for minimal supported version of the COMMS library
static_assert(COMMS_MAKE_VERSION(2, 0, 2) <= comms::version(),
    "The version of COMMS library is too old");

