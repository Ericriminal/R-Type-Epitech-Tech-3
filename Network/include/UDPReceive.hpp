/*
** EPITECH PROJECT, 2020
** UDPServer
** File description:
** UDPReceive
*/

#ifndef UDPRECEIVE_HPP_
#define UDPRECEIVE_HPP_

#include "data/Data.hpp"
#include "RemoteEndpoint.hpp"
#include "StreamBuffer.hpp"
#include "UDPReceiveSocket.hpp"

/**
 * @brief class to manage socket of reception
 * @class UDPReceive
 */
class UDPReceive {
    public:
        /**
         * @brief Construct a new UDPReceive object
         * 
         * @param _io_context 
         * @param port 
         */
        UDPReceive(std::shared_ptr<boost::asio::io_context> _io_context, std::string port);
        /**
         * @brief Destroy the UDPReceive object
         * 
         */
        ~UDPReceive();
        /**
         * @brief Get the Id object
         * 
         * @return int 
         */
        int getId();
        /**
         * @brief Get the Info object
         * 
         * @tparam structType 
         * @return structType 
         */
        template<typename structType>
        structType getInfo() {
            std::vector<char> gBuffer;
            structType _structType;
            gBuffer.reserve(sizeof(_structType));

            (*_socket.getSocket()).receive(boost::asio::buffer(gBuffer.data(), sizeof(_structType)));
            std::memcpy(reinterpret_cast<char *>(&_structType), gBuffer.data(), sizeof(_structType));
            return (_structType);
        }

    private:
        /**
         * @brief class that contain the socket of reception
         * 
         */
        UDPReceiveSocket _socket;
        /**
         * @brief class that contains streambuffer
         * 
         */
        StreamBuffer _streamBuffer;
};

#endif /* !UDPRECEIVE_HPP_ */
