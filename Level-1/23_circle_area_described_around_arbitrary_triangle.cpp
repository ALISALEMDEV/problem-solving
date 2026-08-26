#include <iostream>
using namespace std;
void ReadNum(float& a, float& b, float& c) {

    cout << "enter a : " << endl;
    cin >> a;
    cout << "enter b : " << endl;
    cin >> b;
    cout << "enter c : " << endl;
    cin >> c;
}
float CircleArea(float a, float b, float c)
{
    const float PI = 3.141592653589793238;
    float p = (a + b + c) / 2;
    float t = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    float area = PI * pow(t, 2);
    return area;
}
void PrintResault(float area)
{
    cout << "the area of this circle is : " << area << endl;
}

int main()
{
    float a, b, c;
    ReadNum(a, b, c);
    PrintResault(CircleArea(a, b, c));
}
