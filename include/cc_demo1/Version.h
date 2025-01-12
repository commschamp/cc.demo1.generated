// Generated by commsdsl2comms v7.0.0

/// @file
/// @brief Contains protocol version definition.

#pragma once

#include "comms/version.h"

/// @brief Version of the protocol specification.
#define CC_DEMO1_SPEC_VERSION (0U)

/// @brief Major version of the protocol library.
#define CC_DEMO1_MAJOR_VERSION (3)

/// @brief Minor version of the protocol library.
#define CC_DEMO1_MINOR_VERSION (0)

/// @brief Patch version of the protocol library.
#define CC_DEMO1_PATCH_VERSION (0)

/// @brief Full version of the protocol library as single number.
#define CC_DEMO1_VERSION (COMMS_MAKE_VERSION(CC_DEMO1_MAJOR_VERSION, CC_DEMO1_MINOR_VERSION, CC_DEMO1_PATCH_VERSION))

namespace cc_demo1
{

/// @brief Version of the protocol specification.
inline constexpr unsigned specVersion()
{
    return CC_DEMO1_SPEC_VERSION;
}

/// @brief Major version of the protocol library
inline constexpr unsigned versionMajor()
{
    return CC_DEMO1_MAJOR_VERSION;
}

/// @brief Minor version of the protocol library
inline constexpr unsigned versionMinor()
{
    return CC_DEMO1_MINOR_VERSION;
}

/// @brief Patch version of the protocol library
inline constexpr unsigned versionPatch()
{
    return CC_DEMO1_PATCH_VERSION;
}

/// @brief Full version of the protocol library as a single number
inline constexpr unsigned version()
{
    return CC_DEMO1_VERSION;
}

} // namespace cc_demo1

// Generated compile time check for minimal supported version of the COMMS library
static_assert(COMMS_MAKE_VERSION(5, 3, 0) <= comms::version(),
    "The version of COMMS library is too old");
