// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains definition of protocol data view default options.

#pragma once

#include "demo1/options/DefaultOptions.h"

namespace demo1
{

namespace options
{

/// @brief Default data view options of the protocol.
template <typename TBase = demo1::options::DefaultOptions>
struct DataViewDefaultOptionsT : public TBase
{
    /// @brief Extra options for messages.
    struct message : public TBase::message
    {
        /// @brief Extra options for fields of
        ///     @ref demo1::message::Datas message.
        struct DatasFields : public TBase::message::DatasFields
        {
            /// @brief Extra options for @ref
            ///     demo1::message::DatasFields::F1 field.
            using F1 =
                std::tuple<
                    comms::option::app::OrigDataView,
                    typename TBase::message::DatasFields::F1
                >;

            /// @brief Extra options for @ref
            ///     demo1::message::DatasFields::F2 field.
            using F2 =
                std::tuple<
                    comms::option::app::OrigDataView,
                    typename TBase::message::DatasFields::F2
                >;

            /// @brief Extra options for @ref
            ///     demo1::message::DatasFields::F3 field.
            using F3 =
                std::tuple<
                    comms::option::app::OrigDataView,
                    typename TBase::message::DatasFields::F3
                >;

            /// @brief Extra options for @ref
            ///     demo1::message::DatasFields::F4 field.
            using F4 =
                std::tuple<
                    comms::option::app::OrigDataView,
                    typename TBase::message::DatasFields::F4
                >;
        };

        /// @brief Extra options for fields of
        ///     @ref demo1::message::Lists message.
        struct ListsFields : public TBase::message::ListsFields
        {
            struct F4Members : public TBase::message::ListsFields::F4Members
            {
                struct ElementMembers : public TBase::message::ListsFields::F4Members::ElementMembers
                {
                    /// @brief Extra options for @ref
                    ///     demo1::message::ListsFields::F4Members::ElementMembers::Mem2
                    ///     field.
                    using Mem2 =
                        std::tuple<
                            comms::option::app::OrigDataView,
                            typename TBase::message::ListsFields::F4Members::ElementMembers::Mem2
                        >;
                }; // struct ElementMembers
            }; // struct F4Members
        };

        /// @brief Extra options for fields of
        ///     @ref demo1::message::Strings message.
        struct StringsFields : public TBase::message::StringsFields
        {
            /// @brief Extra options for @ref
            ///     demo1::message::StringsFields::F1 field.
            using F1 =
                std::tuple<
                    comms::option::app::OrigDataView,
                    typename TBase::message::StringsFields::F1
                >;

            /// @brief Extra options for @ref
            ///     demo1::message::StringsFields::F2 field.
            using F2 =
                std::tuple<
                    comms::option::app::OrigDataView,
                    typename TBase::message::StringsFields::F2
                >;

            /// @brief Extra options for @ref
            ///     demo1::message::StringsFields::F3 field.
            using F3 =
                std::tuple<
                    comms::option::app::OrigDataView,
                    typename TBase::message::StringsFields::F3
                >;

            /// @brief Extra options for @ref
            ///     demo1::message::StringsFields::F4 field.
            using F4 =
                std::tuple<
                    comms::option::app::OrigDataView,
                    typename TBase::message::StringsFields::F4
                >;

            /// @brief Extra options for @ref
            ///     demo1::message::StringsFields::F5 field.
            using F5 =
                std::tuple<
                    comms::option::app::OrigDataView,
                    typename TBase::message::StringsFields::F5
                >;
        };

        /// @brief Extra options for fields of
        ///     @ref demo1::message::Variants message.
        struct VariantsFields : public TBase::message::VariantsFields
        {
            struct Props1Members : public TBase::message::VariantsFields::Props1Members
            {
                struct PropertyMembers : public TBase::message::VariantsFields::Props1Members::PropertyMembers
                {
                    struct Prop3Members : public TBase::message::VariantsFields::Props1Members::PropertyMembers::Prop3Members
                    {
                        /// @brief Extra options for @ref
                        ///     demo1::message::VariantsFields::Props1Members::PropertyMembers::Prop3Members::Val
                        ///     field.
                        using Val =
                            std::tuple<
                                comms::option::app::OrigDataView,
                                typename TBase::message::VariantsFields::Props1Members::PropertyMembers::Prop3Members::Val
                            >;
                    }; // struct Prop3Members
                }; // struct PropertyMembers
            }; // struct Props1Members

            struct Props2Members : public TBase::message::VariantsFields::Props2Members
            {
                struct PropertyMembers : public TBase::message::VariantsFields::Props2Members::PropertyMembers
                {
                    struct Prop3Members : public TBase::message::VariantsFields::Props2Members::PropertyMembers::Prop3Members
                    {
                        /// @brief Extra options for @ref
                        ///     demo1::message::VariantsFields::Props2Members::PropertyMembers::Prop3Members::Val
                        ///     field.
                        using Val =
                            std::tuple<
                                comms::option::app::OrigDataView,
                                typename TBase::message::VariantsFields::Props2Members::PropertyMembers::Prop3Members::Val
                            >;
                    }; // struct Prop3Members

                    struct UnknownPropMembers : public TBase::message::VariantsFields::Props2Members::PropertyMembers::UnknownPropMembers
                    {
                        /// @brief Extra options for @ref
                        ///     demo1::message::VariantsFields::Props2Members::PropertyMembers::UnknownPropMembers::Val
                        ///     field.
                        using Val =
                            std::tuple<
                                comms::option::app::OrigDataView,
                                typename TBase::message::VariantsFields::Props2Members::PropertyMembers::UnknownPropMembers::Val
                            >;
                    }; // struct UnknownPropMembers
                }; // struct PropertyMembers
            }; // struct Props2Members
        };
    }; // struct message

    /// @brief Extra options for frames.
    struct frame : public TBase::frame
    {
        /// @brief Extra options for layers of
        ///     @ref demo1::frame::Frame frame.
        struct FrameLayers : public TBase::frame::FrameLayers
        {
            /// @brief Extra options for @ref
            ///     demo1::frame::FrameLayers::Data layer.
            using Data =
                std::tuple<
                    comms::option::app::OrigDataView,
                    typename TBase::frame::FrameLayers::Data
                >;
        }; // struct FrameLayers
    }; // struct frame
};

/// @brief Alias to @ref DataViewDefaultOptionsT with default template parameter.
using DataViewDefaultOptions = DataViewDefaultOptionsT<>;

} // namespace options

} // namespace demo1
