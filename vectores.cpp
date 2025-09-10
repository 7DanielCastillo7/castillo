#include <iostream>
#include <cmath> //para usar la funcion pow





int main(){
    int arr[5]; //declaracion de un vector de 5 enteros
    for (int i=0; i<5; i++){
        arr[i]=pow(2,i); //pow eleva a la potencia
        std::cout<<"elementos del vector: "<<i<<" "<<arr[i]<<std::endl;
    
    }

    int matr[3][3]; //declaracion de una matriz 3x3
    matr[0][0]=1;
    int* PointerToint;
    PointerToint=&arr[0];
    for (int i=0; i<5; i++){
        *PointerToint=5-i;//asignacion de valores al vector usando punteros
        std::cout<<"arr["<<i<<"]:"<<arr[i]<<std::endl;
        PointerToint++;
    }

    double decimal=3.1416;
    double* Pdecimal;
    Pdecimal=&decimal;
    std::cout<<"Valor de decimal: "<<decimal<<std::endl;
    std::cout<<"Direccion de memoria de decimal: "<<&decimal<<std::endl;
    std::cout<<"Valor de Pdecimal: "<<Pdecimal<<std::endl;
    std::cout<<"Valor al que apunta Pdecimal: "<<*Pdecimal<<std::endl;

    
    short code;

    std::cin>>code;
    switch (code)
    {
    case 200:
        std::cout<<"Codigo 200: OK"<<std::endl;
        break;
    
    default:
        break;
    }
    return 0;
    
}