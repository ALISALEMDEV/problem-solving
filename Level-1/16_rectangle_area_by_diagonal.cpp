#include <iostream>
using namespace std;
void ReadNum(int& a, int& d) {
    cout << "enter the first number : " << endl;
    cin >> a;
    cout << "enter the second number : " << endl;
    cin >> d;

}
float RectangleAreaByDiagonal(int a, int d)
{
    return a * sqrt(pow(d, 2) - pow(a, 2));
}
void PrintResault(float area)
{
    cout << "the area of this rectangle is : " << area << endl;
}

int main()
{
    int a, d;
    ReadNum(a, d);
    PrintResault(RectangleAreaByDiagonal(a, d));
}
