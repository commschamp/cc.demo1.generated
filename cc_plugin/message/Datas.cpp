#include "Datas.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "demo1/message/Datas.h"
namespace cc = comms_champion;

namespace demo1
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_f3Len()
{
    using Field = demo1::message::DatasFields<>::F3Len;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_f1()
{
    using Field = demo1::message::DatasFields<>::F1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_f2()
{
    using Field = demo1::message::DatasFields<>::F2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_f3()
{
    using Field = demo1::message::DatasFields<>::F3;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_f4()
{
    using Field = demo1::message::DatasFields<>::F4;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_f3Len());
    props.append(createProps_f1());
    props.append(createProps_f2());
    props.append(createProps_f3());
    props.append(createProps_f4());
    return props;
}

} // namespace

class DatasImpl : public
    comms_champion::ProtocolMessageBase<
        demo1::message::Datas<demo1::cc_plugin::Message>,
        DatasImpl
    >
{
public:
    DatasImpl() = default;
    DatasImpl(const DatasImpl&) = delete;
    DatasImpl(DatasImpl&&) = delete;
    virtual ~DatasImpl() = default;
    DatasImpl& operator=(const DatasImpl&) = default;
    DatasImpl& operator=(DatasImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Datas::Datas() : m_pImpl(new DatasImpl) {}
Datas::~Datas() = default;

Datas& Datas::operator=(const Datas& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Datas& Datas::operator=(Datas&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Datas::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Datas::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Datas::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Datas::resetImpl()
{
    m_pImpl->reset();
}

bool Datas::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Datas*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Datas::MsgIdParamType Datas::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Datas::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Datas::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Datas::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Datas::lengthImpl() const
{
    return m_pImpl->length();
}

bool Datas::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace demo1


