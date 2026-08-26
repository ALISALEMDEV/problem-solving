#include <iostream>
using namespace std;
void ReadNum(float &a, float &b) {
    
    cout << "enter a : " << endl;
    cin >> a;
    cout << "enter b : " << endl;
    cin >> b;
}
float CircleArea(float a, float b)
{
    const float PI = 3.141592653589793238;
    float area =PI * (pow(b, 2)/4)*((2*a-b)/(2*a+b));
    return area;
}
void PrintResault(float area)
{
    cout << "the area of this circle is : " << area << endl;
}

int main()
{
    float a, b;
    ReadNum(a,b);
    PrintResault(CircleArea(a, b));
}
