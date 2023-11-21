// Generated by commsdsl2comms v6.2.4

/// @file
/// @brief Contains definition of protocol bare metal default options.

#pragma once

#include "cc_demo1/options/DefaultOptions.h"

#ifndef DEFAULT_SEQ_FIXED_STORAGE_SIZE
/// @brief Define default fixed size for various sequence fields
/// @details May be defined during compile time to change the default value.
#define DEFAULT_SEQ_FIXED_STORAGE_SIZE 32
#endif

namespace cc_demo1
{

namespace options
{

/// @brief Default bare metal options of the protocol.
template <typename TBase = cc_demo1::options::DefaultOptions>
struct BareMetalDefaultOptionsT : public TBase
{
    /// @brief Extra options for messages.
    struct message : public TBase::message
    {
        /// @brief Extra options for fields of
        ///     @ref cc_demo1::message::Datas message.
        struct DatasFields : public TBase::message::DatasFields
        {
            /// @brief Extra options for @ref
            ///     cc_demo1::message::DatasFields::F1
            ///     field.
            using F1 =
                std::tuple<
                    comms::option::app::SequenceFixedSizeUseFixedSizeStorage,
                    typename TBase::message::DatasFields::F1
                >;

            /// @brief Extra options for @ref
            ///     cc_demo1::message::DatasFields::F2
            ///     field.
            using F2 =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::DatasFields::F2
                >;

            /// @brief Extra options for @ref
            ///     cc_demo1::message::DatasFields::F3
            ///     field.
            using F3 =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::DatasFields::F3
                >;

            /// @brief Extra options for @ref
            ///     cc_demo1::message::DatasFields::F4
            ///     field.
            using F4 =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::DatasFields::F4
                >;
        };

        /// @brief Extra options for fields of
        ///     @ref cc_demo1::message::Lists message.
        struct ListsFields : public TBase::message::ListsFields
        {
            /// @brief Extra options for @ref
            ///     cc_demo1::message::ListsFields::F1
            ///     field.
            using F1 =
                std::tuple<
                    comms::option::app::SequenceFixedSizeUseFixedSizeStorage,
                    typename TBase::message::ListsFields::F1
                >;

            /// @brief Extra options for @ref
            ///     cc_demo1::message::ListsFields::F2
            ///     field.
            using F2 =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::ListsFields::F2
                >;

            /// @brief Extra options for @ref
            ///     cc_demo1::message::ListsFields::F3
            ///     field.
            using F3 =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::ListsFields::F3
                >;

            struct F4Members : public TBase::message::ListsFields::F4Members
            {
                struct ElementMembers : public TBase::message::ListsFields::F4Members::ElementMembers
                {
                    /// @brief Extra options for @ref
                    ///     cc_demo1::message::ListsFields::F4Members::ElementMembers::Mem2
                    ///     field.
                    using Mem2 =
                        std::tuple<
                            comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                            typename TBase::message::ListsFields::F4Members::ElementMembers::Mem2
                        >;
                }; // struct ElementMembers
            }; // struct F4Members

            /// @brief Extra options for @ref
            ///     cc_demo1::message::ListsFields::F4
            ///     field.
            using F4 =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::ListsFields::F4
                >;

            /// @brief Extra options for @ref
            ///     cc_demo1::message::ListsFields::F5
            ///     field.
            using F5 =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::ListsFields::F5
                >;
        };

        /// @brief Extra options for fields of
        ///     @ref cc_demo1::message::Strings message.
        struct StringsFields : public TBase::message::StringsFields
        {
            /// @brief Extra options for @ref
            ///     cc_demo1::message::StringsFields::F1
            ///     field.
            using F1 =
                std::tuple<
                    comms::option::app::SequenceFixedSizeUseFixedSizeStorage,
                    typename TBase::message::StringsFields::F1
                >;

            /// @brief Extra options for @ref
            ///     cc_demo1::message::StringsFields::F2
            ///     field.
            using F2 =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::StringsFields::F2
                >;

