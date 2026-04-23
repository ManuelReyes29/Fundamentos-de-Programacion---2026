#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int fact(int h)
{
    int prod = 1, i;
    for(i=1 ; i<= h; i++)
     {
        prod = prod * i;        
    }
    return prod;

}

double seno(int n, int angulo)
{
    int  i;
    float x, suma = 0.0 ;    
    x = (3.14159/180) * angulo;
    for (i = 0; i <= n ; i++)
    {
        suma = suma + ((pow (-1, i))*(pow(x, 2*i +1))) / (fact(2 * i +1));
    }
    return suma;
    
}

double coseno(int n, int angulo)
{
    int  i;
    float x, suma = 0.0 ;    
    x = (3.14159/180) * angulo;
    for (i = 0; i <= n ; i++)
    {
        suma = suma + ((pow (-1, i))*(pow(x, 2*i))) / (fact(2 * i));
    }
    return suma;
    
}

double tangente(int n, int angulo)
{
    float div;
    if (angulo == 90)
    {   
        return INFINITY;
    } else{
        div = seno(n, angulo) / coseno(n, angulo);
        return div;
    }

}

int main()
{
    int i = -1, n, angulo;
    

    while (i != 0)
    {
        cout << "-- Menu de operaciones --" << "\n";
        cout << "1. Seno" << "\n";
        cout << "2. Coseno" << "\n";
        cout << "3. Tangente" << "\n";
        cout << "0. Salir" << "\n";
        cout << ": " << endl;
        cin >> i;

        switch (i) 
        {
            case 1:
            {   cout << "Valor de n (terminos): ";
                cin >> n;
                cout << "Angulo (grados): ";
                cin >> angulo;
                cout << "Seno de " << angulo << " es igual a: " << seno(n, angulo) << endl;
                break;
                
            }
            case 2:
            {
                cout << "Valor de n (terminos): ";
                cin >> n;
                cout << "Angulo (grados): ";
                cin >> angulo;
                cout << "Coseno de " << angulo << " es igual a: " << coseno(n, angulo) << endl;
                break;
            }
            case 3:
            {
                cout << "Valor de n (terminos): ";
                cin >> n;
                cout << "Angulo (grados): ";
                cin >> angulo;
                cout << "Tangente de " << angulo << " es igual a: " << tangente(n, angulo) << endl;
            }
        }
    }
}