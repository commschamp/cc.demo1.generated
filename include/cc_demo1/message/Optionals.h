// Generated by commsdsl2comms v6.3.2

/// @file
/// @brief Contains definition of <b>"Optionals"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_demo1/MsgId.h"
#include "cc_demo1/field/FieldBase.h"
#include "cc_demo1/message/OptionalsCommon.h"
#include "cc_demo1/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/field/Optional.h"
#include "comms/options.h"

namespace cc_demo1
{

namespace message
{

/// @brief Fields of @ref Optionals.
/// @tparam TOpt Extra options
/// @see @ref Optionals
/// @headerfile cc_demo1/message/Optionals.h
template <typename TOpt = cc_demo1::options::DefaultOptions>
struct OptionalsFields
{
    /// @brief Definition of <b>"Flags"</b> field.
    /// @details
    ///     Flags indicating existence of the fields to follow
    class Flags : public
        comms::field::BitmaskValue<
            cc_demo1::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
        >
    {
        using Base =
            comms::field::BitmaskValue<
                cc_demo1::field::FieldBase<>,
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

        /// @brief Retrieve name of the bit.
        /// @see @ref cc_demo1::message::OptionalsFieldsCommon::FlagsCommon::bitName().
        static const char* bitName(BitIdx idx)
        {
            return
                cc_demo1::message::OptionalsFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_demo1::message::OptionalsFieldsCommon::FlagsCommon::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref F2 field.
    struct F2Members
    {
        /// @brief Definition of <b>"F2"</b> field.
        class F2 : public
            comms::field::IntValue<
                cc_demo1::field::FieldBase<>,
                std::uint16_t,
                comms::option::def::DefaultNumValue<4369>
            >
        {
            using Base =
                comms::field::IntValue<
                    cc_demo1::field::FieldBase<>,
                    std::uint16_t,
                    comms::option::def::DefaultNumValue<4369>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return cc_demo1::message::OptionalsFieldsCommon::F2MembersCommon::F2Common::hasSpecials();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_demo1::message::OptionalsFieldsCommon::F2MembersCommon::F2Common::name();
            }
        };
    };

    /// @brief Definition of <b>"F2"</b> field.
    class F2 : public
        comms::field::Optional<
            typename F2Members::F2,
            comms::option::def::MissingByDefault
        >
    {
        using Base =
            comms::field::Optional<
                typename F2Members::F2,
                comms::option::def::MissingByDefault
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_demo1::message::OptionalsFieldsCommon::F2Common::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref F3 field.
    struct F3Members
    {
        /// @brief Definition of <b>"F3"</b> field.
        class F3 : public
            comms::field::IntValue<
                cc_demo1::field::FieldBase<>,
                std::uint16_t,
                comms::option::def::DefaultNumValue<8738>
            >
        {
            using Base =
                comms::field::IntValue<
                    cc_demo1::field::FieldBase<>,
                    std::uint16_t,
                    comms::option::def::DefaultNumValue<8738>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return cc_demo1::message::OptionalsFieldsCommon::F3MembersCommon::F3Common::hasSpecials();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_demo1::message::OptionalsFieldsCommon::F3MembersCommon::F3Common::name();
            }
        };
    };

    /// @brief Definition of <b>"F3"</b> field.
    class F3 : public
        comms::field::Optional<
            typename F3Members::F3,
            comms::option::def::ExistsByDefault
        >
    {
        using Base =
            comms::field::Optional<
                typename F3Members::F3,
                comms::option::def::ExistsByDefault
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_demo1::message::OptionalsFieldsCommon::F3Common::name();
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
/// @headerfile cc_demo1/message/Optionals.h
template <typename TMsgBase, typename TOpt = cc_demo1::options::DefaultOptions>
class Optionals : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Optionals,
        comms::option::def::StaticNumIdImpl<cc_demo1::MsgId_Optionals>,
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
            comms::option::def::StaticNumIdImpl<cc_demo1::MsgId_Optionals>,
            comms::option::def::FieldsImpl<typename OptionalsFields<TOpt>::All>,
            comms::option::def::MsgType<Optionals<TMsgBase, TOpt> >,
            comms::option::def::HasName,
            comms::option::def::HasCustomRefresh
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_flags index, @b Field_flags type and @b field_flags() access fuction
    ///         for @ref OptionalsFields::Flags field.
    ///     @li @b FieldIdx_f2 index, @b Field_f2 type and @b field_f2() access fuction
    ///         for @ref OptionalsFields::F2 field.
    ///     @li @b FieldIdx_f3 index, @b Field_f3 type and @b field_f3() access fuction
    ///         for @ref OptionalsFields::F3 field.
    COMMS_MSG_FIELDS_NAMES(
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
        return cc_demo1::message::OptionalsCommon::name();
    }

    /// @brief Generated read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = comms::ErrorStatus::Success;
        do {
            es = Base::template doReadUntilAndUpdateLen<FieldIdx_f2>(iter, len);
            if (es != comms::ErrorStatus::Success) {
                break;
            }

            readPrepare_f2();

            es = Base::template doReadFromUntilAndUpdateLen<FieldIdx_f2, FieldIdx_f3>(iter, len);
            if (es != comms::ErrorStatus::Success) {
                break;
            }

            readPrepare_f3();

            es = Base::template doReadFrom<FieldIdx_f3>(iter, len);
        } while (false);

        return es;
    }

    /// @brief Generated refresh functionality.
    bool doRefresh()
    {
       bool updated = Base::doRefresh();
       updated = refresh_f2() || updated;
       updated = refresh_f3() || updated;
       return updated;
    }

private:
    void readPrepare_f2()
    {
        refresh_f2();
    }

    void readPrepare_f3()
    {
        refresh_f3();
    }

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

} // namespace cc_demo1
