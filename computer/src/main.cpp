#include <iostream>
#include <string>
#include "cpu.h"
#include "disc.h"
#include "ram.h"


int main() {
    int buff[8];
    std::string command;
    do{
        std::cout << "Enter command: ";
        std::cin>>command;
        if(command=="sum"){
            sum(buff);     // #include "cpu.h"
        }
        else if(command=="save"){
            save(buff);    //#include "disc.h"
        }
        else if(command=="load"){
            load(buff);    //#include "disc.h"
        }
        else if(command=="input"){
            write(buff);   //#include "ram.h"
        }
        else if(command=="display"){
            read(buff);    //#include "ram.h"
        }
    }while (command!="exit");

    return 0;
}
