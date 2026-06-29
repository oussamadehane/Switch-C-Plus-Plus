#include <iostream>
using namespace std;

int HowManyBooksPurchased() {
    int NumberOfBooks = 0;
    cout << "How many books did you buy? ";
    cin >> NumberOfBooks;
    return NumberOfBooks;
}

int CalculatePoints(int NumberOfBooks) {
    switch (NumberOfBooks) {
        case 1:  return 5;
        case 2:  return 15;
        case 3:  return 30;
        case 4:  return 50;
        default: return (NumberOfBooks >= 5) ? 70 : 0;
    }
}

void PrintResult(int Books, int Points) {
    cout << "You bought " << Books << " books and earned " << Points << " points." << endl;
}

int main() {
    int Books = HowManyBooksPurchased();
    int Points = CalculatePoints(Books);
    PrintResult(Books, Points);
    return 0;
}
