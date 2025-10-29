# include <iostream>
using namespace std;

class Libro{
    private:
    string titulo;
    string autor;
    long isbn;
    bool disponible;
    
    public:
    Libro( string _titulo, string _autor, long _isbn, bool _disponible){ 
        titulo=_titulo;
        autor=_autor;
        isbn=_isbn;
        disponible=_disponible;
    } 
    string gettitulo() const {
        return titulo;
    }
    string getautor() const {
        return autor;  
    }
    long getisbn() const {
        return isbn;
    }
    string prestar (){
    if (disponible==true){
        disponible=false;
        return "El libro " +titulo+ " ha sido prestado. ";
    }
    else {
        return "El libro " +titulo+ " ya esta prestado. ";
    }
    }
    string devolver (){
        if (disponible==false){
            disponible=true;
            return "El libro " +titulo+ " ha sido devuelto. ";
        }
        else {
            return "El libro " +titulo+ " no estaba prestado. ";
        }
    }
};   

int main(){
    Libro libro1 ("Calculo","stewart", 12345, true);    
    string estado1=libro1.prestar();
    cout<< estado1 << endl;
    string estado2=libro1.prestar();
    cout<< estado2 << endl;
    string devolver=libro1.devolver();
    cout<< devolver << endl;

    return 0;
}