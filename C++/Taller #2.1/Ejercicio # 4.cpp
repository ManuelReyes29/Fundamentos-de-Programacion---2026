#include <iostream>

using namespace std;

int main()
{
    long int residuo, resultado, factor, n, base, chambear, cifra, poten;
    cout << "Un número entre 1 y 255." << endl;
    cout << "Ingrese su número: ";
    cin >> n;

    while(n < 1 || n > 255)
    {
        cout << "Papi, no leyó el primer mensaje? Entre 1 y 255. ERROR "<< endl;
        cout << "Intentelo bien: ";
        cin >> n;
    }
    chambear = n;
    base = 2;
    resultado = 0;
    factor = 1;
    while(chambear > 0){
        residuo = chambear % base;
        chambear = chambear / base;
        resultado = resultado + (residuo * factor);
        factor = factor * 10;
    } 
    cout << n << " en binario o base 2 es: " << resultado << endl;

    chambear = n;
    poten = 1;
    cifra = 0;
    cout << n << " en hexadecimal o base 16 es: ";
    while(poten * 16 <= chambear)
    {
        poten = poten * 16;
    }
    while(poten > 0)
    {
        cifra = chambear / poten;
        if(cifra < 10)
        {
            cout << cifra;
        }
        else
        {
            cout << char('A'+ (cifra-10));
        }

        chambear = chambear % poten;
        poten = poten / 16;
    }
}