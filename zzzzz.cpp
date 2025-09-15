#include <iostream>
float numDec=3.14;
void func(){
    numDec=3.14156;
    std::cout<<"Global variable: "<<numDec<<std::endl;
    //std::cout<<"main func variable: "<<a<<std::endl;
}

int main(){
    /*Multi
    line
    comment
    */
   int a=1;
    std::cout<<"Global variable:"<<numDec<<std::endl;
    std::cout<<"Global var addres:"<<&numDec<<std::endl;
    std::cout<<"size of global var:"<< sizeof(numDec) <<std::endl;
    std::cout<<"main local func variable: "<< a <<std::endl;
    std::cout<<"main local var address : "<<&a<<std::endl;
    std::cout<<"size of main local var: "<<numDec<<std::endl;
    func();
    return 0;
}