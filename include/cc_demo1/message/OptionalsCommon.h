// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_demo1::message::Optionals message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>

namespace cc_demo1
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_demo1::message::Optionals message.
/// @see cc_demo1::message::OptionalsFields
struct OptionalsFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::OptionalsFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref cc_demo1::message::OptionalsFields::Flags field.
        static const char* name()
        {
            return "Flags";
        }

        /// @brief Retrieve name of the bit of
        ///     @ref cc_demo1::message::OptionalsFields::Flags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "F2Exists",
                "F3Missing"
            };

            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }

            return Map[idx];
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_demo1::message::OptionalsFields::F2 field.
    struct F2MembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_demo1::message::OptionalsFields::F2Members::F2 field.
        struct F2Common
        {
            /// @brief Re-definition of the value type used by
            ///     cc_demo1::message::OptionalsFields::F2Members::F2 field.
            using ValueType = std::uint16_t;

            /// @brief Name of the @ref cc_demo1::message::OptionalsFields::F2Members::F2 field.
            static const char* name()
            {
                return "F2";
            }

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return false;
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::OptionalsFields::F2 field.
    struct F2Common
    {
        /// @brief Name of the @ref cc_demo1::message::OptionalsFields::F2 field.
        static const char* name()
        {
            return "F2";
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_demo1::message::OptionalsFields::F3 field.
    struct F3MembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_demo1::message::OptionalsFields::F3Members::F3 field.
        struct F3Common
        {
            /// @brief Re-definition of the value type used by
            ///     cc_demo1::message::OptionalsFields::F3Members::F3 field.
            using ValueType = std::uint16_t;

            /// @brief Name of the @ref cc_demo1::message::OptionalsFields::F3Members::F3 field.
            static const char* name()
            {
                return "F3";
            }

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return false;
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::OptionalsFields::F3 field.
    struct F3Common
    {
        /// @brief Name of the @ref cc_demo1::message::OptionalsFields::F3 field.
        static const char* name()
        {
            return "F3";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_demo1::message::Optionals message.
struct OptionalsCommon
{
    /// @brief Name of the @ref cc_demo1::message::Optionals message.
    static const char* name()
    {
        return "Optionals";
    }
};

} // namespace message

} // namespace cc_demo1
