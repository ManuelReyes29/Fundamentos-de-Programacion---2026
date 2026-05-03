#include <iostream>
#include <string>

using namespace std;

string mayus (string palabra)
{
    if(palabra[0] >= 97 && palabra[0] <= 122)
    {
        palabra[0] = palabra[0] - 32;
    }
    else
    {}
    return palabra;

}

int main()
{
    string frase, palabra = "", resultado = ""; 
    int n,i;
    cout << "Ingrese su frase: ";
    getline(cin, frase);
    frase = frase + ' ';
    n =  frase.size();
    for(i=0; i < n; i++)
    {
        if(frase[i] != ' ')
        {
            palabra = palabra + frase[i];           
        }
        else
        {
            resultado = resultado + mayus(palabra) + ' ';
            palabra = "";
        }
    }
    
    cout << resultado;
}