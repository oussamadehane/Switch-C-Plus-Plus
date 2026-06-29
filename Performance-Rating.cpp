#include <iostream>
using namespace std;

void ShowRating(int Score) {
    switch (Score) {
        case 1: cout << "Needs Improvement"; break;
        case 2: cout << "Below Expectations"; break;
        case 3: cout << "Meets Expectations"; break;
        case 4: cout << "Exceeds Expectations"; break;
        case 5: cout << "Outstanding"; break;
        default: cout << "Invalid score!";
    }
}

int main() {
    int Score;
    cout << "Enter score (1-5): "; cin >> Score;
    ShowRating(Score);
    return 0;
}
