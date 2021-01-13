/*
** EPITECH PROJECT, 2020
** Endpoint
** File description:
** Endpoint
*/

#ifndef ENDPOINT_HPP_
#define ENDPOINT_HPP_

#include <boost/asio.hpp>

/**
 * @class Endpoint
 * @brief class that contain the endpoint of send socket
 */
class Endpoint {
    public:
        /**
         * @brief Construct a new Endpoint object
         * 
         * @param _io_context 
         * @param _ip 
         */
        Endpoint(std::shared_ptr<boost::asio::io_context> _io_context, std::vector<std::string> _ip);
        /**
         * @brief Destroy the Endpoint object
         * 
         */
        ~Endpoint();
        /**
         * @brief Get the Endpoint object
         * 
         * @return std::shared_ptr<boost::asio::ip::udp::resolver::iterator> 
         */
        std::shared_ptr<boost::asio::ip::udp::resolver::iterator> getEndpoint();

    protected:
    private:
        /**
         * @brief pointer to resolver
         * 
         */
        std::shared_ptr<boost::asio::ip::udp::resolver> _resolver;
        /**
         * @brief pointer to endpoint
         * 
         */
        std::shared_ptr<boost::asio::ip::udp::resolver::iterator> _endpoint;
};

#endif /* !ENDPOINT_HPP_ */
