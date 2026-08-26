#include <iostream>
using namespace std;
float ReadNum() {
    float a;
    cout << "enter a : " << endl;
    cin >> a;
    return a;

}
float CircleArea(float a)
{
    const float PI = 3.141592653589793238;
    float area = (pow(a, 2) * PI) / 4;
    return area;
}
void PrintResault(float area)
{
    cout << "the area of this circle is : " << area << endl;
}

int main()
{
    PrintResault(CircleArea(ReadNum()));
}
