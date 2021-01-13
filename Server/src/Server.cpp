/*
** EPITECH PROJECT, 2020
** Server
** File description:
** Core function of the server 
*/

#include <boost/array.hpp>
#include <iostream>
#include "Server.hpp"
#include <thread>

Server::Server(std::vector<std::string> ip) : _udpSend(ip),
                                              _udpReceive(_ioContext.getIOContext(), ip[2]), _ip(ip)
{
}

Server::~Server()
{
}

void Server::receive()
{
    // while (1) {
    // int type = server->getId();

    // if (type == DataStream::DataType::CONNECTION) {
    //     DataStream::connection data =server->getData<DataStream::connection>();
    //     std::string clientIp;
    //     for (int count = 0; count < data.clientIp[count] != '\0'; count++)
    //         clientIp.push_back(data.clientIp[count]);
    //     std::string port;
    //     for (int count = 0; count < data.port[count] != '\0'; count++)
    //         port.push_back(data.port[count]);
    //     std::vector<std::string> ip;
    //     ip.push_back(clientIp);
    //     ip.push_back(port);
    //     _udpSend.createNewSocket(_ioContext.getIOContext(), ip);
    // }
    // }
}

int Server::getId()
{
    return this->_udpReceive.getId();
}

int Server::getSocketsSize()
{
    return this->_udpSend.getSocketsSize();
}

void Server::destroySocket(int playerNum)
{
    this->_udpSend.destroySocket(playerNum);
}

void Server::createNewSocket(std::vector<std::string> ip)
{
    _udpSend.createNewSocket(_ioContext.getIOContext(), ip);
}
