/*
** EPITECH PROJECT, 2020
** UDPSend
** File description:
** UDPSend
*/

#include "UDPSend.hpp"
#include <boost/archive/binary_oarchive.hpp>
#include <boost/serialization/serialization.hpp>

void UDPSend::sendID(int player, int _id)
{
    std::vector<char> sBuffer;
    sBuffer.reserve(sizeof(int));

    std::memcpy(sBuffer.data(), &_id, sizeof(int));
    (*(*_sockets[player]).getSocket()).send(boost::asio::buffer(sBuffer.data(), sizeof(int)));
}

void UDPSend::createNewSocket(std::shared_ptr<boost::asio::io_context> _io_context, std::vector<std::string> ip)
{
    std::shared_ptr<UDPSendSocket> _newSocket = std::make_shared<UDPSendSocket>(_io_context, ip);
    _sockets.push_back(_newSocket);
}

UDPSend::UDPSend(std::vector<std::string> _ip)
{
}

UDPSend::~UDPSend()
{
}

int UDPSend::getSocketsSize()
{
    return _sockets.size();
}

void UDPSend::destroySocket(int player)
{
    _sockets.erase(_sockets.begin() + player);
}
