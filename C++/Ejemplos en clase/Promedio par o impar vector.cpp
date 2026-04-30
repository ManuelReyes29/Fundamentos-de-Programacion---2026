#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector < int > par;
    vector < int > impar;
    int n, suma1 = 0, suma2 = 0;
    float prompar = 0, prompir = 0;
    cout << "Ingrese un valor: ";
    cin >> n;
    while(n != 0)
    {
        if(n % 2 == 0)
        {
            par.push_back(n);
            suma1 = suma1 + n; 
        }
        else
        {
            impar.push_back(n);
            suma2 = suma2 + n;
        }
        cout << "Ingrese un valor: ";
        cin >> n;
    }
    if(par.size() > 0)
    {
        prompar = suma1 / par.size();
        cout << "El promedio de pares es: " << prompar << endl;
    }
    else
    {
        cout <<"No hay valores pares. No hay promedio."<< endl;
    }
    if(impar.size() > 0)
    {
        prompir = suma2 / impar.size();
        cout << "El promedio de impares es: " << prompir << endl;
    }
    else
    {
        cout << "No hay valores impares. No hay promedio" << endl;
    }
   
}