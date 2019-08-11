#include "ScaledInts.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "demo1/message/ScaledInts.h"
#include "cc_plugin/field/Lat.h"
#include "cc_plugin/field/Lon.h"

namespace cc = comms_champion;

namespace demo1
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_lat()
{
    using Field = demo1::message::ScaledIntsFields<>::Lat;
    auto props = cc_plugin::field::createProps_lat(Field::name());
    return props;
    
}

static QVariantMap createProps_lon()
{
    using Field = demo1::message::ScaledIntsFields<>::Lon;
    auto props = cc_plugin::field::createProps_lon(Field::name());
    return props;
    
}

static QVariantMap createProps_height()
{
    using Field = demo1::message::ScaledIntsFields<>::Height;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_someScaledVal()
{
    using Field = demo1::message::ScaledIntsFields<>::SomeScaledVal;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(2U)
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_lat());
    props.append(createProps_lon());
    props.append(createProps_height());
    props.append(createProps_someScaledVal());
    return props;
}

} // namespace

class ScaledIntsImpl : public
    comms_champion::ProtocolMessageBase<
        demo1::message::ScaledInts<demo1::cc_plugin::Message>,
        ScaledIntsImpl
    >
{
public:
    ScaledIntsImpl() = default;
    ScaledIntsImpl(const ScaledIntsImpl&) = delete;
    ScaledIntsImpl(ScaledIntsImpl&&) = delete;
    virtual ~ScaledIntsImpl() = default;
    ScaledIntsImpl& operator=(const ScaledIntsImpl&) = default;
    ScaledIntsImpl& operator=(ScaledIntsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

ScaledInts::ScaledInts() : m_pImpl(new ScaledIntsImpl) {}
ScaledInts::~ScaledInts() = default;

ScaledInts& ScaledInts::operator=(const ScaledInts& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

ScaledInts& ScaledInts::operator=(ScaledInts&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* ScaledInts::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& ScaledInts::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void ScaledInts::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void ScaledInts::resetImpl()
{
    m_pImpl->reset();
}

bool ScaledInts::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const ScaledInts*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

ScaledInts::MsgIdParamType ScaledInts::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus ScaledInts::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus ScaledInts::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool ScaledInts::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t ScaledInts::lengthImpl() const
{
    return m_pImpl->length();
}

bool ScaledInts::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace demo1


