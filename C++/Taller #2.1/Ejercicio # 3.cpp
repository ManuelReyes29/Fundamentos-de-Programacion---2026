#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n, i, centinela = -3, suma = 0.0, promedio = 0.0, min = 5.0, max = 0.0, aprob = 0, reprob = 0, cantidad = 0;
    cout << "Parele bolas, con -1 se acaba." << endl;
    
    while(centinela == -3)
    {
        cout << "Ingrese notas entre 0.0 y 5.0: ";
        cin >> n;

        if(n == -1)
        {
            centinela =-2;
        }
        else
        {
        if(n < 0.0 || n > 5.0)
            {
            cout << "Mijo, entre 0.0 y 5.0 o el -1 para acabar, que parte no entiende?; ERROR." << endl;
            }
            else
            {                                
                    cantidad ++;
                    suma = suma + n;
                    if (n < min)
                    {
                        min = n;
                    }
                    else{}
                    if (n > max)
                    {
                        max = n;
                    }
                    else{}
                    if (n >= 3.0)
                    {
                        aprob ++;
                    }
                    else
                    {
                        reprob ++;
                    }     
            }                            
            
    }
}
    promedio = suma / cantidad;
    if (cantidad == 0)
    {
        min = 0.0;
    }
    else{}

    cout << endl;
    cout << "La cantidad de notas ingresadas fue: "<< cantidad << endl;
    cout << "El promedio del curso fue: " << setprecision(3) << promedio << endl;
    cout << "La nota minima fue: " << min << endl;
    cout << "La nota maxima fue: " << max << endl;
    cout << "La cantidad de estudiantes aprobados es: " << aprob << endl;
    cout << "La cantidad de estudiantes reprobados es: " << reprob << endl;   
    
}