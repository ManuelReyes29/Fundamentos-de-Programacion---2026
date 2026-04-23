#include <iostream>
using namespace std;

int main()
{
    int numero1, numero2, residuo, mcd, mcd2, mcm;
    cout << "Ingrese sus dos números: ";
    cin >> numero1; cin >> numero2;
    if (numero1 % 2 == 0){
        if(numero2 % 2 == 0){
            while(numero2 > 0){
                residuo = numero1 % numero2;
                numero1 = numero2;
                numero2 = residuo;
            }
            cout << numero1 << " es el MCD de sus dos números pares."<< endl;
        }else{
            mcd = numero1;
            mcd2 = numero2;
            while(mcd2 > 0){
                residuo = mcd % mcd2;
                mcd = mcd2;
                mcd2 = residuo;
            } mcm = (numero1 * numero2)/mcd;
            cout << mcm << " es el MCM de su número par e impar."<< endl;
        }
    }else{
        if(numero2 % 2 == 0){
            mcd = numero1;
            mcd2 = numero2;
            while(mcd2 > 0){
                residuo = mcd % mcd2;
                mcd = mcd2;
                mcd2 = residuo;
            } mcm = (numero1 * numero2)/mcd;
            cout << mcm << " es el MCM de su número impar y par." << endl;
        }else{
            while(numero2 > 0){
                residuo = numero1 % numero2;
                numero1 = numero2;
                numero2 = residuo;
            } 
            cout << numero1 << " es el MCD de sus dos números impares." << endl;
        }
    }



}
