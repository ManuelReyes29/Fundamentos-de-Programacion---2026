#include <iostream>
using namespace std;

int main()
{
    int cantidad, numero;
    float contador, suma, promedio, i;
    suma = 0;
    contador = 0;
    i = 0;
    cout <<"Ingrese la cantidad de números: ";
    cin >> cantidad;
    while(cantidad <= 0){
        cout << "La cantidad de números debe ser positiva: ";
        cin >> cantidad;
    }
    while (contador < cantidad){
        cout <<"Ingrese el número: ";
        cin >> numero;
        while(numero < 0){
            cout << "Los números deben ser positivos";
            cin >> numero;
            }
            if(numero % 2 == 0){
                i = i + 1;
                suma = suma + numero;
            }else{}
            contador = contador + 1;
    }
    promedio = suma / i;
    cout << "El promedio de sus números pares es: "<< promedio<< endl;

}
