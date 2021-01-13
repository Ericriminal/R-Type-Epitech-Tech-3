/*
** EPITECH PROJECT, 2020
** RemoteEndpoint
** File description:
** RemoteEndpoint
*/

#include "RemoteEndpoint.hpp"

RemoteEndpoint::RemoteEndpoint(std::string port)
{
    int _port = std::stoi(port);
    _endpoint = std::make_shared<boost::asio::ip::udp::endpoint>(boost::asio::ip::udp::v4(), _port);
}

RemoteEndpoint::~RemoteEndpoint()
{
}

std::shared_ptr<boost::asio::ip::udp::endpoint> RemoteEndpoint::getRemoteEndpoint()
{
    return (_endpoint);
}