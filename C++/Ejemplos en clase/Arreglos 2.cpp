#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i;
    cout << "Numero de elementos a promediar: ";
    cin >> n;
    float notas[n], suma = 0, promedio;
    for (i= 0; i < n ; i++ )
    {
        cout << "elemento " << i + 1 << ": ";
        cin >> notas[i];
    }
    for (i = 0; i < n ; i++)
    {
        cout << notas[i] << ", ";
        suma = suma + notas[i];
    }
    promedio = suma / n;
    cout << endl;
    cout << " El promedio es : " << promedio << endl;
    suma = 0;
    for(i=0; i < n; i++)
    {
        suma = suma + pow(notas[i]-promedio, 2);
    }
    float vari, desvest; 
    vari = suma / (n);
    /*con el n-1 es muestra y con solo n es población*/
    desvest = sqrt(vari);
    cout << "La varianza es: " << vari<< endl;
    cout << "La desviación estandar es: " << desvest << endl;
}