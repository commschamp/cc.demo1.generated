#pragma once

#include <QtCore/QObject>
#include <QtCore/QtPlugin>
#include "comms_champion/Plugin.h"

namespace demo1
{

namespace cc_plugin
{

namespace plugin
{

class Demo1Plugin : public comms_champion::Plugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "demo1" FILE "Demo1Plugin.json")
    Q_INTERFACES(comms_champion::Plugin)

public:
    Demo1Plugin();
    virtual ~Demo1Plugin();
};

} // namespace plugin

} // namespace cc_plugin

} // namespace demo1


