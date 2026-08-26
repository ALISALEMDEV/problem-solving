#include <iostream>
using namespace std;
float ReadNum() {
    float l;
    cout << "enter l : " << endl;
    cin >> l;
    return l;

}
float CircleArea(float l)
{
    const float PI = 3.141592653589793238;
    float area = (pow(l, 2) )/( PI * 4);
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
