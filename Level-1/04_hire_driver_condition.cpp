#include <iostream>
#include <string>

using namespace std;
struct stinfo {
    int age;
    bool hasdriverlisence;
};
stinfo Readinfo() {
    stinfo info;

    cout << "\n enter your age :\n " << endl;
    cin >> info.age;
    cout << "\n are you has a driver lisence :\n " << endl;
    cin >> info.hasdriverlisence;
    return info;
}

bool isaccepted(stinfo info) {

    return (info.age > 18 && info.hasdriverlisence == 1);

}
void printresault(stinfo info) {
    if (isaccepted(info)) {
        cout << "\n hired \n";
    }
    else {
        cout << "\n rejected \n";
    }
}

int main()

{


    printresault(Readinfo());

    return 0;
}
