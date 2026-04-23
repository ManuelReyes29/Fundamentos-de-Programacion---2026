#include <iostream>
using namespace std;

int main()
{
    long int residuo, resultado, factor, numero, base, chambear;
    cout << "Ingrese el número que desea transformar: ";
    cin >> numero;
    chambear = numero;
    base = 2;
    resultado = 0;
    factor = 1;
    while(chambear > 0){
        residuo = chambear % base;
        chambear = chambear / base;
        resultado = resultado + (residuo * factor);
        factor = factor * 10;
    } cout << numero << " en binario o base 2 es: " << resultado << endl;
    
    base = 4;
    chambear = numero;
    resultado = 0;
    factor = 1;
     while(chambear > 0){
        residuo = chambear % base;
        chambear = chambear / base;
        resultado = resultado + (residuo * factor);
        factor = factor * 10;
    } cout << numero << " en cuaternario o base 4 es: " << resultado << endl;

    base = 8;
    chambear = numero;
    resultado = 0;
    factor = 1;
     while(chambear > 0){
        residuo = chambear % base;
        chambear = chambear / base;
        resultado = resultado + (residuo * factor);
        factor = factor * 10;
    } cout << numero << " en octogonal o base 8 es: " << resultado << endl;

}