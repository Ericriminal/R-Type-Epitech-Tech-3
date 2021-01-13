/*
** EPITECH PROJECT, 2020
** UDPReceiveSocket
** File description:
** UDPReceiveSocket
*/

#ifndef UDPReceiveSocket_HPP_
#define UDPReceiveSocket_HPP_

#include "AUDPSocket.hpp"
#include "RemoteEndpoint.hpp"

/**
 * @brief class containing socket of reception
 * @class UDPReceiveSocket
 */
class UDPReceiveSocket : public AUDPSocket {
    public:
        /**
         * @brief Construct a new UDPReceiveSocket object
         * 
         * @param _io_context 
         * @param port 
         */
        UDPReceiveSocket(std::shared_ptr<boost::asio::io_context> _io_context, std::string port);
        /**
         * @brief Destroy the UDPReceiveSocket object
         * 
         */
        ~UDPReceiveSocket();
        /**
         * @brief Get the Socket object
         * 
         * @return std::shared_ptr<boost::asio::ip::udp::socket> 
         */
        std::shared_ptr<boost::asio::ip::udp::socket> getSocket();

    private:
        /**
         * @brief class that contain the endpoint to listen at port given
         * 
         */
        RemoteEndpoint _endpoint;
};

#endif /* !UDPReceiveSocket_HPP_ */
