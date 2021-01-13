/*
** EPITECH PROJECT, 2020
** RemoteEndpoint
** File description:
** RemoteEndpoint
*/

#ifndef REMOTEENDPOINT_HPP_
#define REMOTEENDPOINT_HPP_

#include <boost/asio.hpp>

/**
 * @brief class that manage the endpoint of the receive server
 * @class RemoteEndpoint
 */
class RemoteEndpoint {
    public:
        /**
         * @brief Construct a new Remote Endpoint object
         * 
         * @param port 
         */
        RemoteEndpoint(std::string port);
        /**
         * @brief Destroy the Remote Endpoint object
         * 
         */
        ~RemoteEndpoint();
        /**
         * @brief Get the Remote Endpoint object
         * 
         * @return std::shared_ptr<boost::asio::ip::udp::endpoint> 
         */
        std::shared_ptr<boost::asio::ip::udp::endpoint> getRemoteEndpoint();

    private:
        /**
         * @brief endpoint of the port given
         * 
         */
        std::shared_ptr<boost::asio::ip::udp::endpoint> _endpoint;
};

#endif /* !REMOTEENDPOINT_HPP_ */
