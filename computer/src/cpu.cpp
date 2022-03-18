#include <iostream>
#include "gpu.h"

void sum(int (&buff)[8]){
    int n=0;
    for(int i=0;i<8;i++){
       n+=buff[i];
    }
    display(n);   //#include "gpu.h"
    std::cout<<std::endl;
}