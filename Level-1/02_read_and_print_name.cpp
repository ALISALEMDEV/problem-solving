#include <iostream>
#include <string>

using namespace std;

string ReadName() {
    string name;

    cout << "\n enter your name :\n " << endl;
    getline(cin, name);
    return name;
}

void PrintName(string Name) {

    cout << "\n your name is : " << Name << endl;

}

int main()

{


    PrintName(ReadName());

    return 0;
}
