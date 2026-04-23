#include <iostream>
using namespace std;

int main ()
{
    int n, i = 1;
    cout << "Mijo, escriba el número hasta donde quiera saber si es par o impar: ";
    cin >> n;
    while (i <= n)
    {   
        if (i % 2 == 0)
        { 
            cout << i <<". "<<"es par"<<endl;
        }
        else
        {
            cout << i <<". "<< "es impar"<<endl;
        }
        i= i+1;
       }

    }