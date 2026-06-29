#include <iostream>
using namespace std;

enum EnCurrency { USD = 1, EUR, GBP };

double Convert(double Amount, EnCurrency Currency) {
    switch (Currency) {
        case USD: return Amount * 135.0;  
        case EUR: return Amount * 145.0;
        case GBP: return Amount * 170.0;
        default:  return 0;
    }
}

int main() {
    double Amount;
    int Choice;
    cout << "Enter Amount (DZD): "; cin >> Amount;
    cout << "Choose (1:USD, 2:EUR, 3:GBP): "; cin >> Choice;
    
    cout << "Result: " << Convert(Amount, (EnCurrency)Choice) << endl;
    return 0;
}
