/*
** EPITECH PROJECT, 2020
** Server
** File description:
** Core header of the class Server
*/

#ifndef SERVER_HPP_
#define SERVER_HPP_

#include "UDPReceive.hpp"
#include "IOContext.hpp"
#include "UDPSend.hpp"

/**
 * @brief 
 * @class Server
 */
class Server {
    public:
        /**
         * @brief Construct a new Server object
         * 
         * @param ip 
         */
        Server(std::vector<std::string> ip);
        /**
         * @brief Destroy the Server object
         * 
         */
        ~Server();
        /**
         * @brief 
         * 
         */
        void receive();
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
         * @brief Get the Sockets Size object
         * 
         * @return int 
         */
        int getSocketsSize();
        /**
         * @brief 
         * 
         * @param playerNum 
         */
        void destroySocket(int playerNum);
    private:
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
        /**
         * @brief 
         * 
         */
        std::vector<std::string> _ip;
};

#endif /* !SERVER_HPP_ */
