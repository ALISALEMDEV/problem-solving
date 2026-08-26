#include <iostream>
using namespace std;
void readnum(int& a, int& b) {
    cout << "enter the first number : " << endl;
    cin >> a;
    cout << "enter the second number : " << endl;
    cin >> b;

}
void swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void printresault(int a,int b)
{
    cout << "number 1 = " << a <<endl;
    cout << "number 2 = " << b << endl;
}

int main()
{
    int a, b;
    readnum(a, b);
    printresault(a,b);
    swap(a,b);
    printresault(a, b);
}
