#include <iostream>
#include <string>
using namespace std;
int readnum() {
    int num;
    cout << "enter your number : " << endl;
    cin >> num;
    return num;
}
float calhalf(int num) {
    
    return (float)num /2;
}
void printhalf(int num)
{
    string resault = "the half of : " + to_string(num) + " is " + to_string(calhalf(num));
    cout << endl<< resault;
}
int main()
{
    printhalf(readnum());
}
