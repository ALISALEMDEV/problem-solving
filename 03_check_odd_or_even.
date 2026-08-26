#include <iostream>
#include <string>

using namespace std;
enum ennumbertype { odd = 1, even = 2};
int Readnumber() {
    int number;

    cout << "\n enter your number :\n " << endl;
    cin >> number;
    return number;
}

ennumbertype checknumbertype(int number) {

    int resault = number % 2;
    if (resault == 0) {
        return ennumbertype::even;
    }
    else {
        return ennumbertype::odd;
    }
}
void printnumbertype(ennumbertype numbertype) {
    if (numbertype == ennumbertype::even) {
        cout << "\n the number is even";
    }
    else {
        cout << "\n the number is odd";
    }
}

int main()

{


    printnumbertype(checknumbertype(Readnumber()));

    return 0;
}
