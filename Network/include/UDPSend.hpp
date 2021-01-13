/*
** EPITECH PROJECT, 2020
** UDPSend
** File description:
** UDPSend
*/

#ifndef UDPSEND_HPP_
#define UDPSEND_HPP_

#include "Endpoint.hpp"
#include "data/Data.hpp"
#include "UDPSendSocket.hpp"

/**
 * @brief function that manage the socket to send
 * @class UDPSend
 */
class UDPSend
{
public:
    /**
     * @brief Construct a new UDPSend object
     * 
     * @param _ip 
     */
    UDPSend(std::vector<std::string> _ip);
    /**
     * @brief Destroy the UDPSend object
     * 
     */
    ~UDPSend();
    /**
     * @brief function to send payload with the player socket
     * 
     * @tparam structType 
     * @param player 
     * @param id 
     * @param _toSend 
     */
    template <typename structType>
    void send(int player, int id, structType _toSend)
    {
        sendID(player, id);
        sendInfo(player, _toSend);
    }
    /**
     * @brief Create a New Socket object
     * 
     * @param _io_context 
     * @param ip 
     */
    void createNewSocket(std::shared_ptr<boost::asio::io_context> _io_context, std::vector<std::string> ip);
    int getSocketsSize(); 
    void destroySocket(int player);
private:
    /**
     * @brief function to send id
     * 
     * @param player 
     * @param _id 
     */
    void sendID(int player, int _id);
    /**
     * @brief function to send body
     * 
     * @tparam structType 
     * @param player 
     * @param _toSend 
     */
    template <typename structType>
    void sendInfo(int player, structType _toSend)
    {
        std::vector<char> sBuffer;

        sBuffer.reserve(sizeof(structType));
        std::memcpy(sBuffer.data(), &_toSend, sizeof(structType));
        (*(*_sockets[player]).getSocket()).send(boost::asio::buffer(sBuffer.data(), sizeof(structType)));
    }
    /**
     * @brief vector containing socket
     * 
     */
    std::vector<std::shared_ptr<UDPSendSocket>> _sockets;
    /**
     * @brief vector containing ip
     * 
     */
    std::vector<std::string> _ip;
};

#endif /* !UDPSEND_HPP_ */
