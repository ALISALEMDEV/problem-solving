#include <iostream>
using namespace std;
void ReadNum(float& a, float& h) {
    cout << "enter a : " << endl;
    cin >> a;
    cout << "enter h : " << endl;
    cin >> h;

}
float triangleArea(float a, float h)
{
    return (a / 2) * h;
}
void PrintResault(float area)
{
    cout << "the area of this triangle is : " << area << endl;
}

int main()
{
    float a, h;
    ReadNum(a, h);
    PrintResault(triangleArea(a, h));
}
