#include <iostream>

using namespace std;

int main()
{

    int n, i, imp, x;
    i = 1;
    imp = 1;
    cout << "Este programa te genera una piramide con números impares de la cantidad de filas que desees entre 1 y 9." << endl;
    cout << "¿De cuanto la quieres?: ";
    cin >> n;

    if (n > 9 || n < 1)
    {
        cout << "Hermano, que parte de entre 1 y 9 no entiende, haga caso; ERROR.";
    } 
    else    
    {
        while (i <= n)
        {
            x = 0;
            while (x < i)
            {
                cout << imp;
                cout << " ";
                imp = imp + 2;
                x++;
            }
            cout << endl;
            i++;
        }
        cout << "Eso es todo mi gente, gracias por ver :) ";

    }
}
