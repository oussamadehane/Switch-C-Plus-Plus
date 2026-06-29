#include <iostream>
using namespace std;

enum EnDaysOfWeek {
    Sun = 1, Mon, Tue, Wed, Thu, Fri, Sat
};

short ReadNumberInRange() {
    short Number;
    do {
        cout << "Enter day number (1-7): ";
        cin >> Number;
    } while (Number <= 0 || Number > 7);
    return Number;
}

EnDaysOfWeek GetDay(short Number) {
    switch (Number) {
    case 1: return Sun;
    case 2: return Mon;
    case 3: return Tue;
    case 4: return Wed;
    case 5: return Thu;
    case 6: return Fri;
    default: return Sat;
    }
}

void PrintDay(short Number, EnDaysOfWeek Day) {
    cout << "You entered " << Number << ", which is equal to day: " << Day << endl;
}

int main() {
    short Number = ReadNumberInRange();

    EnDaysOfWeek Dk = GetDay(Number);

    PrintDay(Number, Dk);

    return 0;
}
