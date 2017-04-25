//Palabras al revez

#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string texto;
    cin >> texto;
    
    int n = texto.size();
    
    cout << texto.size() << endl;
    
    for (int i = n-1; i >= 0; i--)
    cout << texto[i];
    
    return 0;
}
