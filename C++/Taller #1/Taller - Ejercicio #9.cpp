#include <iostream>
using namespace std;

int main()
{
    int n, numero1, numero2, suma;
    cout << "Ingrese hasta donde lo quiere: ";
    cin >> n;
    while(n <= 0){
        cout << "El número debe ser un entero positivo getichistoso: ";
        cin >> n;
    }
    numero1 = 0;
    numero2 = 1;
    suma = 0;   
    
    cout << numero1 << endl;
    cout << numero2 << endl;
    while(suma <= n){
        suma = numero1 + numero2;
        if (suma <= n){
            cout << suma << endl;
        }else{}
        numero1 = numero2;
        numero2 = suma;
    }
    cout << "Esos son los valores en la serie de fibonacci hasta " << n << endl;
}