/*
** EPITECH PROJECT, 2020
** UDPReceiveSocket
** File description:
** UDPReceiveSocket
*/

#include "UDPReceiveSocket.hpp"

UDPReceiveSocket::UDPReceiveSocket(std::shared_ptr<boost::asio::io_context> _io_context, std::string port) : _endpoint(port)
{
    _socket = std::make_shared<boost::asio::ip::udp::socket>(*_io_context, (*_endpoint.getRemoteEndpoint()));
}

UDPReceiveSocket::~UDPReceiveSocket()
{
}

std::shared_ptr<boost::asio::ip::udp::socket> UDPReceiveSocket::getSocket()
{
    return (_socket);
}
