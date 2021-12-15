#include "../headers/advancePrinter.hpp"
#include "../headers/superPrinter.hpp"
#include<iostream>

namespace super{

    Super::Super(){}

    Super::Super(double colorInkPercentage = 100, double blackInkPercentage = 100, double capacityToPrintPerMinute = 25, bool scanner = true, double energyConsumedPerHour = 65.5, double colorTakePerPage = 0.3, double blackTakePerPage = 0.2, bool wirless = false, double numberHoles = 4.0, double lenght = 110.5, double width = 47.5) :
        Advance(colorInkPercentage,blackInkPercentage,capacityToPrintPerMinute,scanner,energyConsumedPerHour,colorTakePerPage,blackTakePerPage,wirless),
        numberHoles(numberHoles),
        lenght(lenght),
        width(width)
    {}

    Super &Super::operator = (const Super &adv){
            if(this == &adv) return *this;
            Advance::operator=(adv);
            this->numberHoles = adv.numberHoles;
            this->lenght = adv.lenght;
            this->width = adv.width;
            return *this;
    }

    Super::Super(const Super& super) :
        Advance(super),
        numberHoles(super.numberHoles),
        lenght(super.lenght),
        width(super.width)
        {}

    void Super::printDetails(){
        std::cout << "Unique ID: " << uniqueID << std::endl;
        Advance::printDetails();
        std::cout << "Number of holes per page: " << numberHoles << std::endl;
        std::cout << "Length:" << lenght <<std::endl;
        std::cout << "Width:" << width <<std::endl << std::endl;
        
    }

}