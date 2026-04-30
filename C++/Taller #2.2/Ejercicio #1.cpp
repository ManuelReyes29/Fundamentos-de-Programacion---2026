#include <iostream>

using namespace std;

int inversonum (int n)
{
    int numeroinvertido = 0;
    while(n >0)
    {
        int cifra = n % 10;
        numeroinvertido = numeroinvertido * 10 + cifra;
        n = n / 10;
    }
    return numeroinvertido;
}

bool palindromo (int n , int invertido)
{
    if (n == invertido)
    {
        return 1;
    }  
    else
    {
        return 0;
    }

}
int main ()
{
    int n;
    cout << "Solo valores enteros positivos." << endl;
    cout << "Ingrese el número: ";
    cin >> n;
    if (n > 0)
    {
        int invertido = inversonum(n);
        if(palindromo(n, invertido))
        {
            cout << "El número es palindromo."<< endl;
        }   
        else
        {
            cout << "El número no es palindromo.";
        }
    }
    else
    {
        cout << "El número debe ser un entero positivo. ERROR.";
    }
}