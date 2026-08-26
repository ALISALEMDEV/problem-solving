#include <iostream>
#include <string>
using namespace std;
struct stTaskDuration {
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
int ReadNum(string message) {
    float num = 0;
    do {
        cout << message << endl;
        cin >> num;
    } while (num <= 0);
    return num;
}
stTaskDuration SecondsToTaskDuration(int TotalSeconds) {
    stTaskDuration TaskDuration;
    const int SecondPerDay = 24 * 60 * 60;
    const int SecondPerHour = 60 * 60;
    const int SecondPerMinute = 60;
    int remainder = 0;
    TaskDuration.NumberOfDays = floor(TotalSeconds / SecondPerDay);
    remainder = TotalSeconds % SecondPerDay;
    TaskDuration.NumberOfHours = floor(remainder / SecondPerHour);
    remainder = remainder % SecondPerHour;
    TaskDuration.NumberOfMinutes = floor(remainder / SecondPerMinute);
    remainder = remainder % SecondPerMinute;
    TaskDuration.NumberOfSeconds = remainder;
    return TaskDuration;
}
void PrintTaskDurationInDetails(stTaskDuration TaskDuration) {
    cout << "\n";
    cout << TaskDuration.NumberOfDays << ":"
        << TaskDuration.NumberOfHours << ":"
        << TaskDuration.NumberOfMinutes << ":"
        << TaskDuration.NumberOfSeconds << endl;
}
int main()
{
    int TotalSeconds = ReadNum("please enter total seconds : ");
    PrintTaskDurationInDetails(SecondsToTaskDuration(TotalSeconds));
}
