/// @file
/// @brief Contains definition of <b>"Lists"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/field/String.h"
#include "comms/options.h"
#include "demo1/MsgId.h"
#include "demo1/field/FieldBase.h"
#include "demo1/options/DefaultOptions.h"

namespace demo1
{

namespace message
{

/// @brief Fields of @ref Lists.
/// @tparam TOpt Extra options
/// @see @ref Lists
/// @headerfile "demo1/message/Lists.h"
template <typename TOpt = demo1::options::DefaultOptions>
struct ListsFields
{
    /// @brief Definition of <b>"F2Count"</b> field.
    struct F2Count : public
        comms::field::IntValue<
            demo1::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "F2Count";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref F1 list.
    struct F1Members
    {
        /// @brief Definition of <b>"Elem"</b> field.
        struct Elem : public
            comms::field::IntValue<
                demo1::field::FieldBase<>,
                std::uint32_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Elem";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"F1"</b> field.
    /// @details
    ///     Fixed size list of int fields
    struct F1 : public
        comms::field::ArrayList<
            demo1::field::FieldBase<>,
            typename F1Members::Elem,
            typename TOpt::message::ListsFields::F1,
            comms::option::def::SequenceFixedSize<5U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "F1";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref F2 list.
    struct F2Members
    {
        /// @brief Definition of <b>"Elem"</b> field.
        struct Elem : public
            comms::field::IntValue<
                demo1::field::FieldBase<>,
                std::uint32_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Elem";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"F2"</b> field.
    /// @details
    ///     List of int fields with detached count prefix
    struct F2 : public
        comms::field::ArrayList<
            demo1::field::FieldBase<>,
            typename F2Members::Elem,
            typename TOpt::message::ListsFields::F2,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "F2";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref F3 list.
    struct F3Members
    {
        /// @brief Scope for all the member fields of @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Definition of <b>"Mem1"</b> field.
            struct Mem1 : public
                comms::field::IntValue<
                    demo1::field::FieldBase<>,
                    std::uint32_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "Mem1";
                }
                
            };
            
            /// @brief Definition of <b>"Mem2"</b> field.
            struct Mem2 : public
                comms::field::IntValue<
                    demo1::field::FieldBase<>,
                    std::int32_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "Mem2";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Mem1,
                   Mem2
                >;
        };
        
        /// @brief Definition of <b>"Element"</b> field.
        class Element : public
            comms::field::Bundle<
                demo1::field::FieldBase<>,
                typename ElementMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    demo1::field::FieldBase<>,
                    typename ElementMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b field_mem1() - for ElementMembers::Mem1 member field.
            ///     @li @b field_mem2() - for ElementMembers::Mem2 member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                mem1,
                mem2
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "Element";
            }
            
        };
        
