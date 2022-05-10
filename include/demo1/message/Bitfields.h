// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>"Bitfields"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "demo1/MsgId.h"
#include "demo1/field/FieldBase.h"
#include "demo1/message/BitfieldsCommon.h"
#include "demo1/options/DefaultOptions.h"


namespace demo1
{

namespace message
{


/// @brief Fields of @ref Bitfields.
/// @tparam TOpt Extra options
/// @see @ref Bitfields
/// @headerfile demo1/message/Bitfields.h
template <typename TOpt = demo1::options::DefaultOptions>
struct BitfieldsFields
{
    /// @brief Scope for all the member fields of
    ///     @ref F1 field.
    struct F1Members
    {
        /// @brief Definition of <b>"Mem1"</b> field.
        class Mem1 : public
            comms::field::IntValue<
                demo1::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<3U>
            >
        {
            using Base =
                comms::field::IntValue<
                    demo1::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::FixedBitLength<3U>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
            
            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return demo1::message::BitfieldsFieldsCommon::F1MembersCommon::Mem1Common::hasSpecials();
            }
            
            
            /// @brief Name of the field.
            static const char* name()
            {
                return demo1::message::BitfieldsFieldsCommon::F1MembersCommon::Mem1Common::name();
            }
            
        
        };
        
        
        /// @brief Definition of <b>"Mem2"</b> field.
        class Mem2 : public
            comms::field::BitmaskValue<
                demo1::field::FieldBase<>,
                comms::option::def::FixedBitLength<3U>
            >
        {
            using Base =
                comms::field::BitmaskValue<
                    demo1::field::FieldBase<>,
                    comms::option::def::FixedBitLength<3U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_Bit0, @b getBitValue_Bit0() and @b setBitValue_Bit0().
            ///      @li @b BitIdx_Bit1, @b getBitValue_Bit1() and @b setBitValue_Bit1().
            ///      @li @b BitIdx_Bit2, @b getBitValue_Bit2() and @b setBitValue_Bit2().
            COMMS_BITMASK_BITS_SEQ(
                Bit0,
                Bit1,
                Bit2
            );
            
            /// @brief Retrieve name of the bit.
            /// @see @ref demo1::message::BitfieldsFieldsCommon::F1MembersCommon::Mem2Common::bitName().
            static const char* bitName(BitIdx idx)
            {
                return
                    demo1::message::BitfieldsFieldsCommon::F1MembersCommon::Mem2Common::bitName(
                        static_cast<std::size_t>(idx));
            }
            
            /// @brief Name of the field.
            static const char* name()
            {
                return demo1::message::BitfieldsFieldsCommon::F1MembersCommon::Mem2Common::name();
            }
            
        
        };
        
        
        /// @brief Definition of <b>"Mem3"</b> field.
        /// @see @ref demo1::message::BitfieldsFieldsCommon::F1MembersCommon::Mem3Common::ValueType
        class Mem3 : public
            comms::field::EnumValue<
                demo1::field::FieldBase<>,
                demo1::message::BitfieldsFieldsCommon::F1MembersCommon::Mem3Common::ValueType,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValue<0>,
                comms::option::def::ValidNumValue<3>
            >
        {
            using Base =
                comms::field::EnumValue<
                    demo1::field::FieldBase<>,
                    demo1::message::BitfieldsFieldsCommon::F1MembersCommon::Mem3Common::ValueType,
                    comms::option::def::FixedBitLength<2U>,
                    comms::option::def::ValidNumValue<0>,
                    comms::option::def::ValidNumValue<3>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
            
            /// @brief Single value name info entry.
            using ValueNameInfo = demo1::message::BitfieldsFieldsCommon::F1MembersCommon::Mem3Common::ValueNameInfo;
            
            /// @brief Type returned from @ref valueNamesMap() member function.
            /// @see @ref demo1::message::BitfieldsFieldsCommon::F1MembersCommon::Mem3Common::ValueNamesMapInfo.
            using ValueNamesMapInfo = demo1::message::BitfieldsFieldsCommon::F1MembersCommon::Mem3Common::ValueNamesMapInfo;
            
            /// @brief Retrieve name of the enum value.
            /// @see @ref demo1::message::BitfieldsFieldsCommon::F1MembersCommon::Mem3Common::valueName().
            static const char* valueName(ValueType val)
            {
                return demo1::message::BitfieldsFieldsCommon::F1MembersCommon::Mem3Common::valueName(val);
            }
            
            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::value());
            }
            
            /// @brief Retrieve map of enum value names.
            /// @see @ref demo1::message::BitfieldsFieldsCommon::F1MembersCommon::Mem3Common::valueNamesMap().
            static ValueNamesMapInfo valueNamesMap()
            {
                return demo1::message::BitfieldsFieldsCommon::F1MembersCommon::Mem3Common::valueNamesMap();
            }
            
            
            /// @brief Name of the field.
            static const char* name()
            {
                return demo1::message::BitfieldsFieldsCommon::F1MembersCommon::Mem3Common::name();
            }
            
        
        };
        
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Mem1,
               Mem2,
               Mem3
            >;
    };
    
    /// @brief Definition of <b>"F1"</b> field.
    class F1 : public
        comms::field::Bitfield<
            demo1::field::FieldBase<>,
            typename F1Members::All
        >
    {
        using Base =
            comms::field::Bitfield<
                demo1::field::FieldBase<>,
                typename F1Members::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated values, types and access functions are:
        ///     @li @b FieldIdx_mem1 index, @b Field_mem1 type and @b field_mem1() access function -
        ///         for demo1::message::BitfieldsFields::F1Members::Mem1 member field.
        ///     @li @b FieldIdx_mem2 index, @b Field_mem2 type and @b field_mem2() access function -
        ///         for demo1::message::BitfieldsFields::F1Members::Mem2 member field.
        ///     @li @b FieldIdx_mem3 index, @b Field_mem3 type and @b field_mem3() access function -
        ///         for demo1::message::BitfieldsFields::F1Members::Mem3 member field.
        COMMS_FIELD_MEMBERS_NAMES(
            mem1,
            mem2,
            mem3
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return demo1::message::BitfieldsFieldsCommon::F1Common::name();
        }
        
    
    };
    
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        F1
    >;
};

/// @brief Definition of <b>"Bitfields"</b> message class.
/// @details
///     See @ref BitfieldsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile demo1/message/Bitfields.h
template <typename TMsgBase, typename TOpt = demo1::options::DefaultOptions>
class Bitfields : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Bitfields,
        comms::option::def::StaticNumIdImpl<demo1::MsgId_Bitfields>,
        comms::option::def::FieldsImpl<typename BitfieldsFields<TOpt>::All>,
        comms::option::def::MsgType<Bitfields<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Bitfields,
            comms::option::def::StaticNumIdImpl<demo1::MsgId_Bitfields>,
            comms::option::def::FieldsImpl<typename BitfieldsFields<TOpt>::All>,
            comms::option::def::MsgType<Bitfields<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_f1 index, @b Field_f1 type and @b field_f1() access fuction
    ///         for @ref BitfieldsFields::F1 field.
    COMMS_MSG_FIELDS_NAMES(
        f1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 1U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 1U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return demo1::message::BitfieldsCommon::name();
    }
    

};

} // namespace message

} // namespace demo1


