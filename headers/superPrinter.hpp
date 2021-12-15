#include "./advancePrinter.hpp"
#include<iostream>
#ifndef SUPERPRINTER_HPP
#define SUPERPRINTER_HPP

namespace super{
    class Super : public virtual advance::Advance{
        public: 
            Super();
            ~Super() = default;
            void printDetails();
            Super(double colorInkPercentage, double blackInkPercentage, double capacityToPrintPerMinute,bool scanner, double energyConsumedPerHour , double colorTakePerPage , double blackTakePerPage, bool wirless, double numberHoles, double length, double width);

        protected:
            double numberHoles = 4;
            double lenght = 75.5;
            double width = 39.5;
            double uniqueID =rand() % 9999;
        
        private:
            Super & operator=(const Super&);
            Super(const Super&);
                

    };
}

#endif