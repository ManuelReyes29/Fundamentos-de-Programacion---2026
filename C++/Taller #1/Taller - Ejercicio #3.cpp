#include <iostream>
#include <cmath>
using namespace std;
int main()
{
        float num, i, sapo, diablo, raiz;
    cout << "Ingrese su número: ";
    cin >> num;
    sapo = num;
    i = 1;
    diablo = 0;
    raiz = 1;
    while ( i <= sapo){
        if(i * i == sapo){
           diablo = 1;
           raiz = i;
        } else{}
        i = i + 1;
    }
    if (diablo == 1){
         cout << num << ". Es cuadrado perfecto de: "<< raiz << endl;
    }else{
        cout << num << ". No es cuadrado perfecto."<< endl;
    }

}