        /// @brief Definition of <b>"Count"</b> field.
        struct Count : public
            comms::field::IntValue<
                demo1::field::FieldBase<>,
                std::uint8_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Count";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"F3"</b> field.
    /// @details
    ///     List of bundles prefixed with number of elements
    struct F3 : public
        comms::field::ArrayList<
            demo1::field::FieldBase<>,
            typename F3Members::Element,
            typename TOpt::message::ListsFields::F3,
            comms::option::def::SequenceSizeFieldPrefix<typename F3Members::Count>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "F3";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref F4 list.
    struct F4Members
    {
        /// @brief Scope for all the member fields of @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Definition of <b>"Mem1"</b> field.
            struct Mem1 : public
                comms::field::IntValue<
                    demo1::field::FieldBase<>,
                    std::uint32_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "Mem1";
                }
                
            };
            
            /// @brief Definition of <b>"Mem2"</b> field.
            struct Mem2 : public
                comms::field::String<
                    demo1::field::FieldBase<>,
                    typename TOpt::message::ListsFields::F4Members::ElementMembers::Mem2
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "Mem2";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Mem1,
                   Mem2
                >;
        };
        
        /// @brief Definition of <b>"Element"</b> field.
        class Element : public
            comms::field::Bundle<
                demo1::field::FieldBase<>,
                typename ElementMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    demo1::field::FieldBase<>,
                    typename ElementMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b field_mem1() - for ElementMembers::Mem1 member field.
            ///     @li @b field_mem2() - for ElementMembers::Mem2 member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                mem1,
                mem2
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "Element";
            }
            
        };
        
        /// @brief Definition of <b>"Length"</b> field.
        struct Length : public
            comms::field::IntValue<
                demo1::field::FieldBase<>,
                std::uint8_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Length";
            }
            
        };
        
        /// @brief Definition of <b>"ElemLength"</b> field.
        struct ElemLength : public
            comms::field::IntValue<
                demo1::field::FieldBase<>,
                std::uint8_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "ElemLength";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"F4"</b> field.
    /// @details
    ///     List of bundles prefixed with serialization length. Every
    ///     element is prefixed with its serialization length as well.
    struct F4 : public
        comms::field::ArrayList<
            demo1::field::FieldBase<>,
            typename F4Members::Element,
            typename TOpt::message::ListsFields::F4,
            comms::option::def::SequenceSerLengthFieldPrefix<typename F4Members::Length>,
            comms::option::def::SequenceElemSerLengthFieldPrefix<typename F4Members::ElemLength>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "F4";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref F5 list.
    struct F5Members
    {
        /// @brief Scope for all the member fields of @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Definition of <b>"Mem1"</b> field.
            struct Mem1 : public
                comms::field::IntValue<
                    demo1::field::FieldBase<>,
                    std::uint32_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "Mem1";
                }
                
            };
            
            /// @brief Definition of <b>"Mem2"</b> field.
            struct Mem2 : public
                comms::field::IntValue<
                    demo1::field::FieldBase<>,
                    std::int32_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "Mem2";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Mem1,
                   Mem2
                >;
        };
        
        /// @brief Definition of <b>"Element"</b> field.
        class Element : public
            comms::field::Bundle<
                demo1::field::FieldBase<>,
                typename ElementMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    demo1::field::FieldBase<>,
                    typename ElementMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b field_mem1() - for ElementMembers::Mem1 member field.
            ///     @li @b field_mem2() - for ElementMembers::Mem2 member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                mem1,
                mem2
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "Element";
            }
            
        };
        
        /// @brief Definition of <b>"Count"</b> field.
        struct Count : public
            comms::field::IntValue<
                demo1::field::FieldBase<>,
                std::uint8_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Count";
            }
            
        };
        
        /// @brief Definition of <b>"ElemLength"</b> field.
        struct ElemLength : public
            comms::field::IntValue<
                demo1::field::FieldBase<>,
                std::uint8_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "ElemLength";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"F5"</b> field.
    /// @details
    ///     List of fixed length bundles prefixed with number of elements.
    ///     First element is prefixed with the serialization length of
    ///     the element.
    struct F5 : public
        comms::field::ArrayList<
            demo1::field::FieldBase<>,
            typename F5Members::Element,
            typename TOpt::message::ListsFields::F5,
            comms::option::def::SequenceSizeFieldPrefix<typename F5Members::Count>,
            comms::option::def::SequenceElemFixedSerLengthFieldPrefix<typename F5Members::ElemLength>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "F5";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        F2Count,
        F1,
        F2,
        F3,
        F4,
        F5
    >;
};

/// @brief Definition of <b>"Lists"</b> message class.
/// @details
///     See @ref ListsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "demo1/message/Lists.h"
template <typename TMsgBase, typename TOpt = demo1::options::DefaultOptions>
class Lists : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Lists,
        comms::option::def::StaticNumIdImpl<demo1::MsgId_Lists>,
        comms::option::def::FieldsImpl<typename ListsFields<TOpt>::All>,
        comms::option::def::MsgType<Lists<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Lists,
            comms::option::def::StaticNumIdImpl<demo1::MsgId_Lists>,
            comms::option::def::FieldsImpl<typename ListsFields<TOpt>::All>,
            comms::option::def::MsgType<Lists<TMsgBase, TOpt> >,
            comms::option::def::HasName,
            comms::option::def::HasCustomRefresh
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_f2Count() for @ref ListsFields::F2Count field.
    ///     @li @b field_f1() for @ref ListsFields::F1 field.
    ///     @li @b field_f2() for @ref ListsFields::F2 field.
    ///     @li @b field_f3() for @ref ListsFields::F3 field.
    ///     @li @b field_f4() for @ref ListsFields::F4 field.
    ///     @li @b field_f5() for @ref ListsFields::F5 field.
    COMMS_MSG_FIELDS_ACCESS(
        f2Count,
        f1,
        f2,
        f3,
        f4,
        f5
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 24U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "Lists";
    }
    
    /// @brief Custom read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_f2>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        field_f2().forceReadElemCount(
            static_cast<std::size_t>(field_f2Count().value()));
        
        es = Base::template doReadFrom<FieldIdx_f2>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        return comms::ErrorStatus::Success;
    }
    
    /// @brief Custom refresh functionality.
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_f2() || updated;
        return updated;
    }
    
    
private:
    bool refresh_f2()
    {
        bool updated = false;
        do {
            auto expectedValue = static_cast<std::size_t>(field_f2Count().value());
            auto realValue = field_f2().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_f2Count().value())>::type;
                field_f2Count().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace demo1


