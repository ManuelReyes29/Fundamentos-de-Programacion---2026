#include <iostream>
using namespace std;

int main()
{
    int n;
    long int num1=0, num2=1, sum=0 ;
    cout <<"Hasta donde lo quiere?: ";
    cin >> n;
    while (sum<=n)
    {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }

    cout << num1 ;

}