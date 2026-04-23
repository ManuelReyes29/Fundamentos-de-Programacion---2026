#include <iostream>
using namespace std;

int main ()
{
    int sumaplus, sumanel, IA, IB, n, prom2024, prom2025;
    cout << "Ingrese los valores que se van a promediar (para finalizar ingrese 0): ";
    cin >> n;
    
    sumaplus = 0;
    sumanel = 0;
    IA = 0;
    IB = 0;

    while(n != 0){
        if(n > 0){
            sumaplus = sumaplus + n;
            IA = IA + 1;
            cin >> n;
        }else{
            sumanel = sumanel + n;
            IB = IB + 1;
            cin >> n;
        }
    }
    prom2024 = sumaplus / IA;
    prom2025 = sumanel / IB;
    cout << sumaplus << " es el conteo y " << prom2024 << " es el promedio de los números positivos." << endl;
    cout << sumanel << " es el conteo y " << prom2025 << " es el promedio de los números negativos." << endl;
    

}