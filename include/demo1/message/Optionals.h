/// @file
/// @brief Contains definition of <b>"Optionals"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/field/Optional.h"
#include "comms/options.h"
#include "demo1/MsgId.h"
#include "demo1/field/FieldBase.h"
#include "demo1/options/DefaultOptions.h"

namespace demo1
{

namespace message
{

/// @brief Common definitions for fields from @ref OptionalsFields.
/// @see @ref OptionalsFields
/// @headerfile "demo1/message/Optionals.h"
struct OptionalsFieldsCommon
{
    /// @brief Common functions for
    ///     @ref demo1::message::OptionalsFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Retrieve name of the bit
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
    
};

/// @brief Fields of @ref Optionals.
/// @tparam TOpt Extra options
/// @see @ref Optionals
/// @headerfile "demo1/message/Optionals.h"
template <typename TOpt = demo1::options::DefaultOptions>
struct OptionalsFields
{
    /// @brief Definition of <b>"Flags"</b> field.
    /// @details
    ///     Flags indicating existence of the fields to follow
    class Flags : public
        comms::field::BitmaskValue<
            demo1::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                demo1::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_F2Exists, @b getBitValue_F2Exists() and @b setBitValue_F2Exists().
        ///      @li @b BitIdx_F3Missing, @b getBitValue_F3Missing() and @b setBitValue_F3Missing().
        COMMS_BITMASK_BITS_SEQ(
            F2Exists,
            F3Missing
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Flags";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                demo1::message::OptionalsFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref F2 optional.
    struct F2Members
    {
        /// @brief Definition of <b>"F2"</b> field.
        struct F2 : public
            comms::field::IntValue<
                demo1::field::FieldBase<>,
                std::uint16_t,
                comms::option::def::DefaultNumValue<4369>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "F2";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"F2"</b> field.
    struct F2 : public
        comms::field::Optional<
            typename F2Members::F2,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "F2";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref F3 optional.
    struct F3Members
    {
        /// @brief Definition of <b>"F3"</b> field.
        struct F3 : public
            comms::field::IntValue<
                demo1::field::FieldBase<>,
                std::uint16_t,
                comms::option::def::DefaultNumValue<8738>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "F3";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"F3"</b> field.
    struct F3 : public
        comms::field::Optional<
            typename F3Members::F3,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "F3";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Flags,
        F2,
        F3
    >;
};

/// @brief Definition of <b>"Optionals"</b> message class.
/// @details
///     See @ref OptionalsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "demo1/message/Optionals.h"
template <typename TMsgBase, typename TOpt = demo1::options::DefaultOptions>
class Optionals : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Optionals,
        comms::option::def::StaticNumIdImpl<demo1::MsgId_Optionals>,
        comms::option::def::FieldsImpl<typename OptionalsFields<TOpt>::All>,
        comms::option::def::MsgType<Optionals<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Optionals,
            comms::option::def::StaticNumIdImpl<demo1::MsgId_Optionals>,
            comms::option::def::FieldsImpl<typename OptionalsFields<TOpt>::All>,
            comms::option::def::MsgType<Optionals<TMsgBase, TOpt> >,
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
    ///     @li @b field_flags() for @ref OptionalsFields::Flags field.
    ///     @li @b field_f2() for @ref OptionalsFields::F2 field.
    ///     @li @b field_f3() for @ref OptionalsFields::F3 field.
    COMMS_MSG_FIELDS_ACCESS(
        flags,
        f2,
        f3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 1U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 5U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "Optionals";
    }
    
    /// @brief Custom read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_f2>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        refresh_f2();
        
        es = Base::template doReadFromUntilAndUpdateLen<FieldIdx_f2, FieldIdx_f3>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        refresh_f3();
        
        es = Base::template doReadFrom<FieldIdx_f3>(iter, len);
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
        updated = refresh_f3() || updated;
        return updated;
    }
    
    
private:
    bool refresh_f2()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (field_flags().getBitValue_F2Exists()) {
            mode = comms::field::OptionalMode::Exists;
        }
        
        if (field_f2().getMode() == mode) {
            return false;
        }
        
        field_f2().setMode(mode);
        return true;
        
    }
    
    bool refresh_f3()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (!field_flags().getBitValue_F3Missing()) {
            mode = comms::field::OptionalMode::Exists;
        }
        
        if (field_f3().getMode() == mode) {
            return false;
        }
        
        field_f3().setMode(mode);
        return true;
        
    }
    
};

} // namespace message

} // namespace demo1


