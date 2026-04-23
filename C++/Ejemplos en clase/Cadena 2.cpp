#include <iostream>
#include <string>
using namespace std;

int main()
{
    string palabra = "COMA MRD CACORRO";
    cout << "Longitud: " << palabra.size() << endl;
    cout << "Primer caracter: " << palabra[0] << endl;
    cout << "Septimo caracter: " << palabra[8] << endl;  
    cout << "Ultimo caracter: " << palabra[palabra.size()-1] << endl;   

    for (int i=0; i < palabra.size(); i++)
    {
        cout << "Posición " << i << ": " << palabra[i] << endl;
    }

}