/*
** EPITECH PROJECT, 2020
** EntityArray.cpp
** File description:
** EntityArray
*/

#include "Entity/EntityArray.hpp"

EntityArray::EntityArray(const std::string& path)
{
    std::vector<std::string> allsharedlib = read_directory(path);

    for (auto it : allsharedlib) {
        std::stringstream ss;
        ss << "./lib/" << it;
        std::string convert = ss.str();
        // std::cout << convert << std::endl;
        void *hndl_lib = dlopen(convert.c_str(), RTLD_LAZY);
        if (dlerror() != nullptr)
            assert("Game_lib not detected");
        entity make_game = (entity)dlsym(hndl_lib, "createEntity");
        if (make_game == NULL)            
            assert("Game_lib not detected");
        entities[it] = make_game;        
    }
}

std::vector<std::string> EntityArray::read_directory(const std::string& name)
{
    std::vector<std::string> sharedlib;
    DIR* dirp = opendir(name.c_str());
    struct dirent * dp;
    while ((dp = readdir(dirp)) != NULL) {
        std::string libname = dp->d_name;
        if (libname.substr(libname.find_last_of(".") + 1) == "so") {
            sharedlib.push_back(libname);
        }
    }
    return (sharedlib);
}