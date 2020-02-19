// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref demo1::field::Lon field.

#pragma once

#include <cstdint>

namespace demo1
{

namespace field
{

/// @brief Common types and functions for
///     @ref demo1::field::Lon field.
struct LonCommon
{
    /// @brief Re-definition of the value type used by
    ///     demo1::field::Lon field.
    using ValueType = std::int32_t;

    /// @brief Name of the @ref demo1::field::Lon field.
    static const char* name()
    {
        return "Lon";
    }
    
};

} // namespace field

} // namespace demo1


