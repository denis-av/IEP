#include "../headers/person.hpp"
#include<iostream>
using namespace std;

namespace person{

    Person::Person(){}

    Person::Person(const std::string vLastName, const std::string vFirstName, unsigned int vAge, const std::string vCNP):
    lastname(vLastName),
    firstname(vFirstName),
    age(vAge),
    CNP(vCNP) {};


    Person& Person::operator=(const Person &prop){
        if(this == &prop) return *this; // pentru a se evita self-assignment; fara identity test, *this si prop pot fi acelasi obiect
        lastname = prop.lastname;
        firstname = prop.firstname;
        age = prop.age;
        CNP = prop.CNP;
        return *this;
    }

    void Person::printDetails(){
        if(CNP != "" && firstname != "" && lastname != "" && age != 0){
            std::cout << "CNP: "<< this->CNP << std::endl;
            std::cout << "Firstname: "<< this->firstname << std::endl;
            std::cout << "Lastname: "<< this->lastname  << std::endl;
            std::cout << "Age: "<< this->age << std::endl;   
        }  
    }

}