            /// @brief Extra options for @ref
            ///     cc_demo1::message::StringsFields::F3
            ///     field.
            using F3 =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::StringsFields::F3
                >;

            /// @brief Extra options for @ref
            ///     cc_demo1::message::StringsFields::F4
            ///     field.
            using F4 =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::StringsFields::F4
                >;

            /// @brief Extra options for @ref
            ///     cc_demo1::message::StringsFields::F5
            ///     field.
            using F5 =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::StringsFields::F5
                >;
        };

        /// @brief Extra options for fields of
        ///     @ref cc_demo1::message::Variants message.
        struct VariantsFields : public TBase::message::VariantsFields
        {
            struct Props1Members : public TBase::message::VariantsFields::Props1Members
            {
                struct PropertyMembers : public TBase::message::VariantsFields::Props1Members::PropertyMembers
                {
                    struct Prop3Members : public TBase::message::VariantsFields::Props1Members::PropertyMembers::Prop3Members
                    {
                        /// @brief Extra options for @ref
                        ///     cc_demo1::message::VariantsFields::Props1Members::PropertyMembers::Prop3Members::Val
                        ///     field.
                        using Val =
                            std::tuple<
                                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                                typename TBase::message::VariantsFields::Props1Members::PropertyMembers::Prop3Members::Val
                            >;
                    }; // struct Prop3Members
                }; // struct PropertyMembers
            }; // struct Props1Members

            /// @brief Extra options for @ref
            ///     cc_demo1::message::VariantsFields::Props1
            ///     field.
            using Props1 =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::VariantsFields::Props1
                >;

            struct Props2Members : public TBase::message::VariantsFields::Props2Members
            {
                struct PropertyMembers : public TBase::message::VariantsFields::Props2Members::PropertyMembers
                {
                    struct Prop3Members : public TBase::message::VariantsFields::Props2Members::PropertyMembers::Prop3Members
                    {
                        /// @brief Extra options for @ref
                        ///     cc_demo1::message::VariantsFields::Props2Members::PropertyMembers::Prop3Members::Val
                        ///     field.
                        using Val =
                            std::tuple<
                                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                                typename TBase::message::VariantsFields::Props2Members::PropertyMembers::Prop3Members::Val
                            >;
                    }; // struct Prop3Members

                    struct UnknownPropMembers : public TBase::message::VariantsFields::Props2Members::PropertyMembers::UnknownPropMembers
                    {
                        /// @brief Extra options for @ref
                        ///     cc_demo1::message::VariantsFields::Props2Members::PropertyMembers::UnknownPropMembers::Val
                        ///     field.
                        using Val =
                            std::tuple<
                                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                                typename TBase::message::VariantsFields::Props2Members::PropertyMembers::UnknownPropMembers::Val
                            >;
                    }; // struct UnknownPropMembers
                }; // struct PropertyMembers
            }; // struct Props2Members

            /// @brief Extra options for @ref
            ///     cc_demo1::message::VariantsFields::Props2
            ///     field.
            using Props2 =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::VariantsFields::Props2
                >;
        };
    }; // struct message

    /// @brief Extra options for frames.
    struct frame : public TBase::frame
    {
        /// @brief Extra options for layers of
        ///     @ref cc_demo1::frame::Frame frame.
        struct FrameLayers : public TBase::frame::FrameLayers
        {
            /// @brief Extra options for @ref
            ///     cc_demo1::frame::FrameLayers::Data
            ///     layer.
            using Data =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE * 8>,
                    typename TBase::frame::FrameLayers::Data
                >;

            /// @brief Extra options for @ref
            ///     cc_demo1::frame::FrameLayers::Id layer.
            using Id =
                std::tuple<
                    comms::option::app::InPlaceAllocation,
                    typename TBase::frame::FrameLayers::Id
                >;
        }; // struct FrameLayers
    }; // struct frame
};

/// @brief Alias to @ref BareMetalDefaultOptionsT with default template parameter.
using BareMetalDefaultOptions = BareMetalDefaultOptionsT<>;

} // namespace options

} // namespace cc_demo1
