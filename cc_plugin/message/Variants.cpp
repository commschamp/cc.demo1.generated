#include "Variants.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "demo1/message/Variants.h"
namespace cc = comms_champion;

namespace demo1
{

namespace cc_plugin
{

namespace message
{

namespace
{

struct PropertiesMembers
{
    struct PropertyMembers
    {
        struct Prop1Members
        {
            static QVariantMap createProps_key()
            {
                using Field = demo1::message::VariantsFields<>::PropertiesMembers::PropertyMembers::Prop1Members::Key;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .asMap();
                
            }
            
            static QVariantMap createProps_val()
            {
                using Field = demo1::message::VariantsFields<>::PropertiesMembers::PropertyMembers::Prop1Members::Val;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_prop1()
        {
            using Field = demo1::message::VariantsFields<>::PropertiesMembers::PropertyMembers::Prop1;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(Prop1Members::createProps_key())
                    .add(Prop1Members::createProps_val())
                    .asMap();
            
        }
        
        struct Prop2Members
        {
            static QVariantMap createProps_key()
            {
                using Field = demo1::message::VariantsFields<>::PropertiesMembers::PropertyMembers::Prop2Members::Key;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .asMap();
                
            }
            
            static QVariantMap createProps_val()
            {
                using Field = demo1::message::VariantsFields<>::PropertiesMembers::PropertyMembers::Prop2Members::Val;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_prop2()
        {
            using Field = demo1::message::VariantsFields<>::PropertiesMembers::PropertyMembers::Prop2;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(Prop2Members::createProps_key())
                    .add(Prop2Members::createProps_val())
                    .asMap();
            
        }
        
        struct Prop3Members
        {
            static QVariantMap createProps_key()
            {
                using Field = demo1::message::VariantsFields<>::PropertiesMembers::PropertyMembers::Prop3Members::Key;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .asMap();
                
            }
            
            static QVariantMap createProps_val()
            {
                using Field = demo1::message::VariantsFields<>::PropertiesMembers::PropertyMembers::Prop3Members::Val;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_prop3()
        {
            using Field = demo1::message::VariantsFields<>::PropertiesMembers::PropertyMembers::Prop3;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(Prop3Members::createProps_key())
                    .add(Prop3Members::createProps_val())
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_property()
    {
        using Field = demo1::message::VariantsFields<>::PropertiesMembers::Property;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(PropertyMembers::createProps_prop1())
                .add(PropertyMembers::createProps_prop2())
                .add(PropertyMembers::createProps_prop3())
                .serialisedHidden()
                .asMap();
        
    }
    
};

static QVariantMap createProps_properties()
{
    using Field = demo1::message::VariantsFields<>::Properties;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(PropertiesMembers::createProps_property())
            .serialisedHidden()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_properties());
    return props;
}

} // namespace

class VariantsImpl : public
    comms_champion::ProtocolMessageBase<
        demo1::message::Variants<demo1::cc_plugin::Message>,
        VariantsImpl
    >
{
public:
    VariantsImpl() = default;
    VariantsImpl(const VariantsImpl&) = delete;
    VariantsImpl(VariantsImpl&&) = delete;
    virtual ~VariantsImpl() = default;
    VariantsImpl& operator=(const VariantsImpl&) = default;
    VariantsImpl& operator=(VariantsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Variants::Variants() : m_pImpl(new VariantsImpl) {}
Variants::~Variants() = default;

Variants& Variants::operator=(const Variants& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Variants& Variants::operator=(Variants&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Variants::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Variants::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Variants::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Variants::resetImpl()
{
    m_pImpl->reset();
}

bool Variants::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Variants*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Variants::MsgIdParamType Variants::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Variants::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Variants::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Variants::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Variants::lengthImpl() const
{
    return m_pImpl->length();
}

bool Variants::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace demo1


