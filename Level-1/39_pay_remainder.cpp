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
float calculateremainder(int totalbill, float totalcachpaid) {
    return totalcachpaid - totalbill;
}
int main()
{
    float totalbill = ReadNum("enter total bill");
    float totalcachpaid = ReadNum("enter total cach paid");
    cout << "total bill = " << totalbill << endl;
    cout << "total cach paid = " << totalcachpaid << endl;
    cout << "**************************************" << endl;
    cout << "remainder = " << calculateremainder(totalbill, totalcachpaid) << endl;
}
