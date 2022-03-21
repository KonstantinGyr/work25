#include <iostream>
#include <string>
#include "cpu.h"
#include "disc.h"
#include "gpu.h"
#include "kbd.h"

int main() {
    std::string command;
    do{
        std::cout << "Enter command: ";
        std::cin>>command;
        if(command=="sum"){
            sum();     // #include "cpu.h"
        }
        else if(command=="save"){
            save();    //#include "disc.h"
        }
        else if(command=="load"){
            load();    //#include "disc.h"
        }
        else if(command=="input"){
            input();   //#include "kbd.h"
        }
        else if(command=="display"){
            display();  //#include "gpu.h"
        }
    }while (command!="exit");

    return 0;
}
