#include<iostream>
#include<memory>
#include<mutex>
#include "../headers/printer.hpp"
#include "../headers/advancePrinter.hpp"
#include "../headers/superPrinter.hpp"
#include "../headers/person.hpp"
#include "../headers/socket.hpp"
#include "../headers/lock.hpp"

std::mutex  mutex;
unsigned int pages = 0;

void printDocument(printer::Printer &printer, unsigned int pagesOfDocument){
    mutex.lock();
    printer.printDocument(pagesOfDocument);
    pages = pages + pagesOfDocument;
    mutex.unlock();
}

int main(){
    std::unique_ptr<person::Person> person(new person::Person("Avram","Denis",22,"12345"));
    std::cout << "Adresa pers:" << person.get() << std::endl;
    std::unique_ptr<person::Person> personOne = move(person);
    std::cout << "Adresa pers:" << person.get() << std::endl;
    std::cout << "Adresa personOne:" << personOne.get() << std::endl;

    std::unique_ptr<printer::Printer> printer(new printer::Printer(70,35,12,false,100.5,0.5,0.4));
    printer->addPerson(*personOne); 
    printer->printDetails();
    std::cout << std::endl;

    std::shared_ptr<socket::Socket> socket(new socket::Socket("Room1",15,10,"LPR1235"));
    std::shared_ptr<socket::Socket> socket2(socket);
    std::cout << "Adresa socket1:" << socket.get() << std::endl;
    std::cout << "Adresa socket2:" << socket2.get() << std::endl;
    std::cout << std::endl;
    printer->connectToASocket(*socket);
    std::cout << std::endl;
    std::unique_ptr<super::Super> superPrinter(new super::Super());
    superPrinter->connectToASocket(*socket);
    std::cout << std::endl;
    std::cout << "Socket for normal printer:" << std::endl;
    printer->getTheSocket();
    std::cout << std::endl;
    std::cout << "Socket for super printer:" << std::endl;
    superPrinter->getTheSocket();
    printDocument(*printer,50);
    printDocument(*superPrinter,15);
    std::cout << pages << " was printed in total." << std::endl;

    std::cout << std::endl;
    printer::Printer prnt;
    lock::Lock mutex(&prnt);
    std::cout << std::endl;
    /*
    std::cout << std::endl;
    std::cout << printer->calculateNoPagesToPrintWithColorInk() << " files could be printed using blank ink by Printer 1" << std::endl;
    std::cout << std::endl;

    std::shared_ptr<printer::Printer> printer4(new printer::Printer());
    //printer4=printer;
    printer4->printDetails();
    std::cout << std::endl;
    std::cout << printer.get() << std::endl;
    std::cout << printer4.get() << std::endl;
    std::cout << printer.use_count() << std::endl;
    std::cout << printer4.use_count() << std::endl << std::endl;

    super::Super super2;
    super2.printDetails();*/
    return 0;
}

    /*printer::Printer printer2;
    printer::Printer printer3(*printer);
    printer->printDetails();
    std::cout << std::endl;
    std::cout << printer->calculateNoPagesToPrintWithColorInk() << " files could be printed using blank ink by Printer 1" << std::endl;
    std::cout << std::endl;
    printer2.printDetails();
    std::cout << std::endl;
    printer3.printDetails();
    std::cout << std::endl;
    advance::Advance advance(110,150,30,true,50.7,0.25,0.15,true);
    advance=advance;//self-assigmnet
    std::cout<<"Self-assigment"<<std::endl;
    advance.printDetails();
    std::cout << std::endl;
    advance::Advance advance2;
    advance2.printDetails();
    std::cout << std::endl;
    advance2=advance;//without self-assigment
    std::cout<<"Construct printer advance2 from printer advance using copy assigment operator."<<std::endl;
    advance2.printDetails();
    std::cout << std::endl;*/