/*
** EPITECH PROJECT, 2020
** UDPSendSocket
** File description:
** UDPSendSocket
*/

#ifndef UDPSendSocket_HPP_
#define UDPSendSocket_HPP_

#include "Endpoint.hpp"
#include "AUDPSocket.hpp"

/**
 * @brief class that handle the socket to send data
 * @class UDPSendSocket
 */
class UDPSendSocket : public AUDPSocket {
    public:
        /**
         * @brief Construct a new UDPSendSocket object
         * 
         * @param _io_context 
         * @param _ip 
         */
        UDPSendSocket(std::shared_ptr<boost::asio::io_context> _io_context, std::vector<std::string> _ip);
        /**
         * @brief Destroy the UDPSendSocket object
         * 
         */
        ~UDPSendSocket();
        /**
         * @brief Get the Socket object
         * 
         * @return std::shared_ptr<boost::asio::ip::udp::socket> 
         */
        std::shared_ptr<boost::asio::ip::udp::socket> getSocket();

    private:
        /**
         * @brief function to connect the socket to the given ip
         * 
         * @param _ip 
         */
        void connect(std::vector<std::string> _ip);
        /**
         * @brief pointer to io_context
         * 
         */
        std::shared_ptr<boost::asio::io_context> _m_io_context;
        /**
         * @brief class endpoint to define the endpoint of the socket
         * 
         */
        Endpoint _endpoint;
};

#endif /* !UDPSendSocket_HPP_ */
