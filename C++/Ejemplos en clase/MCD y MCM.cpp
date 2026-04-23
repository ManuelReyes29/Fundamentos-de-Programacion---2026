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
    cout << "Este programa le permite saber el MCD de dos numeros pares o impares y el MCM de 1 par y 1 impar o viceversa." << endl;
    int numero1, numero2, residuo, mcd, mcd2, mcm;

    cin >> numero1;
    cin >> numero2;
    if (numero1 % 2 == 0) {
        if (numero2 % 2 == 0) {
            while (numero2 > 0) {
                residuo = numero1 % numero2;
                numero1 = numero2;
                numero2 = residuo;
            }
            cout << numero1 << " es el MCD de sus dos numeros pares." << endl;
        } else {
            mcd = numero1;
            mcd2 = numero2;
            while (mcd2 > 0) {
                residuo = mcd % mcd2;
                mcd = mcd2;
                mcd2 = residuo;
            }
            mcm = (double) (numero1 * numero2) / mcd;
            cout << mcm << " es el MCM de su numero par e impar." << endl;
        }
    } else {
        if (numero2 % 2 == 0) {
            mcd = numero1;
            mcd2 = numero2;
            while (mcd2 > 0) {
                residuo = mcd % mcd2;
                mcd = mcd2;
                mcd2 = residuo;
            }
            mcm = (double) (numero1 * numero2) / mcd;
            cout << mcm << " es el MCM de su numero impar y par." << endl;
        } else {
            while (numero2 > 0) {
                residuo = numero1 % numero2;
                numero1 = numero2;
                numero2 = residuo;
            }
            cout << numero1 << " es el MCD de sus dos numeros impares." << endl;
        }
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
