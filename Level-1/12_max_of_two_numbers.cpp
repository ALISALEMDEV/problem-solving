#include <iostream>
using namespace std;
void readmark(int& num1, int& num2) {
    cout << "enter the first number : " << endl;
    cin >> num1;
    cout << "enter the second number : " << endl;
    cin >> num2;

}
int maxof2num(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}
void printresault(int max)
{
    cout << "the maximum number is " << max;
}

int main()
{
    int num1, num2;
    readmark(num1, num2);
    printresault(maxof2num(num1, num2));
}
