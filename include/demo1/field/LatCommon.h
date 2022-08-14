// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref demo1::field::Lat field.

#pragma once

#include <cstdint>

namespace demo1
{

namespace field
{

/// @brief Common types and functions for
///     @ref demo1::field::Lat field.
struct LatCommon
{
    /// @brief Re-definition of the value type used by
    ///     demo1::field::Lat field.
    using ValueType = std::int32_t;

    /// @brief Name of the @ref demo1::field::Lat field.
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

} // namespace demo1
