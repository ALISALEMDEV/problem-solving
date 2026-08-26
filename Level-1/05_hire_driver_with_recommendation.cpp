#include <iostream>
#include <string>

using namespace std;
struct stinfo {
    int age;
    bool hasdriverlisence;
    bool hasrecomandation;
};
stinfo Readinfo() {
    stinfo info;

    cout << "\n enter your age :\n " << endl;
    cin >> info.age;
    cout << "\n are you have a driver lisence :\n " << endl;
    cin >> info.hasdriverlisence;
    cout << "\n are you have a recomandation :\n " << endl;
    cin >> info.hasrecomandation;
    return info;
}

bool isaccepted(stinfo info) {
    if (info.hasrecomandation == 1) {
        return true;
    }
    else {
        return (info.age > 21 && info.hasdriverlisence == 1 );
    }

    

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
