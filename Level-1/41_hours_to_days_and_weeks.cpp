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
float HoursToDays(int numberofhours) {
    return (float)numberofhours / 24;
}
float HoursToWeeks(int numberofhours) {
    return (float)numberofhours / 24 / 7;
}
float DaysToWeeks(int numberofdays) {
    return (float)numberofdays / 7;
}
int main()
{
    float numberofhours = ReadNum("enter the number of hours : ");
    float numberofdays = HoursToDays(numberofhours);
    float numberofweeks = DaysToWeeks(numberofdays);

    cout << "total hours = " << numberofhours << endl;
    cout << "total days = " << numberofdays << endl;
    cout << "total weeks = " << HoursToWeeks(numberofhours) << endl;
}
