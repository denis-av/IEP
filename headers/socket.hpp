#include<iostream>
#ifndef SOCKET_HPP
#define SOCKET_HPP

namespace socket{
    class Socket{
        protected:
            std::string location = "";
            unsigned int width= 0;
            unsigned int height= 0;
            std::string ID = "";


        public:
            Socket();
            Socket(const std::string, unsigned int, unsigned int, const std::string);
            Socket& operator=(const Socket &);
            void printDetails();

    };
}

#endif