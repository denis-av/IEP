#include<iostream>
#ifndef PRINTER_HPP
#define PRINTER_HPP
#include "./person.hpp"
#include "./socket.hpp"

namespace printer{
    class Printer{
        public: 
            Printer();
            ~Printer() = default;
            Printer(double colorInkPercentage, double blackInkPercentage, double capacityToPrintPerMinute,bool scanner, double energyConsumedPerHour , double colorTakePerPage , double blackTakePerPage);
            Printer(const Printer&);
            Printer & operator=(const Printer&);
            void printDetails();
            void addScanner();
            void rechargeInk();
            int calculateNoPagesToPrintWithColorInk();
            int calculateNoPagesToPrintWithBlackInk();
            void addPerson(person::Person &pers);
            void connectToASocket(socket::Socket &socket);
            void getTheOwner();
            void getTheSocket();
            void printDocument(unsigned int pages);
            

        protected:
            bool scanner = false;
            double colorInkPercentage = 50;
            double blackInkPercentage = 50;
            double energyConsumedPerHour = 90.5;
            double colorTakePerPage = 0.5;
            double blackTakePerPage = 0.4;
            double capacityToPrintPerMinute = 12;
            person::Person pers;
            socket::Socket socket;
    };
}

#endif