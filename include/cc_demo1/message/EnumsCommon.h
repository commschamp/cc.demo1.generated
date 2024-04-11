// Generated by commsdsl2comms v6.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_demo1::message::Enums message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <type_traits>
#include <utility>

namespace cc_demo1
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_demo1::message::Enums message.
/// @see cc_demo1::message::EnumsFields
struct EnumsFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::EnumsFields::F1 field.
    struct F1Common
    {
        /// @brief Values enumerator for
        ///     @ref cc_demo1::message::EnumsFields::F1 field.
        enum class ValueType : std::uint8_t
        {
            V0 = 0, ///< value @b V0. 
            V1 = 1, ///< value @b V1. 
            V2 = 2, ///< value @b V2. 

            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
        };

        /// @brief Single value name info entry
        using ValueNameInfo = const char*;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

        /// @brief Name of the @ref cc_demo1::message::EnumsFields::F1 field.
        static const char* name()
        {
            return "F1";
        }

        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            auto namesMapInfo = valueNamesMap();
            if (namesMapInfo.second <= static_cast<std::size_t>(val)) {
                return nullptr;
            }

            return namesMapInfo.first[static_cast<std::size_t>(val)];
        }

        /// @brief Retrieve map of enum value names
        static ValueNamesMapInfo valueNamesMap()
        {
            static const char* Map[] = {
                "V0",
                "V1",
                "V2"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Values enumerator for
    ///     @ref cc_demo1::message::EnumsFields::F1 field.
    using F1Val = F1Common::ValueType;

    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::EnumsFields::F2 field.
    struct F2Common
    {
        /// @brief Values enumerator for
        ///     @ref cc_demo1::message::EnumsFields::F2 field.
        enum class ValueType : std::int16_t
        {
            V1 = -1, ///< value @b V1. 
            V2 = 5, ///< value @b V2. 
            V3 = 6, ///< value @b V3. 
            V4 = 7, ///< value @b V4. 

            // --- Extra values generated for convenience ---
            FirstValue = -1, ///< First defined value.
            LastValue = 7, ///< Last defined value.
            ValuesLimit = 8, ///< Upper limit for defined values.
        };

        /// @brief Single value name info entry
        using ValueNameInfo = std::pair<ValueType, const char*>;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

        /// @brief Name of the @ref cc_demo1::message::EnumsFields::F2 field.
        static const char* name()
        {
            return "F2";
        }

        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            auto namesMapInfo = valueNamesMap();
            auto begIter = namesMapInfo.first;
            auto endIter = begIter + namesMapInfo.second;
            auto iter = std::lower_bound(
                begIter, endIter, val,
                [](const ValueNameInfo& info, ValueType v) -> bool
                {
                    return info.first < v;
                });

            if ((iter == endIter) || (iter->first != val)) {
                return nullptr;
            }

            return iter->second;
        }

        /// @brief Retrieve map of enum value names
        static ValueNamesMapInfo valueNamesMap()
        {
            static const ValueNameInfo Map[] = {
                std::make_pair(ValueType::V1, "V1"),
                std::make_pair(ValueType::V2, "V2"),
                std::make_pair(ValueType::V3, "V3"),
                std::make_pair(ValueType::V4, "V4")
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Values enumerator for
    ///     @ref cc_demo1::message::EnumsFields::F2 field.
    using F2Val = F2Common::ValueType;

    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::EnumsFields::F3 field.
    struct F3Common
    {
        /// @brief Values enumerator for
        ///     @ref cc_demo1::message::EnumsFields::F3 field.
        enum class ValueType : std::uint32_t
        {
            V1 = 0x010203UL, ///< value @b V1. 
            V2 = 0x040506UL, ///< value @b V2. 

            // --- Extra values generated for convenience ---
            FirstValue = 0x010203UL, ///< First defined value.
            LastValue = 0x040506UL, ///< Last defined value.
            ValuesLimit = 0x040507UL, ///< Upper limit for defined values.
        };

        /// @brief Single value name info entry
        using ValueNameInfo = std::pair<ValueType, const char*>;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

        /// @brief Name of the @ref cc_demo1::message::EnumsFields::F3 field.
        static const char* name()
        {
            return "F3";
        }

        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            auto namesMapInfo = valueNamesMap();
            auto begIter = namesMapInfo.first;
            auto endIter = begIter + namesMapInfo.second;
            auto iter = std::lower_bound(
                begIter, endIter, val,
                [](const ValueNameInfo& info, ValueType v) -> bool
                {
                    return info.first < v;
                });

            if ((iter == endIter) || (iter->first != val)) {
                return nullptr;
            }

            return iter->second;
        }

        /// @brief Retrieve map of enum value names
        static ValueNamesMapInfo valueNamesMap()
        {
            static const ValueNameInfo Map[] = {
                std::make_pair(ValueType::V1, "V1"),
                std::make_pair(ValueType::V2, "V2")
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Values enumerator for
    ///     @ref cc_demo1::message::EnumsFields::F3 field.
    using F3Val = F3Common::ValueType;

    /// @brief Common types and functions for
    ///     @ref cc_demo1::message::EnumsFields::F4 field.
    struct F4Common
    {
        /// @brief Values enumerator for
        ///     @ref cc_demo1::message::EnumsFields::F4 field.
        enum class ValueType : std::uint16_t
        {
            V1 = 0U, ///< value @b V1. 
            V2 = 128U, ///< value @b V2. 

            // --- Extra values generated for convenience ---
            FirstValue = 0U, ///< First defined value.
            LastValue = 128U, ///< Last defined value.
            ValuesLimit = 129U, ///< Upper limit for defined values.
        };

        /// @brief Single value name info entry
        using ValueNameInfo = std::pair<ValueType, const char*>;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

        /// @brief Name of the @ref cc_demo1::message::EnumsFields::F4 field.
        static const char* name()
        {
            return "F4";
        }

        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            auto namesMapInfo = valueNamesMap();
            auto begIter = namesMapInfo.first;
            auto endIter = begIter + namesMapInfo.second;
            auto iter = std::lower_bound(
                begIter, endIter, val,
                [](const ValueNameInfo& info, ValueType v) -> bool
                {
                    return info.first < v;
                });

            if ((iter == endIter) || (iter->first != val)) {
                return nullptr;
            }

            return iter->second;
        }

        /// @brief Retrieve map of enum value names
        static ValueNamesMapInfo valueNamesMap()
        {
            static const ValueNameInfo Map[] = {
                std::make_pair(ValueType::V1, "V1"),
                std::make_pair(ValueType::V2, "V2")
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Values enumerator for
    ///     @ref cc_demo1::message::EnumsFields::F4 field.
    using F4Val = F4Common::ValueType;
};

/// @brief Common types and functions of 
///     @ref cc_demo1::message::Enums message.
struct EnumsCommon
{
    /// @brief Name of the @ref cc_demo1::message::Enums message.
    static const char* name()
    {
        return "Enums";
    }
};

} // namespace message

} // namespace cc_demo1
