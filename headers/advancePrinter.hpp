#include "./printer.hpp"
#include<iostream>
#ifndef ADVANCEPRINTER_HPP
#define ADVANCEPRINTER_HPP

namespace advance{
    class Advance : public virtual printer::Printer{
        public: 
            Advance();
            ~Advance() = default;
            void printDetails();
            Advance(double colorInkPercentage, double blackInkPercentage, double capacityToPrintPerMinute,bool scanner, double energyConsumedPerHour , double colorTakePerPage , double blackTakePerPage, bool wirless);
            Advance & operator=(const Advance&);
            Advance(const Advance&);

        protected:
            bool wirless = false;

    };
}

#endif