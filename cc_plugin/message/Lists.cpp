#include "Lists.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "demo1/message/Lists.h"
namespace cc = comms_champion;

namespace demo1
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_f2Count()
{
    using Field = demo1::message::ListsFields<>::F2Count;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct F1Members
{
    static QVariantMap createProps_elem()
    {
        using Field = demo1::message::ListsFields<>::F1Members::Elem;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_f1()
{
    using Field = demo1::message::ListsFields<>::F1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(F1Members::createProps_elem())
            .serialisedHidden()
            .asMap();
    
}

struct F2Members
{
    static QVariantMap createProps_elem()
    {
        using Field = demo1::message::ListsFields<>::F2Members::Elem;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_f2()
{
    using Field = demo1::message::ListsFields<>::F2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(F2Members::createProps_elem())
            .serialisedHidden()
            .asMap();
    
}

struct F3Members
{
    struct ElementMembers
    {
        static QVariantMap createProps_mem1()
        {
            using Field = demo1::message::ListsFields<>::F3Members::ElementMembers::Mem1;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_mem2()
        {
            using Field = demo1::message::ListsFields<>::F3Members::ElementMembers::Mem2;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = demo1::message::ListsFields<>::F3Members::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_mem1())
                .add(ElementMembers::createProps_mem2())
                .asMap();
        
    }
    
};

static QVariantMap createProps_f3()
{
    using Field = demo1::message::ListsFields<>::F3;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(F3Members::createProps_element())
            .serialisedHidden()
            .prefixName("CountPrefix")
            .showPrefix()
            .asMap();
    
}

struct F4Members
{
    struct ElementMembers
    {
        static QVariantMap createProps_mem1()
        {
            using Field = demo1::message::ListsFields<>::F4Members::ElementMembers::Mem1;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden()
                    .asMap();
            
        }
        
        static QVariantMap createProps_mem2()
        {
            using Field = demo1::message::ListsFields<>::F4Members::ElementMembers::Mem2;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden()
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = demo1::message::ListsFields<>::F4Members::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(ElementMembers::createProps_mem1())
                .add(ElementMembers::createProps_mem2())
                .asMap();
        
    }
    
};

static QVariantMap createProps_f4()
{
    using Field = demo1::message::ListsFields<>::F4;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(F4Members::createProps_element())
            .asMap();
    
}

struct F5Members
{
    struct ElementMembers
    {
        static QVariantMap createProps_mem1()
        {
            using Field = demo1::message::ListsFields<>::F5Members::ElementMembers::Mem1;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden()
                    .asMap();
            
        }
        
        static QVariantMap createProps_mem2()
        {
            using Field = demo1::message::ListsFields<>::F5Members::ElementMembers::Mem2;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden()
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = demo1::message::ListsFields<>::F5Members::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(ElementMembers::createProps_mem1())
                .add(ElementMembers::createProps_mem2())
                .asMap();
        
    }
    
};

static QVariantMap createProps_f5()
{
    using Field = demo1::message::ListsFields<>::F5;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(F5Members::createProps_element())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_f2Count());
    props.append(createProps_f1());
    props.append(createProps_f2());
    props.append(createProps_f3());
    props.append(createProps_f4());
    props.append(createProps_f5());
    return props;
}

} // namespace

class ListsImpl : public
    comms_champion::ProtocolMessageBase<
        demo1::message::Lists<demo1::cc_plugin::Message>,
        ListsImpl
    >
{
public:
    ListsImpl() = default;
    ListsImpl(const ListsImpl&) = delete;
    ListsImpl(ListsImpl&&) = delete;
    virtual ~ListsImpl() = default;
    ListsImpl& operator=(const ListsImpl&) = default;
    ListsImpl& operator=(ListsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Lists::Lists() : m_pImpl(new ListsImpl) {}
Lists::~Lists() = default;

Lists& Lists::operator=(const Lists& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Lists& Lists::operator=(Lists&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Lists::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Lists::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Lists::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Lists::resetImpl()
{
    m_pImpl->reset();
}

bool Lists::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Lists*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Lists::MsgIdParamType Lists::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Lists::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Lists::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Lists::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Lists::lengthImpl() const
{
    return m_pImpl->length();
}

bool Lists::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace demo1


