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
    } while (num < 0);
    return num;
}
stTaskDuration ReadTaskDuration() {
    stTaskDuration TaskDuration;
    TaskDuration.NumberOfDays = ReadNum("please enter number of days : \n");
    TaskDuration.NumberOfHours = ReadNum("please enter number of hours : \n");
    TaskDuration.NumberOfMinutes = ReadNum("please enter number of minutes : \n");
    TaskDuration.NumberOfSeconds = ReadNum("please enter number of secondes : \n");
    return TaskDuration;
}
int TaskDurationInSeconds(stTaskDuration TaskDuration) {
    int DurationInSeconds = 0;
    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSeconds = TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds = TaskDuration.NumberOfMinutes * 60;
    DurationInSeconds = TaskDuration.NumberOfSeconds;
    return DurationInSeconds;
}
int main()
{
    cout << "\nTask Duration In Seconds : " << TaskDurationInSeconds(ReadTaskDuration());
}
