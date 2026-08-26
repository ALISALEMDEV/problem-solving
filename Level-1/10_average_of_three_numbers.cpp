#include <iostream>
using namespace std;
void readnum(int& num1, int& num2, int& num3) {
    cout << "enter the first number : " << endl;
    cin >> num1;
    cout << "enter the second number : " << endl;
    cin >> num2;
    cout << "enter the third number : " << endl;
    cin >> num3;

}
int sumof3num(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}
float calculateavrg(int num1, int num2, int num3)
{
    return (float)sumof3num(num1, num2, num3) / 3;
}
void printresault(int avr)
{
    cout << "\n the total sum of num is : \n" << avr;
}
int main()
{
    int num1, num2, num3;
    readnum(num1, num2, num3);
    printresault(calculateavrg(num1, num2, num3));
}
