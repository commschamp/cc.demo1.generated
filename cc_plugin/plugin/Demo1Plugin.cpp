// Generated by commsdsl2comms v3.6.0

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
  : m_protocol(new Demo1Protocol())
{
    pluginProperties()
        .setProtocolCreateFunc(
            [this]() -> cc::ProtocolPtr
            {
                return m_protocol;
            })
            ;
}

Demo1Plugin::~Demo1Plugin() = default;

} // namespace plugin

} // namespace cc_plugin

} // namespace demo1


