// Generated by commsdsl2comms v3.3.2

#include "Demo1Protocol.h"

#include <cassert>
#include "comms_champion/ProtocolBase.h"
#include "cc_plugin/frame/Frame.h"
#include "cc_plugin/frame/FrameTransportMessage.h"

namespace cc = comms_champion;

namespace demo1
{

namespace cc_plugin
{

namespace plugin
{

class Demo1ProtocolImpl : public
    cc::ProtocolBase<
        demo1::cc_plugin::frame::Frame,
        demo1::cc_plugin::frame::FrameTransportMessage
    >
{
    using Base =
        cc::ProtocolBase<
            demo1::cc_plugin::frame::Frame,
            demo1::cc_plugin::frame::FrameTransportMessage
        >;
public:
    friend class demo1::cc_plugin::plugin::Demo1Protocol;

    Demo1ProtocolImpl() = default;
    virtual ~Demo1ProtocolImpl() = default;

protected:
    virtual const QString& nameImpl() const override
    {
        static const QString Str("demo1");
        return Str;
    }

    using Base::createInvalidMessageImpl;
    using Base::createRawDataMessageImpl;
    using Base::createExtraInfoMessageImpl;

};

Demo1Protocol::Demo1Protocol()
  : m_pImpl(new Demo1ProtocolImpl())
{
}

Demo1Protocol::~Demo1Protocol() = default;

const QString& Demo1Protocol::nameImpl() const
{
    return m_pImpl->name();
}

Demo1Protocol::MessagesList Demo1Protocol::readImpl(const cc::DataInfo& dataInfo, bool final)
{
    return m_pImpl->read(dataInfo, final);
}

cc::DataInfoPtr Demo1Protocol::writeImpl(cc::Message& msg)
{
    return m_pImpl->write(msg);
}

Demo1Protocol::MessagesList Demo1Protocol::createAllMessagesImpl()
{
    return m_pImpl->createAllMessages();
}

cc::MessagePtr Demo1Protocol::createMessageImpl(const QString& idAsString, unsigned idx)
{
    return static_cast<cc::Protocol*>(m_pImpl.get())->createMessage(idAsString, idx);
}

Demo1Protocol::UpdateStatus Demo1Protocol::updateMessageImpl(cc::Message& msg)
{
    return m_pImpl->updateMessage(msg);
}

cc::MessagePtr Demo1Protocol::cloneMessageImpl(const cc::Message& msg)
{
    return m_pImpl->cloneMessage(msg);
}

cc::MessagePtr Demo1Protocol::createInvalidMessageImpl()
{
    return m_pImpl->createInvalidMessageImpl();
}

cc::MessagePtr Demo1Protocol::createRawDataMessageImpl()
{
    return m_pImpl->createRawDataMessageImpl();
}

cc::MessagePtr Demo1Protocol::createExtraInfoMessageImpl()
{
    return m_pImpl->createExtraInfoMessageImpl();
}

} // namespace plugin

} // namespace cc_plugin

} // namespace demo1


