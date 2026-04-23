
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int n, numero1, numero2, i, suma;

    cin >> n;
    numero1 = 0;
    numero2 = 1;
    i = 2;
    cout << numero1 << endl;
    cout << numero2 << endl;
    while (i < n) {
        suma = numero1 + numero2;
        cout << suma << endl;
        numero1 = numero2;
        numero2 = suma;
        i = i + 1;
    }
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
