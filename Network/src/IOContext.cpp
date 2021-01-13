/*
** EPITECH PROJECT, 2020
** IOContext
** File description:
** IOContext
*/

#include "IOContext.hpp"

void myIOContext::run()
{
    (*_io_context).run();
}

myIOContext::myIOContext()
{
    _io_context = std::make_shared<boost::asio::io_context>();
}

myIOContext::~myIOContext()
{
}

std::shared_ptr<boost::asio::io_context> myIOContext::getIOContext()
{
    return (_io_context);
}