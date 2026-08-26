#include <iostream>
#include <string>
using namespace std;
float ReadNum(string message) {
    float num = 0;
    do {
        cout << message << endl;
        cin >> num;
    } while (num <= 0);
    return num;
}
float calculate(float totalbill) {
    totalbill = totalbill * 1.1;
    totalbill = totalbill * 1.16;
    
    return totalbill;
}
int main()
{
    float totalbill = ReadNum("enter total bill");
    cout << "total bill = " << totalbill << endl;
    cout << "solution = " << calculate(totalbill);

}
