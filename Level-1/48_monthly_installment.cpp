#include <iostream>
#include <string>
using namespace std;
float ReadNum(string message) {
    float num = 0;
    do {
        cout << message << endl;
        cin >> num;
    } while (num <= 0);
    return num;
}
float TotalMounths(float LoanAmount, float HowManyMonths) {
    return (float)LoanAmount / HowManyMonths;
}
int main()
{
    float LoanAmount = ReadNum("enter Loan Amount");
    float HowManyMonths = ReadNum("enter total mounth to pay");
    cout << " Mounthly Installement: " << TotalMounths(LoanAmount, HowManyMonths);
}
