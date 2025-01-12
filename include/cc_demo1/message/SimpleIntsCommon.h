// Generated by commsdsl2comms v7.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_demo1::message::SimpleInts message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include <utility>

namespace cc_demo1
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_demo1::message::SimpleInts message.
/// @see cc_demo1::message::SimpleIntsFields
struct SimpleIntsFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::SimpleIntsFields::F1 field.
    struct F1Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_demo1::message::SimpleIntsFields::F1 field.
        using ValueType = std::int8_t;

        /// @brief Single special value name info entry.
        using SpecialNameInfo = std::pair<ValueType, const char*>;

        /// @brief Type returned from @ref specialNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using SpecialNamesMapInfo = std::pair<const SpecialNameInfo*, std::size_t>;

        /// @brief Name of the @ref cc_demo1::message::SimpleIntsFields::F1 field.
        static const char* name()
        {
            return "F1";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return true;
        }

        /// @brief Special value <b>"S1"</b>.
        static constexpr ValueType valueS1()
        {
            return static_cast<ValueType>(1);
        }

        /// @brief Retrieve map of special value names
        static SpecialNamesMapInfo specialNamesMap()
        {
            static const SpecialNameInfo Map[] = {
                std::make_pair(valueS1(), "S1")
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::SimpleIntsFields::F2 field.
    struct F2Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_demo1::message::SimpleIntsFields::F2 field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_demo1::message::SimpleIntsFields::F2 field.
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

    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::SimpleIntsFields::F3 field.
    struct F3Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_demo1::message::SimpleIntsFields::F3 field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_demo1::message::SimpleIntsFields::F3 field.
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

    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::SimpleIntsFields::F4 field.
    struct F4Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_demo1::message::SimpleIntsFields::F4 field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_demo1::message::SimpleIntsFields::F4 field.
        static const char* name()
        {
            return "F4";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::SimpleIntsFields::F5 field.
    struct F5Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_demo1::message::SimpleIntsFields::F5 field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_demo1::message::SimpleIntsFields::F5 field.
        static const char* name()
        {
            return "F5";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::SimpleIntsFields::F6 field.
    struct F6Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_demo1::message::SimpleIntsFields::F6 field.
        using ValueType = std::uint32_t;

        /// @brief Single special value name info entry.
        using SpecialNameInfo = std::pair<ValueType, const char*>;

        /// @brief Type returned from @ref specialNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using SpecialNamesMapInfo = std::pair<const SpecialNameInfo*, std::size_t>;

        /// @brief Name of the @ref cc_demo1::message::SimpleIntsFields::F6 field.
        static const char* name()
        {
            return "F6";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return true;
        }

        /// @brief Special value <b>"S1"</b>.
        static constexpr ValueType valueS1()
        {
            return static_cast<ValueType>(0xffffffffLL);
        }

        /// @brief Retrieve map of special value names
        static SpecialNamesMapInfo specialNamesMap()
        {
            static const SpecialNameInfo Map[] = {
                std::make_pair(valueS1(), "S1")
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::SimpleIntsFields::F7 field.
    struct F7Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_demo1::message::SimpleIntsFields::F7 field.
        using ValueType = std::int64_t;

        /// @brief Name of the @ref cc_demo1::message::SimpleIntsFields::F7 field.
        static const char* name()
        {
            return "F7";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::SimpleIntsFields::F8 field.
    struct F8Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_demo1::message::SimpleIntsFields::F8 field.
        using ValueType = std::uint64_t;

        /// @brief Name of the @ref cc_demo1::message::SimpleIntsFields::F8 field.
        static const char* name()
        {
            return "F8";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::SimpleIntsFields::F9 field.
    struct F9Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_demo1::message::SimpleIntsFields::F9 field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_demo1::message::SimpleIntsFields::F9 field.
        static const char* name()
        {
            return "F9";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::SimpleIntsFields::F10 field.
    struct F10Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_demo1::message::SimpleIntsFields::F10 field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_demo1::message::SimpleIntsFields::F10 field.
        static const char* name()
        {
            return "F10";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_demo1::message::SimpleInts message.
struct SimpleIntsCommon
{
    /// @brief Name of the @ref cc_demo1::message::SimpleInts message.
    static const char* name()
    {
        return "Simple Ints";
    }
};

} // namespace message

} // namespace cc_demo1
