// Generated by commsdsl2comms v6.2.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_demo1::field::Lat field.

#pragma once

#include <cstdint>

namespace cc_demo1
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_demo1::field::Lat field.
struct LatCommon
{
    /// @brief Re-definition of the value type used by
    ///     cc_demo1::field::Lat field.
    using ValueType = std::int32_t;

    /// @brief Name of the @ref cc_demo1::field::Lat field.
    static const char* name()
    {
        return "Lat";
    }

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return false;
    }
};

} // namespace field

} // namespace cc_demo1
