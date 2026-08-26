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
    return (number >=  from && number <=  to);
}
void PrintResault(int age)
{
    if (ValidateNumberInRange(age, 18, 45))
        cout << age << " is a valid age \n";
    else 
        cout << age << " is a invalid age \n";
}

int main()
{
   
    PrintResault(ReadNum());
}
