#include <iostream>

using namespace std;

int main()
{
    int n, postre, contador = 0, factor = 2, residuo = 0, primo = 0;
    cout << "Ingrese un número mayor a 1: ";
    cin >> n;
    postre = n;
    if (n > 1)
    {
        cout << "Factores primos de " << n << ": "<< endl;
        cout << n << " = ";
        while(postre != 1)
        {
            residuo = postre % factor;
            if(residuo == 0)
            {
                contador = contador + 1;
                cout << factor;
                postre = postre / factor;
                if(postre != 1)
                {
                    cout << " x ";
                }
                else{}
            }
            else
            {
                factor = factor + 1;
            }     
        }

        cout << endl;
        cout << "Total de factores: " << contador << endl;
        if(contador > 1)
        {
           cout << n << " No es primo.";
        }
        else 
        {
            cout << n << " Es primo. ";
        }
      
    }
    else
    {
        cout << "Valor incorrecto, debe ser mayor a 1. ERROR";
    }

}