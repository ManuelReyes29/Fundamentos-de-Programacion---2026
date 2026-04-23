#include <iostream>
using namespace std;

int fact(int n)
{
    int prod=1, i;
    for(i=1 ; i<= n; i++)
     {
        prod = prod * i;        
    }
    return prod;

}

int main()
{
    int n, i;
    cout << "Valor de n: ";
    cin >> n;
    int res = fact(n);
    cout << res;

}
