#include <iostream>
using namespace std;

int main()
{
    int numero1, numero2, n, suma;
    cout << "Siguiente a cual queire ver? : ";
    cin >> n;
    
    while(n <= 0){
        cout << "Canson, un entero positivo: ";
        cin >> n;
    }

    numero1= 0;
    numero2= 1;
    suma = 0;
    
    while(suma <= n){
        suma = numero1 + numero2;
        numero1 = numero2;
        numero2 = suma;
    }
    cout << "Su número es: " << suma << ". Kbron." << endl;

}