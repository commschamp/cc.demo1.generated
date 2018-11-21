#include "Demo1Plugin.h"

#include "Demo1Protocol.h"

namespace cc = comms_champion;

namespace demo1
{

namespace cc_plugin
{

namespace plugin
{

Demo1Plugin::Demo1Plugin()
{
    pluginProperties()
        .setProtocolCreateFunc(
            []() -> cc::ProtocolPtr
            {
                return cc::ProtocolPtr(new Demo1Protocol());
            });
}

Demo1Plugin::~Demo1Plugin() = default;

} // namespace plugin

} // namespace cc_plugin

} // namespace demo1


