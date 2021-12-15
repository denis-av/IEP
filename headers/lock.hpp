#include<iostream>
#include<memory>
#include<mutex>
#ifndef LOCK_HPP
#define LOCK_HPP

namespace lock{
    class Lock{
        protected:
            std::shared_ptr<std::mutex> mutexPtr;

        public:
            explicit Lock(std::mutex *pm);
    };

}

#endif