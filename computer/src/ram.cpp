#include <vector>
#include "ram.h"

std::vector<int> buff(8,0);

void write(int n,int i) {
       buff[i]=n;
}
int read(int n){
      return buff[n];
}