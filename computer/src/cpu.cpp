#include <iostream>
#include "gpu.h"
#include "ram.h"

void sum(){
    int n;
    int sum=0;
    for(int i=0;i<8;i++) {
        sum += read(i);
    }
    displaySum(sum);   //#include "gpu.h"
    std::cout<<std::endl;
}