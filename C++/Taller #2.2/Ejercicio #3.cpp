#include <iostream>
#include <string>

using namespace std;

string censura (string frase, int i)
{
    for(i = 0; i<= frase.size(); i++ )
    {
        if(frase[i] == 'A' || frase[i] == 'a' || frase[i] == 'E' || frase[i] == 'e' || frase[i] == 'I' || frase[i] == 'i' || frase[i] == 'O' || frase[i] == 'o' || frase[i] =='U' || frase[i] =='u')
        {
            frase[i] = '*';
        }
        else{}
    }
    return frase;
}

int main()
{
    string frase;
    int i;
    cout << "Ingrese su frase: ";
    getline(cin, frase);
    cout << "Su frase censurada es: " << censura(frase,i);
    
}