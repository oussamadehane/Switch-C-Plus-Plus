#include <iostream>
using namespace std;

void Calculator(double N1, double N2, char Op) {
    switch (Op) {
        case '+': cout << N1 + N2; break;
        case '-': cout << N1 - N2; break;
        case '*': cout << N1 * N2; break;
        case '/': (N2 != 0) ? cout << N1 / N2 : cout << "Error: Div by zero"; break;
        default:  cout << "Invalid Operator!";
    }
}

int main() {
    double N1, N2; char Op;
    cout << "Enter (Num1 Op Num2): "; cin >> N1 >> Op >> N2;
    Calculator(N1, N2, Op);
    return 0;
}
