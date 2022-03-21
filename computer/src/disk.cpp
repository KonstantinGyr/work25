#include <fstream>
#include "ram.h"

void save(){
    std::ofstream file;
    file.open("data.txt");
    for(int i=0;i<8;i++){
        file<<read(i)<<" ";
    }
    file.close();
}
void load(){
    int n;
    std::ifstream file;
    file.open("data.txt");
    for(int i=0;i<8;i++) {
        file >> n;
        write(n,i);
    }
    file.close();
}
