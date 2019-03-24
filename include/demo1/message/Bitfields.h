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
#include "demo1/DefaultOptions.h"
#include "demo1/MsgId.h"
#include "demo1/field/FieldBase.h"

namespace demo1
{

namespace message
{

/// @brief Fields of @ref Bitfields.
/// @tparam TOpt Extra options
/// @see @ref Bitfields
/// @headerfile "demo1/message/Bitfields.h"
template <typename TOpt = demo1::DefaultOptions>
struct BitfieldsFields
{
    /// @brief Scope for all the member fields of @ref F1 bitfield.
    struct F1Members
    {
        /// @brief Definition of <b>"Mem1"</b> field.
        struct Mem1 : public
            comms::field::IntValue<
                demo1::field::FieldBase<>,
                std::uint8_t,
                comms::option::FixedBitLength<3U>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Mem1";
            }
            
        };
        
        /// @brief Definition of <b>"Mem2"</b> field.
        class Mem2 : public
            comms::field::BitmaskValue<
                demo1::field::FieldBase<>,
                comms::option::FixedBitLength<3U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    demo1::field::FieldBase<>,
                    comms::option::FixedBitLength<3U>
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
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "Mem2";
            }
            
        };
        
        /// @brief Values enumerator for @ref demo1::message::BitfieldsFields::F1Members::Mem3 field.
        enum class Mem3Val : std::uint8_t
        {
            V1 = 0, ///< value @b V1
            V2 = 3, ///< value @b V2
            
        };
        
        /// @brief Definition of <b>"Mem3"</b> field.
        /// @see @ref demo1::message::BitfieldsFields::F1Members::Mem3Val
        struct Mem3 : public
            comms::field::EnumValue<
                demo1::field::FieldBase<>,
                Mem3Val,
                comms::option::FixedBitLength<2U>,
                comms::option::ValidNumValue<0>,
                comms::option::ValidNumValue<3>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Mem3";
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
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_mem1() - for F1Members::Mem1 member field.
        ///     @li @b field_mem2() - for F1Members::Mem2 member field.
        ///     @li @b field_mem3() - for F1Members::Mem3 member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            mem1,
            mem2,
            mem3
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "F1";
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
/// @headerfile "demo1/message/Bitfields.h"
template <typename TMsgBase, typename TOpt = demo1::DefaultOptions>
class Bitfields : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Bitfields,
        comms::option::StaticNumIdImpl<demo1::MsgId_Bitfields>,
        comms::option::FieldsImpl<typename BitfieldsFields<TOpt>::All>,
        comms::option::MsgType<Bitfields<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Bitfields,
            comms::option::StaticNumIdImpl<demo1::MsgId_Bitfields>,
            comms::option::FieldsImpl<typename BitfieldsFields<TOpt>::All>,
            comms::option::MsgType<Bitfields<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_f1() for @ref BitfieldsFields::F1 field.
    COMMS_MSG_FIELDS_ACCESS(
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
        return "Bitfields";
    }
    
    
};

} // namespace message

} // namespace demo1


