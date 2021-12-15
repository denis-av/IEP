#include "../headers/socket.hpp"
#include<iostream>
using namespace std;

namespace socket{

    Socket::Socket(){}

    Socket::Socket(const std::string vLocation, unsigned int vWidth, unsigned int vHeight, const std::string vID):
    location(vLocation),
    width(vWidth),
    height(vHeight),
    ID(vID) {};


    Socket& Socket::operator=(const Socket &prop){
        if(this == &prop) return *this;
        location = prop.width;
        width = prop.width;
        height = prop.height;
        ID = prop.ID;
        return *this;
    }

    void Socket::printDetails(){
        if(ID != "" && location != "" && width != 0 && height != 0){
            std::cout << "ID socket: "<< this->ID << std::endl;
            std::cout << "Location: "<< this->location << std::endl;
            std::cout << "Width: "<< this->width  << std::endl;
            std::cout << "Height: "<< this->height << std::endl;   
        }  
    }

}