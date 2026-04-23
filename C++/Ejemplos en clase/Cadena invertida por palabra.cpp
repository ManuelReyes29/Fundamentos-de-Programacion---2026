#include <iostream>
#include <string>
using namespace std;

int main()
{
    string frase, resultado = "", ciclo="", ayuda="";
    int i, n;
    cout << "Coloque una frase: ";
    getline(cin, frase);
    frase = ' '  + frase;
    n =  frase.size();
    while(n >= 0)
    {
        if(frase[n] ==' ')
        {
            ciclo += frase[n];
            ayuda = ciclo + ayuda;
            ciclo = "";
        }else{
            ciclo += frase[n];
            }
        n = n -1;
    }cout << ayuda;
}