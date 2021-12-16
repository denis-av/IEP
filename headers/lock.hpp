#include<iostream>
#include "./printer.hpp"
#ifndef LOCK_HPP
#define LOCK_HPP

namespace lock{
    class Lock{
        private:
        printer::Printer *printer;
        Lock(const Lock&);
        Lock & operator=(const Lock&);

        public:
            explicit Lock(printer::Printer *);
            Lock();
            ~Lock();
            void lock(printer::Printer *);
            void unlock(printer::Printer *);
    };

}

#endif