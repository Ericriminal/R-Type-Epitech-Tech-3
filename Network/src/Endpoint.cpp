/*
** EPITECH PROJECT, 2020
** Endpoint
** File description:
** Endpoint
*/

#include "Endpoint.hpp"

std::shared_ptr<boost::asio::ip::udp::resolver::iterator> Endpoint::getEndpoint()
{
    return (_endpoint);
}

Endpoint::Endpoint(std::shared_ptr<boost::asio::io_context> _io_context, std::vector<std::string> _ip)
{
    _resolver = std::make_shared<boost::asio::ip::udp::resolver>(*_io_context);
    _endpoint = std::make_shared<boost::asio::ip::udp::resolver::iterator>((*_resolver).resolve(boost::asio::ip::udp::resolver::query(_ip[0], _ip[1])));
}

Endpoint::~Endpoint()
{
}
