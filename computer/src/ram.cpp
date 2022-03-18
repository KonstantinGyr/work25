#include <iostream>
#include "gpu.h"
#include "kbd.h"


void write(int (&buff)[8]) {
    std::cout << "Enter 8 integer numbers ";
    for(int i=0;i<8;i++){
       buff[i]= input();       //#include "kbd.h"
    }
}
void read(int (&buff)[8]){
    for(int i=0;i<8;i++){
       display(buff[i]);   //#include "gpu.h"
    }
    std::cout<<std::endl;
}