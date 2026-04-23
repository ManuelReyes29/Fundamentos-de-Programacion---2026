#include <iostream>
using namespace std;

int main()
{
    int n, max;
    cout << "Ingrese el valor hasta el que desea el listado: ";
    cin >> max;
    while(max<=0){
        cout<< "El número debe ser un entero positivo: ";
        cin >> max;
    }
    for(n=1; n <= max ; n++)
    {
        if (n%2 == 0 && n%3 == 0 && n%5==0){
            cout << n << ". Es divisible por 2, 3 y 5."<< endl;            
        }else{
            if (n%2 == 0 && n% 3 == 0){
                cout << n<< ". Es divisible por 2 y 3." << endl;
            }else{
                if (n%2 == 0 && n%5 == 0){
                    cout << n << ". Es divisible por 2 y 5." << endl;
                }else{
                    if(n%3 == 0 && n%5 == 0){
                        cout << n << ". Es divisible por 3 y 5."<< endl;
                    }else{
                    if (n%2 == 0){
                        cout << n << ". Es divisible por 2."<< endl;
                    }else{
                        if (n%3== 0){
                            cout << n << ". Es divisible por 3." << endl;
                        }else{
                            if (n%5 == 0){
                                cout << n <<". Es divisible por 5."<< endl;
                            }else{
                                cout << n <<"."<<endl;
                            }
                        }
                    }
                    }
                }
            }
        }
    }

}

