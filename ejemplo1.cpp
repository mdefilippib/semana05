// Cadena de palabras

#include <iostream>
#include <string>
#include <vector> 
using namespace std;

int main()
{
    vector<char> vtexto = {'H','O','L','A'};
    
    cout << vtexto.size() << endl;
    cout << vtexto[2] << endl;
    
    for (auto i: vtexto)
    cout << i;
    
    return 0;
}
