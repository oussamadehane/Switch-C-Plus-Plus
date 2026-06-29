#include <iostream>
using namespace std;

enum EnScale { C = 1, F, K };

void ConvertTemp(double Temp, EnScale Scale) {
    switch (Scale) {
        case C: cout << Temp << " C is " << (Temp * 9/5) + 32 << " F"; break;
        case F: cout << Temp << " F is " << (Temp - 32) * 5/9 << " C"; break;
        case K: cout << Temp << " K is " << Temp - 273.15 << " C"; break;
        default: cout << "Invalid scale!";
    }
}

int main() {
    double Temp; int Choice;
    cout << "Enter Temp: "; cin >> Temp;
    cout << "Convert to (1:F, 2:C, 3:C): "; cin >> Choice;
    ConvertTemp(Temp, (EnScale)Choice);
    return 0;
}
