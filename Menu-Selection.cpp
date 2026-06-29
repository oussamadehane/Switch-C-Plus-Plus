#include <iostream>
#include <cctype> 
using namespace std;

void GetPrice(char Item) {
    switch (toupper(Item)) {
        case 'P': cout << "Pizza: $10"; break;
        case 'B': cout << "Burger: $7"; break;
        case 'S': cout << "Salad: $5"; break;
        default:  cout << "Item not found!";
    }
}

int main() {
    char Choice;
    cout << "Menu (P:Pizza, B:Burger, S:Salad): "; cin >> Choice;
    GetPrice(Choice);
    return 0;
}
