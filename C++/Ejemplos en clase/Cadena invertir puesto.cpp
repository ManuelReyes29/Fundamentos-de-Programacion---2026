#include <iostream>
#include <string>
using namespace std;

int main()
{
    string frase, palabra, cambiar, caracter="", resultado= "", ayuda;
    int i, n;
    cout << "Escriba una frase: "; 
    getline(cin, frase);
    cout << "Escriba la palabra para cambiar: ";
    cin >> palabra;
    cout << "CUal quiere en su lugar?: ";
    cin >> cambiar;
    frase = ' '+ frase + ' ' ;
    n = frase.size();
    i= 0;
    while(n >= 0)
    {
        if(frase[i] == ' ')
        {
            if(caracter == palabra)
            {
                caracter = cambiar;
                resultado = resultado + ' ' + caracter;
                caracter = "";
                }else{
                    resultado  =  resultado + frase[i];
                    resultado = resultado + ' ' + caracter;
                    caracter = "";
                }
        }else{
            caracter= caracter + frase[i];
                   
        }
        n = n-1;
        i ++;
    }
    cout << resultado;

}