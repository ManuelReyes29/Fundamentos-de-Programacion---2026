#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    long int n, i;
    double suma, pi, error;
    std::cout << "Numero de términos: ";
    std::cin >> n;
    suma = 0;
    for(i=0; i<=n; i++)
    {
        suma = suma + ( pow(-1, i)) / (2*i + 1);
    }
    pi = 4 * suma;
    error= ((pi - M_PI) / M_PI) * 100; 
    // en porcentaje
    // El M_PI es el valor teorico de pi en la librería

    std::cout << std::setprecision(20)<<"El valor aproximado de pi es: " << pi<< std::endl;
    std::cout << std::setprecision(20)<<"El valor teorico de pi es: " <<M_PI<< std::endl;
    std::cout << std::setprecision(10)<<"El error es: " << error << std::endl;
    // el setprecision es para la cant. de decimales en la respuesta
    // se repite el std porque es una funcion dentro de otra

}