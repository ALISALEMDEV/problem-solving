#include <iostream>
using namespace std;
enum enOperationType{add='+',subtract='-',
    multiply='*',divise='/'};
float ReadNum(string message) {
    float num = 0;
    cout << message << endl;
    cin >> num;
    return num;
}
enOperationType ReadOpType() {
    char OT = '+';
    cout << "please enter operation type \n";
    cin >> OT;
    return (enOperationType)OT;
}
float Calculate(float num1, float num2, enOperationType ot) {
    switch (ot)
    {
    case enOperationType::add:
            return num1 + num2;
    case enOperationType::subtract:
            return num1 - num2;
    case enOperationType::multiply:
            return num1 * num2;
    case enOperationType::divise:
            return num1 / num2;
    default:
        return num1 + num2;
    }
}
int main()
{
    float num1 = ReadNum("enter the first number");
    float num2 = ReadNum("enter the second number");
    enOperationType op = ReadOpType();
    cout <<Calculate(num1,num2,op)<< endl;
}
