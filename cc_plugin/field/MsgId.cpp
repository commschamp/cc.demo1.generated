#include "MsgId.h"

#include "comms_champion/property/field.h"
#include "demo1/field/MsgId.h"


namespace cc = comms_champion;

namespace demo1
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_msgId(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = demo1::field::MsgId<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("Ack", 0)
            .add("SimpleInts", 1)
            .add("ScaledInts", 2)
            .add("Floats", 3)
            .add("Enums", 4)
            .add("Sets", 5)
            .add("Bitfields", 6)
            .add("Strings", 7)
            .add("Datas", 8)
            .add("Lists", 9)
            .add("Optionals", 10)
            .add("Variants", 11)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace demo1


