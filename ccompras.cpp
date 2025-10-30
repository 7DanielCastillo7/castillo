#include <iostream>
#include <vector>
using namespace std;

class producto {
    private:
    string nombre;
    float precio;
    int stock;
    public:
    producto(string _nombre, float _precio, int _stock){
        nombre=_nombre;
        precio=_precio;
        stock=_stock; 
    } 
    string getnombre() const {
        return nombre;
    }
    float getprecio() const {
        return precio;
    } 
    int getstock() const {
        return stock;
    }  
    void setstock(int nuevo_stock){
        stock=nuevo_stock;
    }
}; 

class Itemcarrito {
    private:
    int cantidad;
    
    public:
    Itemcarrito(int _cantidad){
        cantidad=_cantidad;
    }
    int estado(){
        
    }
    

};

class CarritoCompras {

};

class Usuario {

};

int main() {

    return 0;
}