#include <iostream>
#include <string>
using namespace std;
string ReadPinCode() {
    string PinCode;
    cout << "please enter PIN code \n";
    cin >> PinCode;
    return PinCode;
}
bool login() {
    string PinCode;
    int counter = 3;
    do
    {
        counter--;
        PinCode = ReadPinCode();
        if (PinCode == "1234")
        {

            return 1;
        }
        else
        {
            cout << "\nWrong PIN\n";
            system("color 4F");
        }
    } while (PinCode != "1234" && counter >= 1);
    return 0;
}
int main()
{
    if (login())
    {
        system("color 2F");
        cout << "\n your account balance is " << 7500 << "\n";

    }
    else
    {
        cout << "\n your card blocked call the bank for help \n";
    }
    return 0;
}
