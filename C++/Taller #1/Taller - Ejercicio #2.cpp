#include <iostream>
using namespace std;

int main()
{
    int n, i, divisores, primo;
    cout << "Ingrese un valor para decirle el primo antes o si es ese: ";
    cin >> n;

    while(n < 2){
        cout << "Kbron, mayor a 1: ";
        cin >> n;
    }
    primo = 0;
    
    while(primo == 0){
        divisores = 0;
        i = 1;
        while(i <= n){
            if(n % i == 0){
                divisores = divisores + 1;
            }else{}
            i = i + 1;
        }
        if(divisores <=2){
            primo = 1;
            cout << "El primo más cercano es: " << n << endl;
        }else{
            n = n-1;
        }
    }



}