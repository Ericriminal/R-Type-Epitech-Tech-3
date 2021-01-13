/*
** EPITECH PROJECT, 2020
** Client
** File description:
** Client
*/

#include "data/Data.hpp"
#include "Client.hpp"

int Client::getId()
{
    return _udpReceive.getId();
}

Client::Client(std::vector<std::string> _ip) : _udpSend(_ip),
_udpReceive(_ioContext.getIOContext(), _ip[3]), _ip(_ip)
{
    myPlayerId = -1;
}

Client::~Client()
{
}

void Client::connectToServer(int status)
{
    DataStream::connection connect;
    connect.status = 0;
    strcpy(connect.clientIp, _ip[2].c_str());
    strcpy(connect.port, _ip[3].c_str());

    _udpSend.createNewSocket(_ioContext.getIOContext(), _ip);
    _udpSend.send(0, DataStream::DataType::CONNECTION, connect);
    this->getId();
    DataStream::connected data = this->getData<DataStream::connected>();
    myPlayerId = data.playerNum;
    _udpSend.send(0, DataStream::DataType::PING, DataStream::ping{});
}

void Client::createNewSocket(std::vector<std::string> ip)
{
    _udpSend.createNewSocket(_ioContext.getIOContext(), ip);
}
