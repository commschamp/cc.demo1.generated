// Generated by commsdsl2comms v3.3.0

#include "PropRemLen.h"

#include "comms_champion/property/field.h"
#include "demo1/field/PropRemLen.h"


namespace cc = comms_champion;

namespace demo1
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_propRemLen(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = demo1::field::PropRemLen<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace demo1


