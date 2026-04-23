#include <iostream>

using namespace std;

int main()
{
    int n, i = -1, acumulado = 0, puntos;
    cout << "Parele bolas, con 0  GAME OVER." << endl;
   
    while(i == -1)
    {
         cout << "Ingrese sus números de la suerte entre 1 y 6: ";
         cin >> n;
         while (n < 0 || n > 6)
            {
            cout << "Mijo, entre 1 y 6 o el 0 para acabar, que parte no entiende?; ERROR." << endl;
            cout << "Intentelo bien: ";
            cin >> n;
            }
         
         if(n != 0 && n!= 1)
         {
            acumulado = acumulado + n;
            cout << "Acumulado: " << acumulado << endl;
         }
         else
         {
             if(n == 1)
         {
            acumulado = 0;
            cout << "Perdío sus puntos :( "<< " Acumulado: " << acumulado << "." << endl;
            cout << "GAME OVER";
            i = -2;
         } 
         else
         {
            if(n == 0)
            {
                cout << "Acumulado Final: " << acumulado << endl;
                cout << "Perfectirilirijillo";
                i = -3;
            }
            else{}
         }
         
         }
        
    }

    
}