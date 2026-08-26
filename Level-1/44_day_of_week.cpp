#include <iostream>
#include <string>
using namespace std;
enum enDayOfWeek { sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7};
int ReadNum(string message, int From, int To) {
    int num = 0;
    do {
        cout << message << endl;
        cin >> num;
    } while (num < From || num > To);
    return num;
}
enDayOfWeek readdayofweek() {
   
    return (enDayOfWeek)ReadNum("please enter day number betwen 1 and 7 : ",1,7);
}
string getdayofweek(enDayOfWeek Day) {
    switch (Day)
    {
    case enDayOfWeek::sat:
        return "saturday";
    case enDayOfWeek::Sun:
        return "sunday";
    case enDayOfWeek::Mon:
        return "monday";
    case enDayOfWeek::Tue:
        return "tuesday";
    case enDayOfWeek::Wed:
        return "wednesday";
    case enDayOfWeek::Thu:
        return "thursday";
    default:
        return "friday";
    }
}
int main()
{
   cout << getdayofweek(readdayofweek());
}
