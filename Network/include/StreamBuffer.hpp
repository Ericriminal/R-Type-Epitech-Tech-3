/*
** EPITECH PROJECT, 2020
** StreamBuffer
** File description:
** StreamBuffer
*/

#ifndef STREAMBUFFER_HPP_
#define STREAMBUFFER_HPP_

#include <boost/asio.hpp>

/**
 * @brief 
 * @class StreamBuffer
 */
class StreamBuffer {
    public:
        /**
         * @brief Construct a new Stream Buffer object
         * 
         */
        StreamBuffer();
        /**
         * @brief Destroy the Stream Buffer object
         * 
         */
        ~StreamBuffer();
        /**
         * @brief Get the Sb object
         * 
         * @return std::shared_ptr<boost::asio::streambuf> 
         */
        std::shared_ptr<boost::asio::streambuf> getSb() const;
        /**
         * @brief 
         * 
         * @param text 
         */
        const void changeBuffer(boost::asio::streambuf text);

    protected:
    private:
        /**
         * @brief 
         * 
         */
        std::shared_ptr<boost::asio::streambuf> sb;
};

#endif /* !STREAMBUFFER_HPP_ */
