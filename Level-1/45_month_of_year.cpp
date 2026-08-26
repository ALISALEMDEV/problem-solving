#include <iostream>
#include <string>
using namespace std;
enum enMonthOfYears { jan = 1, feb = 2, mar = 3, apr = 4, may = 5, jun = 6, jul = 7, aug = 8,sep = 9, oct = 10, nov = 11, dec = 12 };
int ReadNum(string message, int From, int To) {
    int num = 0;
    do {
        cout << message << endl;
        cin >> num;
    } while (num < From || num > To);
    return num;
}
enMonthOfYears readmonthofYears() {

    return (enMonthOfYears)ReadNum("please enter day number betwen 1 and 12 : ", 1, 12);
}
string getdayofYears(enMonthOfYears Day) {
    switch (Day)
    {
    case enMonthOfYears::jan:
        return "january";
    case enMonthOfYears::feb:
        return "februray";
    case enMonthOfYears::mar:
        return "march";
    case enMonthOfYears::apr:
        return "april";
    case enMonthOfYears::may:
        return "may";
    case enMonthOfYears::jun:
        return "jun";
    case enMonthOfYears::jul:
        return "july";
    case enMonthOfYears::aug:
        return "august";
    case enMonthOfYears::sep:
        return "september";
    case enMonthOfYears::oct:
        return "october";
    case enMonthOfYears::nov:
        return "november";
    case enMonthOfYears::dec:
        return "december";
    default:
        return "invalid number";
    }
}
int main()
{
    cout << getdayofYears(readmonthofYears());
}
