#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "Hola";
    string b;
    string c = a;

    cout << "a: " << a << endl;
    cout << "b: [" << b << "]" << endl;
    cout << "c: " << c << endl;

    string nombre, frase;
    cout << "Escriba su nombre: ";
    cin >> nombre;
    cin.ignore(2048, '\n');
    cout << "Escriba una frase: ";
    getline(cin, frase);
    cout << "Nombre: " << nombre << endl;
    cout <<"Frase: " << frase << endl;
    cout << "Longitud del nombre: "<< nombre.size() << endl;
    cout << "Longitud de la frase: " << frase.size() << endl;

}
