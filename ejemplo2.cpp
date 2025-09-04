#include <iostream>

#define debug
struct point
{
    /*data*/
    int x;
    int y;
};

void main(){
    point a;
    point b;
    a.x=0;
    a.y=0;
    b.x=1;
    b.y=1;
    #ifdef debug
        std::cout<<"a("<<a.x<<","<<a.y<<")\n";
    #endif
    std::cout<<"a("<<a.x<<","<<a.y<<")\n";
    return;
}