/*
** EPITECH PROJECT, 2020
** IUDPSocket
** File description:
** interface class of UDP Socket
*/

#ifndef IUDPSOCKET_HPP_
#define IUDPSOCKET_HPP_

#include <boost/asio.hpp>

/**
 * @brief Interface of UDPSocket
 * @class IUDPSocket
 */
class IUDPSocket {
    public:
        /**
         * @brief Get the Socket object
         * 
         * @return std::shared_ptr<boost::asio::ip::udp::socket> 
         */
        virtual std::shared_ptr<boost::asio::ip::udp::socket> getSocket() = 0;
};

#endif /* !IUDPSOCKET_HPP_ */
