#include <iostream>
#include <string>
#include "surgeone.h"


int main() {
    point scalpA;
    point scalpB;
    point sutureA;
    point sutureB;
    std::string comm;
    std::cout << "Enter command: ";
    std::cin >> comm;
    while (comm != "scalpel"){
        std::cerr<<"Error! Enter command: ";
        std::cin >> comm;
    }
    scalpel(scalpA,scalpB);
    while (comm != "suture"){
         std::cout << "Enter command: ";
         std::cin >> comm;
         if(comm == "hemostat"){
             hemostat();
         }
         else if(comm == "tweezers"){
             tweezers();
         }
    }
    do{
        suture(sutureA,sutureB);
    } while (!(scalpA.x==sutureA.x && scalpA.y==sutureA.y &&
                 scalpB.x==sutureB.x && scalpB.y==sutureB.y));
    std::cout<<"Surgery finished!";
    return 0;
}
