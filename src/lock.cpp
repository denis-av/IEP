#include "../headers/lock.hpp"
#include<iostream>
using namespace std;

namespace lock{

    Lock::Lock(){}

    Lock::Lock(printer::Printer *print):
        printer(print) {
            lock(printer);
        };

    Lock::~Lock(){
        unlock(printer);
    }


    void Lock::lock(printer::Printer *print){
        std::cout << "Lock-mutex" << std::endl;
    }

    void Lock::unlock(printer::Printer *print){
        std::cout << "Unlock-mutex" << std::endl;
    }

}