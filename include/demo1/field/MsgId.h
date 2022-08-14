// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains definition of <b>"MsgId"</b> field.

#pragma once

#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "demo1/field/FieldBase.h"
#include "demo1/field/MsgIdCommon.h"
#include "demo1/options/DefaultOptions.h"

namespace demo1
{

namespace field
{

/// @brief Definition of <b>"MsgId"</b> field.
/// @see @ref demo1::MsgId
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = demo1::options::DefaultOptions, typename... TExtraOpts>
class MsgId : public
    comms::field::EnumValue<
        demo1::field::FieldBase<>,
        demo1::field::MsgIdCommon::ValueType,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 11>
    >
{
    using Base =
        comms::field::EnumValue<
            demo1::field::FieldBase<>,
            demo1::field::MsgIdCommon::ValueType,
            TExtraOpts...,
            comms::option::def::ValidNumValueRange<0, 11>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Single value name info entry.
    using ValueNameInfo = demo1::field::MsgIdCommon::ValueNameInfo;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @see @ref demo1::field::MsgIdCommon::ValueNamesMapInfo.
    using ValueNamesMapInfo = demo1::field::MsgIdCommon::ValueNamesMapInfo;

    /// @brief Retrieve name of the enum value.
    /// @see @ref demo1::field::MsgIdCommon::valueName().
    static const char* valueName(ValueType val)
    {
        return demo1::field::MsgIdCommon::valueName(val);
    }

    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::getValue());
    }

    /// @brief Retrieve map of enum value names.
    /// @see @ref demo1::field::MsgIdCommon::valueNamesMap().
    static ValueNamesMapInfo valueNamesMap()
    {
        return demo1::field::MsgIdCommon::valueNamesMap();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return demo1::field::MsgIdCommon::name();
    }
};

} // namespace field

} // namespace demo1
