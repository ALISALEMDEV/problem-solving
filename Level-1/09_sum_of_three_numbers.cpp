#include <iostream>
using namespace std;
void readnum(int &num1, int &num2, int &num3) {
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
void printresault(int total)
{
    cout << "\n the total sum of num is : \n" << total;
}
int main()
{
    int num1, num2, num3;
    readnum(num1, num2, num3);
    printresault(sumof3num(num1, num2, num3));
}
