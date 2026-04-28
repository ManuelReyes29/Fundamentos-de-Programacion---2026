#include <iostream>

using namespace std;
int main()
{
    int n, pasos = 0, max;
    long long i;
    cout << "Ingrese un valor mayor a 1: ";
    cin >> n;
    i=n;
    max = n;
   
    if(n>1)
    {
        cout << n;
        while(i != 1)
        {
            if (i%2 == 0)
          {
            i = i / 2;
          }
          else
          {
            i = (i*3) + 1;
          }
          pasos ++;
          if(i > max)
          {
            max = i;
          }
          else{}
          cout << " -> " << i;

        }
        cout << endl;
        cout << "Pasos: " << pasos << endl;
        cout << "Valor maximo: " << max;

       
    }
    else
    {
        cout << "Número invalido. ERROR";
    }


}