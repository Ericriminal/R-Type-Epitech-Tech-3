/*
** EPITECH PROJECT, 2020
** IOContext
** File description:
** IOContext
*/

#ifndef IOCONTEXT_HPP_
#define IOCONTEXT_HPP_

#include <memory>
#include <boost/asio.hpp>

/**
 * @class myIOContext
 * @brief class that contain io_context
 */
class myIOContext {
    public:
        /**
         * @brief Construct a new my I O Context object
         * 
         */
        myIOContext();
        /**
         * @brief Destroy the my I O Context object
         * 
         */
        ~myIOContext();
        /**
         * @brief return a shared_ptr of the io_context variable
         * 
         * @return std::shared_ptr<boost::asio::io_context> 
         */
        std::shared_ptr<boost::asio::io_context> getIOContext();
        /**
         * @brief run the io_context
         * 
         */
        void run();

    protected:
    private:
    /**
     * @brief a pointer to io_context
     * 
     */
        std::shared_ptr<boost::asio::io_context> _io_context;
};

#endif /* !IOCONTEXT_HPP_ */
