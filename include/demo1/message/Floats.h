/// @file
/// @brief Contains definition of <b>"Floats"</b> message and its fields.

#pragma once

#include <cmath>
#include <limits>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/FloatValue.h"
#include "comms/options.h"
#include "demo1/MsgId.h"
#include "demo1/field/FieldBase.h"
#include "demo1/options/DefaultOptions.h"

namespace demo1
{

namespace message
{

/// @brief Fields of @ref Floats.
/// @tparam TOpt Extra options
/// @see @ref Floats
/// @headerfile "demo1/message/Floats.h"
template <typename TOpt = demo1::options::DefaultOptions>
struct FloatsFields
{
    /// @brief Definition of <b>"Timeout"</b> field.
    class Timeout : public
        comms::field::FloatValue<
            demo1::field::FieldBase<>,
            float,
            comms::option::def::UnitsSeconds
        >
    {
        using Base = 
            comms::field::FloatValue<
                demo1::field::FieldBase<>,
                float,
                comms::option::def::UnitsSeconds
            >;
    public:
        /// @brief Special value <b>"Infinite"</b>.
        static constexpr typename Base::ValueType valueInfinite()
        {
            return static_cast<typename Base::ValueType>(0.000000);
        }
        
        /// @brief Check the value is equal to special @ref valueInfinite().
        bool isInfinite() const
        {
            return (std::abs(Base::value() - static_cast<typename Base::ValueType>(0.000000)) < std::numeric_limits<typename Base::ValueType>::epsilon());
        }
        
        /// @brief Assign special value @ref valueInfinite() to the field.
        void setInfinite()
        {
            Base::value() = valueInfinite();
        }
        
        /// @brief Special value <b>"Invalid"</b>.
        static constexpr typename Base::ValueType valueInvalid()
        {
            return std::numeric_limits<typename Base::ValueType>::quiet_NaN();
        }
        
        /// @brief Check the value is equal to special @ref valueInvalid().
        bool isInvalid() const
        {
            return (std::isnan(Base::value()));
        }
        
        /// @brief Assign special value @ref valueInvalid() to the field.
        void setInvalid()
        {
            Base::value() = valueInvalid();
        }
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Timeout";
        }
        
    };
    
    /// @brief Definition of <b>"Distance"</b> field.
    class Distance : public
        comms::field::FloatValue<
            demo1::field::FieldBase<>,
            float,
            comms::option::def::UnitsMeters
        >
    {
        using Base = 
            comms::field::FloatValue<
                demo1::field::FieldBase<>,
                float,
                comms::option::def::UnitsMeters
            >;
    public:
        /// @brief Default constructor.
        Distance()
        {
            Base::value() = std::numeric_limits<typename Base::ValueType>::quiet_NaN();
        }
        
        /// @brief Special value <b>"Infinite"</b>.
        static constexpr typename Base::ValueType valueInfinite()
        {
            return std::numeric_limits<typename Base::ValueType>::infinity();
        }
        
        /// @brief Check the value is equal to special @ref valueInfinite().
        bool isInfinite() const
        {
            return ((0 < Base::value()) &&
                    (std::isinf(Base::value())));
        }
        
        /// @brief Assign special value @ref valueInfinite() to the field.
        void setInfinite()
        {
            Base::value() = valueInfinite();
        }
        
        /// @brief Special value <b>"Invalid"</b>.
        static constexpr typename Base::ValueType valueInvalid()
        {
            return std::numeric_limits<typename Base::ValueType>::quiet_NaN();
        }
        
        /// @brief Check the value is equal to special @ref valueInvalid().
        bool isInvalid() const
        {
            return (std::isnan(Base::value()));
        }
        
        /// @brief Assign special value @ref valueInvalid() to the field.
        void setInvalid()
        {
            Base::value() = valueInvalid();
        }
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Distance";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Timeout,
        Distance
    >;
};

/// @brief Definition of <b>"Floats"</b> message class.
/// @details
///     See @ref FloatsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "demo1/message/Floats.h"
template <typename TMsgBase, typename TOpt = demo1::options::DefaultOptions>
class Floats : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Floats,
        comms::option::def::StaticNumIdImpl<demo1::MsgId_Floats>,
        comms::option::def::FieldsImpl<typename FloatsFields<TOpt>::All>,
        comms::option::def::MsgType<Floats<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Floats,
            comms::option::def::StaticNumIdImpl<demo1::MsgId_Floats>,
            comms::option::def::FieldsImpl<typename FloatsFields<TOpt>::All>,
            comms::option::def::MsgType<Floats<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_timeout() for @ref FloatsFields::Timeout field.
    ///     @li @b field_distance() for @ref FloatsFields::Distance field.
    COMMS_MSG_FIELDS_ACCESS(
        timeout,
        distance
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "Floats";
    }
    
    
};

} // namespace message

} // namespace demo1


