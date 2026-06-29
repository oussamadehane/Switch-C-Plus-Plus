#include <iostream>
using namespace std;

double GetTicketPrice(char Category) {
    switch (toupper(Category)) {
        case 'V': return 50.0; // VIP
        case 'R': return 25.0; // Regular
        case 'C': return 10.0; // Child
        default:  return 0.0;
    }
}

int main() {
    char Cat;
    cout << "Category (V:VIP, R:Regular, C:Child): "; cin >> Cat;
    double Price = GetTicketPrice(Cat);
    (Price > 0) ? cout << "Price: $" << Price : cout << "Invalid Category!";
    return 0;
}
