#include <iostream>
using namespace std;
struct stinfo
{
    string first_name;
    string last_name;
};
stinfo readinfo() {
    stinfo info;
    cout << "enter your first name : \n";
    cin >> info.first_name;
    cout << "enter your last name : \n";
    cin >> info.last_name;
    return info;
}
string getfullname(stinfo info) {
    string fullname;
    fullname = info.first_name + " " + info.last_name;
    return fullname;
}
void printfullname(string fullname)
{
    cout << "your fullname is : " << fullname;
}
int main()
{
    printfullname(getfullname(readinfo()));
}
