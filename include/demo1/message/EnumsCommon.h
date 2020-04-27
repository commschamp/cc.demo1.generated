// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref demo1::message::Enums message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <type_traits>
#include <utility>

namespace demo1
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref demo1::message::Enums message.
/// @see demo1::message::EnumsFields
struct EnumsFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref demo1::message::EnumsFields::F1 field.
    struct F1Common
    {
        /// @brief Values enumerator for
        ///     @ref demo1::message::EnumsFields::F1 field.
        enum class ValueType : std::uint8_t
        {
            V0 = 0, ///< value @b V0
            V1 = 1, ///< value @b V1
            V2 = 2, ///< value @b V2
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref demo1::message::EnumsFields::F1 field.
        static const char* name()
        {
            return "F1";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "V0",
                "V1",
                "V2"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref demo1::message::EnumsFields::F1 field.
    using F1Val = F1Common::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref demo1::message::EnumsFields::F2 field.
    struct F2Common
    {
        /// @brief Values enumerator for
        ///     @ref demo1::message::EnumsFields::F2 field.
        enum class ValueType : std::int16_t
        {
            V1 = -1, ///< value @b V1
            V2 = 5, ///< value @b V2
            V3 = 6, ///< value @b V3
            V4 = 7, ///< value @b V4
            
            // --- Extra values generated for convenience ---
            FirstValue = -1, ///< First defined value.
            LastValue = 7, ///< Last defined value.
            ValuesLimit = 8, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref demo1::message::EnumsFields::F2 field.
        static const char* name()
        {
            return "F2";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            using NameInfo = std::pair<ValueType, const char*>;
            static const NameInfo Map[] = {
                std::make_pair(ValueType::V1, "V1"),
                std::make_pair(ValueType::V2, "V2"),
                std::make_pair(ValueType::V3, "V3"),
                std::make_pair(ValueType::V4, "V4")
            };
            
            auto iter = std::lower_bound(
                std::begin(Map), std::end(Map), val,
                [](const NameInfo& info, ValueType v) -> bool
                {
                    return info.first < v;
                });
            
            if ((iter == std::end(Map)) || (iter->first != val)) {
                return nullptr;
            }
            
            return iter->second;
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref demo1::message::EnumsFields::F2 field.
    using F2Val = F2Common::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref demo1::message::EnumsFields::F3 field.
    struct F3Common
    {
        /// @brief Values enumerator for
        ///     @ref demo1::message::EnumsFields::F3 field.
        enum class ValueType : std::uint32_t
        {
            V1 = 0x010203UL, ///< value @b V1
            V2 = 0x040506UL, ///< value @b V2
            
            // --- Extra values generated for convenience ---
            FirstValue = 0x010203UL, ///< First defined value.
            LastValue = 0x040506UL, ///< Last defined value.
            ValuesLimit = 0x040507UL, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref demo1::message::EnumsFields::F3 field.
        static const char* name()
        {
            return "F3";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            using NameInfo = std::pair<ValueType, const char*>;
            static const NameInfo Map[] = {
                std::make_pair(ValueType::V1, "V1"),
                std::make_pair(ValueType::V2, "V2")
            };
            
            auto iter = std::lower_bound(
                std::begin(Map), std::end(Map), val,
                [](const NameInfo& info, ValueType v) -> bool
                {
                    return info.first < v;
                });
            
            if ((iter == std::end(Map)) || (iter->first != val)) {
                return nullptr;
            }
            
            return iter->second;
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref demo1::message::EnumsFields::F3 field.
    using F3Val = F3Common::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref demo1::message::EnumsFields::F4 field.
    struct F4Common
    {
        /// @brief Values enumerator for
        ///     @ref demo1::message::EnumsFields::F4 field.
        enum class ValueType : std::uint16_t
        {
            V1 = 0U, ///< value @b V1
            V2 = 128U, ///< value @b V2
            
            // --- Extra values generated for convenience ---
            FirstValue = 0U, ///< First defined value.
            LastValue = 128U, ///< Last defined value.
            ValuesLimit = 129U, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref demo1::message::EnumsFields::F4 field.
        static const char* name()
        {
            return "F4";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            using NameInfo = std::pair<ValueType, const char*>;
            static const NameInfo Map[] = {
                std::make_pair(ValueType::V1, "V1"),
                std::make_pair(ValueType::V2, "V2")
            };
            
            auto iter = std::lower_bound(
                std::begin(Map), std::end(Map), val,
                [](const NameInfo& info, ValueType v) -> bool
                {
                    return info.first < v;
                });
            
            if ((iter == std::end(Map)) || (iter->first != val)) {
                return nullptr;
            }
            
            return iter->second;
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref demo1::message::EnumsFields::F4 field.
    using F4Val = F4Common::ValueType;
    
};

/// @brief Common types and functions of 
///     @ref demo1::message::Enums message.
/// @see demo1::message::Enums
struct EnumsCommon
{
    /// @brief Name of the @ref demo1::message::Enums message.
    static const char* name()
    {
        return "Enums";
    }
    
};

} // namespace message

} // namespace demo1


