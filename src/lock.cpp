/*
#include<iostream>
#include<memory>

class Lock {
    public:
        explicit Lock(Mutex *pm) // init shared_ptr with the Mutex
        : mutexPtr(pm, unlock) // to point to and the unlock func
        { // as the deleter†
            lock(mutexPtr.get()); // see Item 15 for info on “get”
        }
        private:
        std::shared_ptr<Mutex> mutexPtr; // use shared_ptr
};*/