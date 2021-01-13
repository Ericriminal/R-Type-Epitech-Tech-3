/*
** EPITECH PROJECT, 2020
** StreamBuffer
** File description:
** StreamBuffer
*/

#include "StreamBuffer.hpp"

StreamBuffer::StreamBuffer()
{
    //this->sb = std::make_shared<boost::asio::streambuf>(boost::asio::buffer("test"));
}

StreamBuffer::~StreamBuffer()
{
}

std::shared_ptr<boost::asio::streambuf> StreamBuffer::getSb() const
{
    return (this->sb);
}

const void StreamBuffer::changeBuffer(boost::asio::streambuf text)
{
    //this->sb = std::make_shared<boost::asio::streambuf>(text);
}