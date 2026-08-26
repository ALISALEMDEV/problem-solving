#include <iostream>
using namespace std;
int ReadNum() {
    int age;
    cout << "enter age : " << endl;
    cin >> age;
    return age;
}
bool ValidateNumberInRange(int number, int from, int to)
{
    return (number >= from && number <= to);
}
int ReadUntilAgeBetween(int from, int to) {
    int age = 0;
    do 
    {
        age = ReadNum();
    } while (!ValidateNumberInRange(age, from, to));
    return age;
}
void PrintResault(int age)
{
        cout << age << " is a valid age \n";
}

int main()
{

    PrintResault(ReadUntilAgeBetween(15, 45));
}
