#include <iostream>
using namespace std;

// دالة تستخدم الـ switch للتعامل مع أنواع الاشتراكات
double CalculateFees(char AccountType, int Checks) {
    double BaseFee = 10.0;

    switch (toupper(AccountType)) {
        case 'A': return BaseFee + 5.0; // اشتراك ذهبي
        case 'B': return BaseFee + 2.0; // اشتراك فضي
        case 'C': return BaseFee;       // اشتراك برونزي
        default:  return BaseFee + 10.0; // رسوم إضافية للأنواع غير المعروفة
    }
}

int main() {
    char Type;
    int Checks;

    cout << "Enter Account Type (A, B, C): "; cin >> Type;
    cout << "Enter Number of Checks: "; cin >> Checks;

    double FinalFee = CalculateFees(Type, Checks);
    
    cout << "Total Monthly Fees: $" << FinalFee << endl;

    return 0;
}
