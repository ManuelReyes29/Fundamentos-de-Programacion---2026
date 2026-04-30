#include <iostream>
#include <string>

using namespace std;

int caracter (string frase)
{
    if(frase.size()>= 8)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int mayuscula (string frase)
{
    int i = 0;
    char MAYUS;
    while(i < frase.size())
    {
        MAYUS = frase[i];
        if(MAYUS >= 65 && MAYUS <= 90)
        {
            return 1;
        }
        else
        {}
        i++;
    }
    return 0;
}

int minuscula (string frase)
{
    int i = 0;
    char MINUS;
    while(i< frase.size())
    {
        MINUS = frase[i];
        if (MINUS >= 97 && MINUS <= 122)
        {
            return 1;
        }
        else
        {}
        i++;
    }
    return 0;
}
int digito (string frase)
{
    int i = 0;
    char CIFRA;
    while(i< frase.size())
    {
        CIFRA = frase[i];
        if (CIFRA >=48 && CIFRA <= 57)
        {
            return 1;
        }
        else
        {}
        i++;
    }
    return 0;
}


int main()
{
    string frase;
    int i=0;
    cout << "Escriba su clave maxima de seguridad: ";
    getline(cin, frase);
    i += caracter(frase) + mayuscula(frase) + minuscula(frase) + digito(frase);
    cout << i << endl;
    if(i>3)
    {
        cout <<"Su contraseña es fuerte bro."<< endl;
    }
    else{}
    if(i>=2 && i < 4)
    {
        cout << "Su contraseña es media bro." << endl;
    }
    else{}
    if(i < 2)
    {
        cout << "Su contraseña es debil bro." << endl;
    }
    else{}

}