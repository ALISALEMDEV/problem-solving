#include <iostream>
using namespace std;
float ReadNum() {
    float r;
    cout << "enter r : " << endl;
    cin >> r;
    return r;

}
float CircleArea(float r)
{
    const float PI = 3.141592653589793238;
    return pow(r, 2) * PI;
}
void PrintResault(float area)
{
    cout << "the area of this circle is : " << area << endl;
}

int main()
{
    PrintResault(CircleArea(ReadNum()));
}
