#pragma once

#include "demo1/frame/Frame.h"
#include "cc_plugin/Message.h"
#include "cc_plugin/input/AllMessages.h"

namespace demo1
{

namespace cc_plugin
{

namespace frame
{

using Frame =
    demo1::frame::Frame<
        demo1::cc_plugin::Message,
        demo1::cc_plugin::input::AllMessages
    >;

} // namespace frame

} // namespace cc_plugin

} // namespace demo1


