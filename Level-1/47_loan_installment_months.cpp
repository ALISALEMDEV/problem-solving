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
float TotalMounths(float LoanAmount, float MounthlyInstallement) {
    return (float)LoanAmount / MounthlyInstallement;
}
int main()
{
    float LoanAmount = ReadNum("enter Loan Amount");
    float MounthlyInstallement = ReadNum("enter Mounthly Installement");
    cout << "total mounth to pay : " << TotalMounths(LoanAmount, MounthlyInstallement);
}
