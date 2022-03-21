#include <iostream>
#include "ram.h"

void input(){
    std::cout << "Enter 8 integer numbers ";
    int n;
    for(int i=0;i<8;i++) {
        std::cin >> n;
        write(n,i);
    }
}
