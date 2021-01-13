/*
** EPITECH PROJECT, 2020
** UDPSendSocket
** File description:
** UDPSendSocket
*/

#include "UDPSendSocket.hpp"

void UDPSendSocket::connect(std::vector<std::string> _ip)
{
    boost::asio::connect((*_socket), (*_endpoint.getEndpoint()));
}

UDPSendSocket::UDPSendSocket(std::shared_ptr<boost::asio::io_context> _io_context, std::vector<std::string> _ip) : _endpoint(_io_context, _ip)
{
    _m_io_context = _io_context;
    _socket = std::make_shared<boost::asio::ip::udp::socket>(*_m_io_context);
    connect(_ip);
}

UDPSendSocket::~UDPSendSocket()
{
}

std::shared_ptr<boost::asio::ip::udp::socket> UDPSendSocket::getSocket()
{
    return (_socket);
}