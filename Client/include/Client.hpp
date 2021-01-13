/*
** EPITECH PROJECT, 2020
** Client
** File description:
** Client
*/

#ifndef CLIENT_HPP_
#define CLIENT_HPP_

#include "UDPReceive.hpp"
#include "IOContext.hpp"
#include "UDPSend.hpp"

/**
 * @brief 
 * @class Client
 */
class Client {
    public:
        /**
         * @brief Construct a new Client object
         * 
         * @param _ip 
         */
        Client(std::vector<std::string> _ip);
        /**
         * @brief Destroy the Client object
         * 
         */
        ~Client();
        /**
         * @brief 
         * 
         * @param status 
         */
        void connectToServer(int status);
        /**
         * @brief Get the Id object
         * 
         * @return int 
         */
        int getId();
        /**
         * @brief Get the Data object
         * 
         * @tparam T 
         * @return T 
         */
        template<typename T>
        T getData()
        {
            return this->_udpReceive.getInfo<T>();
        };
        /**
         * @brief Create a New Socket object
         * 
         * @param ip 
         */
        void createNewSocket(std::vector<std::string> ip);
        /**
         * @brief 
         * 
         * @tparam T 
         * @param ID 
         * @param type 
         * @param data 
         */
        template<typename T>
        void send(int ID, int type, T data)
        {
            _udpSend.send(ID, type, data);
        };
        /**
         * @brief 
         * 
         */
        int myPlayerId;
    protected:
    private:
        /**
         * @brief 
         * 
         */
        std::vector<std::string> _ip;
        /**
         * @brief 
         * 
         */
        myIOContext _ioContext;
        /**
         * @brief 
         * 
         */
        UDPReceive _udpReceive;
        /**
         * @brief 
         * 
         */
        UDPSend _udpSend;
};

#endif /* !CLIENT_HPP_ */
