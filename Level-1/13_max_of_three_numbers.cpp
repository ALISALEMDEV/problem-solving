#include <iostream>
using namespace std;
void readmark(int& a, int& b, int& c) {
    cout << "enter the first number : " << endl;
    cin >> a;
    cout << "enter the second number : " << endl;
    cin >> b;
    cout << "enter the third number : " << endl;
    cin >> c;

}
int maxof3num(int a, int b, int c)
{
    if (a > b)
        if (a > c)
            return a;
        else
            return c;
    if (a < b)
        if (b > c)
            return b;
        else
            return c;
}
void printresault(int max)
{
    cout << "the maximum number is " << max;
}

int main()
{
    int a, b, c;
    readmark(a, b, c);
    printresault(maxof3num(a, b, c));
}
