#pragma once
#include <iostream>

struct command {
    double x;
    double y;
};
void scalpel(command &scalpA, command &scalpB){
    std::cout<<"Enter coordinates first point: ";
    std::cin>>scalpA.x>>scalpA.y;
    std::cout<<"Enter coordinates second point: ";
    std::cin>>scalpB.x>>scalpB.y;
    std::cout<<"Cut from point A( "<<scalpA.x<<" ; "<<scalpA.y;
    std::cout<<" ) to point B ( "<<scalpB.x<<" ; "<<scalpB.y<<" )"<<std::endl;
}
void hemostat(){
    double x,y;
    std::cout<<"Enter coordinates point: ";
    std::cin>>x>>y;
    std::cout<<"Hemostat point ( "<<x<<" ; "<<y<<" )"<<std::endl;
}
void tweezers(){
    double x,y;
    std::cout<<"Enter coordinates point: ";
    std::cin>>x>>y;
    std::cout<<"Tweezers point ( "<<x<<" ; "<<y<<" )"<<std::endl;
}
void suture(command &sutureA,command &sutureB){
        std::cout << "Enter coordinates first point: ";
        std::cin >> sutureA.x >>sutureA.y;
        std::cout << "Enter coordinates second point: ";
        std::cin >> sutureB.x >> sutureB.y;
}