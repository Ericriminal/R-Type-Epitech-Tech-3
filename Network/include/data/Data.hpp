/*
** EPITECH PROJECT, 2020
** Data
** File description:
** Header for transferring data through network
*/

#ifndef DATA_HPP_
#define DATA_HPP_

#include <SFML/Graphics.hpp>

/**
 * @namespace DataStream
 * @brief 
 */
namespace DataStream
{
    enum DataType{
        CONNECTION,
        POSITION,
        DESTRUCTION,
        CREATION,
        PLAYERACTION,
        PING,
        CONNECTED,
        DISCONNECT,
    };

    struct connection {
        int status; // create is 0, join is 1
        char clientIp[20];
        char port[10];
    };

    struct connected {
        int playerNum;
    };

    struct disconnect {
        int playerNum;
    };

    struct position
    {
        int id;
        float x;
        float y;
    };

    struct creation
    {
        int id;
        int entityToCreate; // 1 backgroundBigPlanet, 2 backgroundFarPlanet, 3 BackgroundPlanetRing, 4 BackgroundSpace, 5 BackgroundStars, 6 Player
        float x;
        float y;
    };

    struct playerAction
    {
        int id;
        int playerNum;
        float speedX;
        float speedY;
        int action; // 0 nothing, 1 shot, 2 quit
    };

    struct ping
    {
    };
};

#endif /* !DATA_HPP_ */
