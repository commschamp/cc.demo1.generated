// Generated by commsdsl2comms v6.3.4

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_demo1::field::PropRemLen field.

#pragma once

#include <cstdint>

namespace cc_demo1
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_demo1::field::PropRemLen field.
struct PropRemLenCommon
{
    /// @brief Re-definition of the value type used by
    ///     cc_demo1::field::PropRemLen field.
    using ValueType = std::uint16_t;

    /// @brief Name of the @ref cc_demo1::field::PropRemLen field.
    static const char* name()
    {
        return "Length";
    }

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return false;
    }
};

} // namespace field

} // namespace cc_demo1
