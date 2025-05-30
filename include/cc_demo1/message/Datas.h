// Generated by commsdsl2comms v7.1.0

/// @file
/// @brief Contains definition of <b>"Datas"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <limits>
#include <tuple>
#include "cc_demo1/field/FieldBase.h"
#include "cc_demo1/message/DatasCommon.h"
#include "cc_demo1/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "comms/util/assign.h"

namespace cc_demo1
{

namespace message
{

/// @brief Fields of @ref Datas.
/// @tparam TOpt Extra options
/// @see @ref Datas
/// @headerfile cc_demo1/message/Datas.h
template <typename TOpt = cc_demo1::options::DefaultOptions>
struct DatasFields
{
    /// @brief Definition of <b>"F3Len"</b> field.
    /// @details
    ///     Detached length of F3.
    class F3Len : public
        comms::field::IntValue<
            cc_demo1::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::HasName
        >
    {
        using Base =
            comms::field::IntValue<
                cc_demo1::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::HasName
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_demo1::message::DatasFieldsCommon::F3LenCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_demo1::message::DatasFieldsCommon::F3LenCommon::name();
        }
    };

    /// @brief Definition of <b>"F1"</b> field.
    /// @details
    ///     Fixed length raw data
    class F1 : public
        comms::field::ArrayList<
            cc_demo1::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::DatasFields::F1,
            comms::option::def::HasName,
            comms::option::def::SequenceFixedSize<5U>
        >
    {
        using Base =
            comms::field::ArrayList<
                cc_demo1::field::FieldBase<>,
                std::uint8_t,
                typename TOpt::message::DatasFields::F1,
                comms::option::def::HasName,
                comms::option::def::SequenceFixedSize<5U>
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_demo1::message::DatasFieldsCommon::F1Common::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref F2 field.
    struct F2Members
    {
        /// @brief Definition of <b>"Length"</b> field.
        class Length : public
            comms::field::IntValue<
                cc_demo1::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::HasName
            >
        {
            using Base =
                comms::field::IntValue<
                    cc_demo1::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::HasName
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return cc_demo1::message::DatasFieldsCommon::F2MembersCommon::LengthCommon::hasSpecials();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_demo1::message::DatasFieldsCommon::F2MembersCommon::LengthCommon::name();
            }
        };
    };

    /// @brief Definition of <b>"F2"</b> field.
    /// @details
    ///     Length prefixed raw data
    class F2 : public
        comms::field::ArrayList<
            cc_demo1::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::DatasFields::F2,
            comms::option::def::HasName,
            comms::option::def::SequenceSerLengthFieldPrefix<typename F2Members::Length>
        >
    {
        using Base =
            comms::field::ArrayList<
                cc_demo1::field::FieldBase<>,
                std::uint8_t,
                typename TOpt::message::DatasFields::F2,
                comms::option::def::HasName,
                comms::option::def::SequenceSerLengthFieldPrefix<typename F2Members::Length>
            >;
    public:
        /// @brief Default constructor.
        F2()
        {
            static const std::uint8_t Data[] = {
                0xab, 0xcd, 0xef
            };
            comms::util::assign(Base::value(), std::begin(Data), std::end(Data));
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_demo1::message::DatasFieldsCommon::F2Common::name();
        }
    };

    /// @brief Definition of <b>"F3"</b> field.
    /// @details
    ///     Data with detached length prefix
    class F3 : public
        comms::field::ArrayList<
            cc_demo1::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::DatasFields::F3,
            comms::option::def::HasName,
            comms::option::def::SequenceLengthForcingEnabled
        >
    {
        using Base =
            comms::field::ArrayList<
                cc_demo1::field::FieldBase<>,
                std::uint8_t,
                typename TOpt::message::DatasFields::F3,
                comms::option::def::HasName,
                comms::option::def::SequenceLengthForcingEnabled
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_demo1::message::DatasFieldsCommon::F3Common::name();
        }
    };

    /// @brief Definition of <b>"F4"</b> field.
    /// @details
    ///     Data without length limit
    class F4 : public
        comms::field::ArrayList<
            cc_demo1::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::DatasFields::F4,
            comms::option::def::HasName
        >
    {
        using Base =
            comms::field::ArrayList<
                cc_demo1::field::FieldBase<>,
                std::uint8_t,
                typename TOpt::message::DatasFields::F4,
                comms::option::def::HasName
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_demo1::message::DatasFieldsCommon::F4Common::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        F3Len,
        F1,
        F2,
        F3,
        F4
    >;
};

/// @brief Definition of <b>"Datas"</b> message class.
/// @details
///     See @ref DatasFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_demo1/message/Datas.h
template <typename TMsgBase, typename TOpt = cc_demo1::options::DefaultOptions>
class Datas : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Datas,
        comms::option::def::StaticNumIdImpl<8 /* 0x8 */>,
        comms::option::def::FieldsImpl<typename DatasFields<TOpt>::All>,
        comms::option::def::MsgType<Datas<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Datas,
            comms::option::def::StaticNumIdImpl<8 /* 0x8 */>,
            comms::option::def::FieldsImpl<typename DatasFields<TOpt>::All>,
            comms::option::def::MsgType<Datas<TMsgBase, TOpt> >,
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
    ///     @li @b FieldIdx_f3Len index, @b Field_f3Len type and @b field_f3Len() access fuction
    ///         for @ref DatasFields::F3Len field.
    ///     @li @b FieldIdx_f1 index, @b Field_f1 type and @b field_f1() access fuction
    ///         for @ref DatasFields::F1 field.
    ///     @li @b FieldIdx_f2 index, @b Field_f2 type and @b field_f2() access fuction
    ///         for @ref DatasFields::F2 field.
    ///     @li @b FieldIdx_f3 index, @b Field_f3 type and @b field_f3() access fuction
    ///         for @ref DatasFields::F3 field.
    ///     @li @b FieldIdx_f4 index, @b Field_f4 type and @b field_f4() access fuction
    ///         for @ref DatasFields::F4 field.
    COMMS_MSG_FIELDS_NAMES(
        f3Len,
        f1,
        f2,
        f3,
        f4
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 7U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_demo1::message::DatasCommon::name();
    }

    /// @brief Generated read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = comms::ErrorStatus::Success;
        do {
            es = Base::template doReadUntilAndUpdateLen<FieldIdx_f3>(iter, len);
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
       updated = refresh_f3() || updated;
       return updated;
    }

private:
    void readPrepare_f3()
    {
        field_f3().forceReadLength(
            static_cast<std::size_t>(field_f3Len().getValue()));
    }

    bool refresh_f3()
    {
        auto lenValue = field_f3Len().getValue();
        auto realLength = field_f3().value().size();
        if (static_cast<std::size_t>(lenValue) == realLength) {
            return false;
        }

        using LenValueType = typename std::decay<decltype(lenValue)>::type;
        static const auto MaxLenValue = static_cast<std::size_t>(std::numeric_limits<LenValueType>::max());
        auto maxAllowedLen = std::min(MaxLenValue, realLength);
        field_f3Len().setValue(maxAllowedLen);
        if (maxAllowedLen < realLength) {
            field_f3().value().resize(maxAllowedLen);
        }
        return true;
    }
};

} // namespace message

} // namespace cc_demo1
