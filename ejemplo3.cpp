// Restringir una cadena

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string nombre;
    
    //Ingreso de string
    cout << "Ingrese su nombre: ";
    
    //Caracteres de mas de una palabra
    getline(cin, nombre);
    
    cout << nombre.size();
    
    cout << "La inicial del nombre es: " << nombre[0]<< endl;
    
    cout << "Imprimir el texto: " << nombre<< endl;  
    
    for (auto i: nombre)
    {
        if (i != 'a' && i != 'e' && i != 'i' && i != 'o' && i != 'u' && i != 'A' && i != 'E' && i != 'I' && i != 'O' && i != 'U')
        cout << i ;

    
    }
    
    return 0;
}