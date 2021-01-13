/*
** EPITECH PROJECT, 2020
** AUDPSocket
** File description:
** Abstract class of UDP Socket
*/

#ifndef AUDPSOCKET_HPP_
#define AUDPSOCKET_HPP_

#include "IUDPSocket.hpp"

/**
 * @class AUDPSocket
 * @brief abstract class of UDPSocket
 */
class AUDPSocket {
    protected:
        /**
         * @brief pointer to socket
         * 
         */
        std::shared_ptr<boost::asio::ip::udp::socket> _socket;
};

#endif /* !AUDPSOCKET_HPP_ */
