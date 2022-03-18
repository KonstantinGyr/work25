#include <fstream>

void save(int (&buff)[8]){
    std::ofstream file;
    file.open("data.txt",std::ios::binary);
    file.write((char*)buff,sizeof (buff));
    file.close();
}
void load(int (&buff)[8]){
    std::ifstream file;
    file.open("data.txt",std::ios::binary);
    file.read((char*)buff,sizeof (buff));
    file.close();
}
