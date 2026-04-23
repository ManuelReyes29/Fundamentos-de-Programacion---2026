#include <iostream>
#include <string>
using namespace std;

int main()
{
    string frase, caracter, resultado = "";
    int i = 0;
    cout << "Escriba una frase: ";
    getline(cin, frase);
    while(i < frase.size())
    {
        caracter = frase[i];
        if(caracter == "h")
        {
            caracter = "f";
        }
        resultado += caracter;
        i++;
    }
    cout << resultado<< endl;

    //metodo 2

    resultado = "";
    for(i=0; i < frase.size(); i++)
    {
        if(frase[i]=='h')
        {
        resultado = resultado + 'f';
        }
        else{
            if(frase[i] == 'H')
            {
                resultado = resultado + 'F';
            }else{
                resultado = resultado + frase[i];
            }
            
        }
        
    }cout << resultado;
}