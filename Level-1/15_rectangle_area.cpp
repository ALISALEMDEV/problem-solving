#include <iostream>
using namespace std;
void ReadNum(int& a, int& b) {
    cout << "enter the first number : " << endl;
    cin >> a;
    cout << "enter the second number : " << endl;
    cin >> b;

}
float CalculateRectangleArea(int a, int b)
{
    return a * b;
}
void PrintResault(float area)
{
    cout << "the area of this rectangle is : " << area << endl;
}

int main()
{
    int a, b;
    ReadNum(a, b);
    PrintResault(CalculateRectangleArea(a, b));
}
