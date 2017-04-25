// Establecer una cadena 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector <int> vnumero;
    int n = 0;
    cin >> n;

    cout << "Ingrese el numero de datos: " << endl;
    
    
    // for para el ingreso de los datos
    for (int i = 1; i <= n; i++)
    {
        int x = 0;
        cout << "Ingresar el valor # " << i << " : ";
        cin >> x; 
        vnumero.push_back(x);
    }
    
    for(auto i: vnumero)
    cout << i << " ";
    
    return 0;
}