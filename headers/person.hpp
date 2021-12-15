#include<iostream>
#ifndef PERSON_HPP
#define PERSON_HPP

namespace person{
    class Person{
        protected:
            std::string lastname = "";
            std::string firstname= "";
            unsigned int age= 0;
            std::string CNP = "";


        public:
            Person();
            Person(const std::string, const std::string, unsigned int, const std::string);
            Person& operator=(const Person &);
            void printDetails();

    };
}

#endif