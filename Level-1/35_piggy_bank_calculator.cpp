#include <iostream>
using namespace std;
struct stPiggyBankContent
{
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};
stPiggyBankContent ReadTotalSales() {
    stPiggyBankContent PiggyBankContent;
    cout << "enter Pennies" << endl;
    cin >> PiggyBankContent.Pennies;
    cout << "enter Nickels" << endl;
    cin >> PiggyBankContent.Nickels;
    cout << "enter Dimes" << endl;
    cin >> PiggyBankContent.Dimes;
    cout << "enter Quarters" << endl;
    cin >> PiggyBankContent.Quarters;
    cout << "enter Dollars" << endl;
    cin >> PiggyBankContent.Dollars;
    return PiggyBankContent;
}
float CalculateTotalPennies(stPiggyBankContent PiggyBankContent) {
    int total = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nickels * 5 + PiggyBankContent.Dimes * 10 + PiggyBankContent.Quarters * 25 + PiggyBankContent.Dollars * 100;
    return total;
}
int main()
{
    float totalpennies = CalculateTotalPennies(ReadTotalSales());
    cout << "total pennies : " << totalpennies<<endl;
    cout << "total dollars : " << (float)totalpennies / 100;
}
