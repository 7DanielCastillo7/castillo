#include <iostream>

int main(){
    int num;
    std::cout<<"Ingrese un numero: ";
    std::cin>>num;
    if(num%2==0){   // el residuo de un numero par al dividirlo entre 2 es 0
        std::cout<<"El numero "<<num<<" es par."<<std::endl;
    }else{
        std::cout<<"El numero "<<num<<" es impar."<<std::endl;
    }

    if(num){
        std::cout<<"el numero es identificado como true";
    }
    return 0;
}