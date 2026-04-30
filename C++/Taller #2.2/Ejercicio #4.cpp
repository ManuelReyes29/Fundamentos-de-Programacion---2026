#include <iostream>

using namespace std;

int divisores (int n)
{
    int i = 1, divs = 0;
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            divs = i + divs;
        }
        else{}
    }
    return divs;
}

bool revision (int n)
{
    if(n == divisores(n))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n, centinela = -2;
    cout << "Solo números enteros positivos."<< endl;
    cout << "Con 0 acaba el programa." << endl;
    cout << "Ingrese un valor: ";
    while(centinela == -2)
    {
    cin >> n;
    if (n < 0)
    {
        cout << "Que debe ser un entero positivo, haga caso. ERROR.";
        centinela == -4;
    }
    else
    {
        while(n != 0)
        {
            if(revision(n))
            {
                cout << n << ". Es perfecto " << endl;
            }
            else
            {
                cout << n << ". No es perfecto " <<  endl;
            }
            cout << "Ingrese un valor: ";
            cin >> n;
        }
        centinela == -5;
        cout << "FIN.";
    }
    }
}