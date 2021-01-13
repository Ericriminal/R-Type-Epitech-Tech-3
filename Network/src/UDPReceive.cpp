/*
** EPITECH PROJECT, 2020
** UDPReceive
** File description:
** UDPReceive
*/

#include "UDPReceive.hpp"
#include <boost/archive/binary_iarchive.hpp>
#include <boost/serialization/serialization.hpp>

int UDPReceive::getId()
{
    std::vector<char> gBuffer;
    int ID;
    gBuffer.reserve(sizeof(int));

    (*_socket.getSocket()).receive(boost::asio::buffer(gBuffer.data(), sizeof(int)));
    std::memcpy(reinterpret_cast<char *>(&ID), gBuffer.data(), sizeof(int));
    return (ID);
}

UDPReceive::UDPReceive(std::shared_ptr<boost::asio::io_context> _io_context, std::string port) : _socket(_io_context, port)
{
}

UDPReceive::~UDPReceive()
{
}
