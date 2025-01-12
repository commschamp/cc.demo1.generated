// Generated by commsdsl2comms v7.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_demo1::message::Floats message and its fields.

#pragma once

#include <limits>

namespace cc_demo1
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_demo1::message::Floats message.
/// @see cc_demo1::message::FloatsFields
struct FloatsFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::FloatsFields::Timeout field.
    struct TimeoutCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_demo1::message::FloatsFields::Timeout field.
        using ValueType = float;

        /// @brief Single special value name info entry.
        using SpecialNameInfo = std::pair<ValueType, const char*>;

        /// @brief Type returned from @ref specialNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using SpecialNamesMapInfo = std::pair<const SpecialNameInfo*, std::size_t>;

        /// @brief Name of the @ref cc_demo1::message::FloatsFields::Timeout field.
        static const char* name()
        {
            return "Timeout";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return true;
        }

        /// @brief Special value <b>"Infinite"</b>.
        static constexpr ValueType valueInfinite()
        {
            return static_cast<ValueType>(0.000000);
        }

        /// @brief Special value <b>"Invalid"</b>.
        static constexpr ValueType valueInvalid()
        {
            return std::numeric_limits<ValueType>::quiet_NaN();
        }

        /// @brief Retrieve map of special value names
        static SpecialNamesMapInfo specialNamesMap()
        {
            static const SpecialNameInfo Map[] = {
                std::make_pair(valueInfinite(), "Infinite"),
                std::make_pair(valueInvalid(), "Invalid")
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::FloatsFields::Distance field.
    struct DistanceCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_demo1::message::FloatsFields::Distance field.
        using ValueType = float;

        /// @brief Single special value name info entry.
        using SpecialNameInfo = std::pair<ValueType, const char*>;

        /// @brief Type returned from @ref specialNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using SpecialNamesMapInfo = std::pair<const SpecialNameInfo*, std::size_t>;

        /// @brief Name of the @ref cc_demo1::message::FloatsFields::Distance field.
        static const char* name()
        {
            return "Distance";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return true;
        }

        /// @brief Special value <b>"Infinite"</b>.
        static constexpr ValueType valueInfinite()
        {
            return std::numeric_limits<ValueType>::infinity();
        }

        /// @brief Special value <b>"Invalid"</b>.
        static constexpr ValueType valueInvalid()
        {
            return std::numeric_limits<ValueType>::quiet_NaN();
        }

        /// @brief Retrieve map of special value names
        static SpecialNamesMapInfo specialNamesMap()
        {
            static const SpecialNameInfo Map[] = {
                std::make_pair(valueInfinite(), "Infinite"),
                std::make_pair(valueInvalid(), "Invalid")
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_demo1::message::Floats message.
struct FloatsCommon
{
    /// @brief Name of the @ref cc_demo1::message::Floats message.
    static const char* name()
    {
        return "Floats";
    }
};

} // namespace message

} // namespace cc_demo1
