cmake_minimum_required(VERSION 3.11)

#CPP 20
set(CMAKE_CXX_STANDARD 20)

#Network
set(NETWORK_SOURCES
    Network/src/IOContext.cpp
    Network/src/StreamBuffer.cpp
    Network/src/UDPSendSocket.cpp
    Network/src/UDPSend.cpp
    Network/src/UDPReceive.cpp
    Network/src/Endpoint.cpp
    Network/src/RemoteEndpoint.cpp
    Network/src/UDPReceiveSocket.cpp
)

#Client
set(client r-type_client)
project(${client} LANGUAGES CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(CLIENT_SOURCES
    Client/src/main.cpp
    Client/src/Client.cpp
    Client/src/GameClient.cpp
    GameEngine/include/Core/EntityManager.cpp
    GameEngine/src/Entity/EntityArray.cpp
    GameEngine/src/System/RenderSprite.cpp
    GameEngine/src/System/RenderParallax.cpp
    GameEngine/src/System/GetAllPos.cpp
    GameEngine/src/System/PlayerInput.cpp
)

add_executable(${client} ${CLIENT_SOURCES} ${NETWORK_SOURCES})

target_include_directories(${client} PRIVATE Client/include Network/include GameEngine/include/)

target_link_libraries(${client} ${CONAN_LIBS} ${CMAKE_DL_LIBS})

set_target_properties(${client}
    PROPERTIES
        CXX_STANDARD 20
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO
)

target_compile_options(${client} PRIVATE -g3)

#Server
set(server r-type_server)
project(${server} LANGUAGES CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(SERVER_SOURCES
    Server/src/main.cpp
    Server/src/Server.cpp
    Server/src/GameServer.cpp
    GameEngine/include/Core/EntityManager.cpp
    GameEngine/src/Entity/EntityArray.cpp
    GameEngine/src/System/RenderSprite.cpp
    GameEngine/src/System/RenderParallax.cpp
    GameEngine/src/System/Movement.cpp
    GameEngine/src/System/Collide.cpp
    GameEngine/src/System/BulletHandler.cpp
    GameEngine/src/System/Shoot.cpp
    GameEngine/src/System/SendCreation.cpp
    GameEngine/src/System/SendAllData.cpp
    GameEngine/src/System/SendEntityCreation.cpp
    GameEngine/src/System/GetPlayerInput.cpp
    GameEngine/src/System/SendEntityCreation.cpp
)

add_executable(${server} ${SERVER_SOURCES} ${NETWORK_SOURCES})

target_include_directories(${server} PRIVATE Server/include Network/include GameEngine/include/)

target_link_libraries(${server} ${CONAN_LIBS} ${CMAKE_DL_LIBS})

target_compile_options(${server} PRIVATE -g3)

add_library(BackgroundBigPlanet SHARED GameEngine/src/Entity/BackgroundBigPlanet.cpp GameEngine/include/Core/EntityManager.cpp)
target_include_directories(BackgroundBigPlanet PRIVATE GameEngine/include)
target_link_libraries(BackgroundBigPlanet ${CONAN_LIBS})

add_library(BackgroundFarPlanet SHARED GameEngine/src/Entity/BackgroundFarPlanet.cpp GameEngine/include/Core/EntityManager.cpp)
target_include_directories(BackgroundFarPlanet PRIVATE GameEngine/include)
target_link_libraries(BackgroundFarPlanet ${CONAN_LIBS})

add_library(BackgroundPlanetRing SHARED GameEngine/src/Entity/BackgroundPlanetRing.cpp GameEngine/include/Core/EntityManager.cpp)
target_include_directories(BackgroundPlanetRing PRIVATE GameEngine/include)
target_link_libraries(BackgroundPlanetRing ${CONAN_LIBS})

add_library(BackgroundSpace SHARED GameEngine/src/Entity/BackgroundSpace.cpp GameEngine/include/Core/EntityManager.cpp)
target_include_directories(BackgroundSpace PRIVATE GameEngine/include)
target_link_libraries(BackgroundSpace ${CONAN_LIBS})

add_library(BackgroundStars SHARED GameEngine/src/Entity/BackgroundStars.cpp GameEngine/include/Core/EntityManager.cpp)
target_include_directories(BackgroundStars PRIVATE GameEngine/include)
target_link_libraries(BackgroundStars ${CONAN_LIBS})

add_library(Player SHARED GameEngine/src/Entity/Player.cpp GameEngine/include/Core/EntityManager.cpp)
target_include_directories(Player PRIVATE GameEngine/include)
target_link_libraries(Player ${CONAN_LIBS})

add_library(PlayerBis SHARED GameEngine/src/Entity/PlayerBis.cpp GameEngine/include/Core/EntityManager.cpp)
target_include_directories(PlayerBis PRIVATE GameEngine/include)
target_link_libraries(PlayerBis ${CONAN_LIBS})

add_library(Bullet SHARED GameEngine/src/Entity/Bullet.cpp GameEngine/include/Core/EntityManager.cpp)
target_include_directories(Bullet PRIVATE GameEngine/include)
target_link_libraries(Bullet ${CONAN_LIBS})
