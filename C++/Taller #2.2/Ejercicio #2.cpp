#include <iostream>

using namespace std;

int MCD (int numero1, int numero2)
{
    int mcd, residuo, porsiacaso1 = numero1, porsiacaso2=numero2;
    while(porsiacaso2 > 0)
    {
        residuo = porsiacaso1 % porsiacaso2;
        porsiacaso1 = porsiacaso2;
        porsiacaso2 = residuo;
        mcd = porsiacaso1;
    }
    return mcd;
}

int MCM (int numero1, int numero2)
{
    int mcm;
    mcm = (numero1*numero2)/ MCD (numero1, numero2);
    return mcm;
}

int main()
{
    int numero1, numero2;
    cout << "Solo valores enteros positivos." << endl;
    cout << "Ingrese su primer número: ";
    cin >> numero1; 
    cout << "Ingrese su segundo número: ";
    cin >> numero2;
    if(numero1 && numero2 > 0)
    {
        cout << "El MCD es:" << MCD (numero1, numero2)<< endl;
        cout << "El MCM es:" << MCM (numero1, numero2)<< endl;
    }
    else
    {
        cout << "Los números deben ser enteros positivos. ERROR.";
    }

}