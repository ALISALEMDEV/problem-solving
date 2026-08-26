#include <iostream>
using namespace std;
float ReadNum() {
    float d;
    cout << "enter d : " << endl;
    cin >> d;
    return d;

}
float CircleArea(float d)
{
    const float PI = 3.141592653589793238;
    float area = (pow(d, 2) * PI) / 4;
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
