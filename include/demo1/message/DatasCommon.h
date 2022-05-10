// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref demo1::message::Datas message and its fields.

#pragma once

#include <cstdint>

namespace demo1
{

namespace message
{


/// @brief Common types and functions for fields of 
///     @ref demo1::message::Datas message.
/// @see demo1::message::DatasFields
struct DatasFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref demo1::message::DatasFields::F3Len field.
    struct F3LenCommon
    {
        /// @brief Re-definition of the value type used by
        ///     demo1::message::DatasFields::F3Len field.
        using ValueType = std::uint8_t;
        
        /// @brief Name of the @ref demo1::message::DatasFields::F3Len field.
        static const char* name()
        {
            return "F3Len";
        }
        
        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
        
        
    };
    
    /// @brief Common types and functions for
    ///     @ref demo1::message::DatasFields::F1 field.
    struct F1Common
    {
        /// @brief Name of the @ref demo1::message::DatasFields::F1 field.
        static const char* name()
        {
            return "F1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref demo1::message::DatasFields::F2 field.
    struct F2MembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref demo1::message::DatasFields::F2Members::Length field.
        struct LengthCommon
        {
            /// @brief Re-definition of the value type used by
            ///     demo1::message::DatasFields::F2Members::Length field.
            using ValueType = std::uint8_t;
            
            /// @brief Name of the @ref demo1::message::DatasFields::F2Members::Length field.
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
        
    };
    
    /// @brief Common types and functions for
    ///     @ref demo1::message::DatasFields::F2 field.
    struct F2Common
    {
        /// @brief Name of the @ref demo1::message::DatasFields::F2 field.
        static const char* name()
        {
            return "F2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref demo1::message::DatasFields::F3 field.
    struct F3Common
    {
        /// @brief Name of the @ref demo1::message::DatasFields::F3 field.
        static const char* name()
        {
            return "F3";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref demo1::message::DatasFields::F4 field.
    struct F4Common
    {
        /// @brief Name of the @ref demo1::message::DatasFields::F4 field.
        static const char* name()
        {
            return "F4";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref demo1::message::Datas message.
struct DatasCommon
{
    /// @brief Name of the @ref demo1::message::Datas message.
    static const char* name()
    {
        return "Datas";
    }
    
};

} // namespace message

} // namespace demo1



