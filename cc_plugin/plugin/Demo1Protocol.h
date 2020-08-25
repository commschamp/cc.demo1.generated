// Generated by commsdsl2comms v3.5.1

#pragma once

#include "comms_champion/Protocol.h"

namespace demo1
{

namespace cc_plugin
{

namespace plugin
{

class Demo1ProtocolImpl;
class Demo1Protocol : public comms_champion::Protocol
{
public:
    Demo1Protocol();
    virtual ~Demo1Protocol();

protected:
    virtual const QString& nameImpl() const override;
    virtual MessagesList readImpl(const comms_champion::DataInfo& dataInfo, bool final) override;
    virtual comms_champion::DataInfoPtr writeImpl(comms_champion::Message& msg) override;
    virtual MessagesList createAllMessagesImpl() override;
    virtual comms_champion::MessagePtr createMessageImpl(const QString& idAsString, unsigned idx) override;
    virtual UpdateStatus updateMessageImpl(comms_champion::Message& msg) override;
    virtual comms_champion::MessagePtr cloneMessageImpl(const comms_champion::Message& msg) override;
    virtual comms_champion::MessagePtr createInvalidMessageImpl() override;
    virtual comms_champion::MessagePtr createRawDataMessageImpl() override;
    virtual comms_champion::MessagePtr createExtraInfoMessageImpl() override;

private:
    std::unique_ptr<Demo1ProtocolImpl> m_pImpl;
};

} // namespace plugin

} // namespace cc_plugin

} // namespace demo1


