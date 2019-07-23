/// @file
/// @brief Contains definition of <b>"Scaled Ints"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "demo1/MsgId.h"
#include "demo1/field/FieldBase.h"
#include "demo1/field/Lat.h"
#include "demo1/field/Lon.h"
#include "demo1/options/DefaultOptions.h"

namespace demo1
{

namespace message
{

/// @brief Fields of @ref ScaledInts.
/// @tparam TOpt Extra options
/// @see @ref ScaledInts
/// @headerfile "demo1/message/ScaledInts.h"
template <typename TOpt = demo1::options::DefaultOptions>
struct ScaledIntsFields
{
    /// @brief Definition of <b>"Lat"</b> field.
    using Lat =
        demo1::field::Lat<
            TOpt
        >;
    
    /// @brief Definition of <b>"Lon"</b> field.
    using Lon =
        demo1::field::Lon<
            TOpt
        >;
    
    /// @brief Definition of <b>"Height"</b> field.
    /// @details
    ///     Height above ellipsoid in mm
    struct Height : public
        comms::field::IntValue<
            demo1::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsMillimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "Height";
        }
        
    };
    
    /// @brief Definition of <b>"Some Scaled Value"</b> field.
    /// @details
    ///     Some scaled value without units.
    struct SomeScaledVal : public
        comms::field::IntValue<
            demo1::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 100>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "Some Scaled Value";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Lat,
        Lon,
        Height,
        SomeScaledVal
    >;
};

/// @brief Definition of <b>"Scaled Ints"</b> message class.
/// @details
///     See @ref ScaledIntsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "demo1/message/ScaledInts.h"
template <typename TMsgBase, typename TOpt = demo1::options::DefaultOptions>
class ScaledInts : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::ScaledInts,
        comms::option::def::StaticNumIdImpl<demo1::MsgId_ScaledInts>,
        comms::option::def::FieldsImpl<typename ScaledIntsFields<TOpt>::All>,
        comms::option::def::MsgType<ScaledInts<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::ScaledInts,
            comms::option::def::StaticNumIdImpl<demo1::MsgId_ScaledInts>,
            comms::option::def::FieldsImpl<typename ScaledIntsFields<TOpt>::All>,
            comms::option::def::MsgType<ScaledInts<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_lat() for @ref ScaledIntsFields::Lat field.
    ///     @li @b field_lon() for @ref ScaledIntsFields::Lon field.
    ///     @li @b field_height() for @ref ScaledIntsFields::Height field.
    ///     @li @b field_someScaledVal() for @ref ScaledIntsFields::SomeScaledVal field.
    COMMS_MSG_FIELDS_ACCESS(
        lat,
        lon,
        height,
        someScaledVal
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "Scaled Ints";
    }
    
    
};

} // namespace message

} // namespace demo1


