/// @file
/// @brief Contains definition of protocol default options.

#pragma once

#include "comms/options.h"

namespace demo1
{

/// @brief Default (empty) options of the protocol.
struct DefaultOptions
{
    /// @brief Extra options for messages.
    struct message
    {
        /// @brief Extra options for @ref demo1::message::Ack message.
        using Ack = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref demo1::message::Bitfields message.
        using Bitfields = comms::option::EmptyOption;
        
        /// @brief Extra options for fields of @ref demo1::message::Datas message.
        struct DatasFields
        {
            /// @brief Extra options for @ref demo1::message::DatasFields::F1 field.
            using F1 = comms::option::EmptyOption;
            
            /// @brief Extra options for @ref demo1::message::DatasFields::F2 field.
            using F2 = comms::option::EmptyOption;
            
            /// @brief Extra options for @ref demo1::message::DatasFields::F3 field.
            using F3 = comms::option::EmptyOption;
            
            /// @brief Extra options for @ref demo1::message::DatasFields::F4 field.
            using F4 = comms::option::EmptyOption;
            
        }; // struct DatasFields
        
        /// @brief Extra options for @ref demo1::message::Datas message.
        using Datas = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref demo1::message::Enums message.
        using Enums = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref demo1::message::Floats message.
        using Floats = comms::option::EmptyOption;
        
        /// @brief Extra options for fields of @ref demo1::message::Lists message.
        struct ListsFields
        {
            /// @brief Extra options for @ref demo1::message::ListsFields::F1 field.
            using F1 = comms::option::EmptyOption;
            
            /// @brief Extra options for @ref demo1::message::ListsFields::F2 field.
            using F2 = comms::option::EmptyOption;
            
            /// @brief Extra options for @ref demo1::message::ListsFields::F3 field.
            using F3 = comms::option::EmptyOption;
            
            /// @brief Extra options for all the member fields of @ref demo1::message::ListsFields::F4 string.
            struct F4Members
            {
                /// @brief Extra options for all the member fields of @ref demo1::message::ListsFields::F4Members::Element bitfield.
                struct ElementMembers
                {
                    /// @brief Extra options for @ref demo1::message::ListsFields::F4Members::ElementMembers::Mem2 field.
                    using Mem2 = comms::option::EmptyOption;
                    
                };
                
            };
            
            /// @brief Extra options for @ref demo1::message::ListsFields::F4 field.
            using F4 = comms::option::EmptyOption;
            
            /// @brief Extra options for @ref demo1::message::ListsFields::F5 field.
            using F5 = comms::option::EmptyOption;
            
        }; // struct ListsFields
        
        /// @brief Extra options for @ref demo1::message::Lists message.
        using Lists = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref demo1::message::Optionals message.
        using Optionals = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref demo1::message::ScaledInts message.
        using ScaledInts = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref demo1::message::Sets message.
        using Sets = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref demo1::message::SimpleInts message.
        using SimpleInts = comms::option::EmptyOption;
        
        /// @brief Extra options for fields of @ref demo1::message::Strings message.
        struct StringsFields
        {
            /// @brief Extra options for @ref demo1::message::StringsFields::F1 field.
            using F1 = comms::option::EmptyOption;
            
            /// @brief Extra options for @ref demo1::message::StringsFields::F2 field.
            using F2 = comms::option::EmptyOption;
            
            /// @brief Extra options for @ref demo1::message::StringsFields::F3 field.
            using F3 = comms::option::EmptyOption;
            
            /// @brief Extra options for @ref demo1::message::StringsFields::F4 field.
            using F4 = comms::option::EmptyOption;
            
            /// @brief Extra options for @ref demo1::message::StringsFields::F5 field.
            using F5 = comms::option::EmptyOption;
            
        }; // struct StringsFields
        
        /// @brief Extra options for @ref demo1::message::Strings message.
        using Strings = comms::option::EmptyOption;
        
        /// @brief Extra options for fields of @ref demo1::message::Variants message.
        struct VariantsFields
        {
            /// @brief Extra options for all the member fields of @ref demo1::message::VariantsFields::Properties string.
            struct PropertiesMembers
            {
                /// @brief Extra options for all the member fields of @ref demo1::message::VariantsFields::PropertiesMembers::Property bitfield.
                struct PropertyMembers
                {
                    /// @brief Extra options for all the member fields of @ref demo1::message::VariantsFields::PropertiesMembers::PropertyMembers::Prop3 bitfield.
                    struct Prop3Members
                    {
                        /// @brief Extra options for @ref demo1::message::VariantsFields::PropertiesMembers::PropertyMembers::Prop3Members::Val field.
                        using Val = comms::option::EmptyOption;
                        
                    };
                    
                };
                
            };
            
            /// @brief Extra options for @ref demo1::message::VariantsFields::Properties field.
            using Properties = comms::option::EmptyOption;
            
        }; // struct VariantsFields
        
        /// @brief Extra options for @ref demo1::message::Variants message.
        using Variants = comms::option::EmptyOption;
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for Layers of @ref demo1::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref demo1::frame::FrameLayers::Data layer.
            using Data = comms::option::EmptyOption;
            
            /// @brief Extra options for @ref demo1::frame::FrameLayers::Id layer.
            using Id = comms::option::EmptyOption;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

} // namespace demo1


