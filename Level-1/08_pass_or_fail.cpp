#include <iostream>
#include <string>
using namespace std;
enum enpassfail{ pass = 1, fail = 2};
int readmark() {
    int mark;
    cout << "enter your mark : " << endl;
    cin >> mark;
    return mark;
}
enpassfail cheakmark(int mark) {

    if (mark >= 50)
        return enpassfail::pass;
    else
        return enpassfail::fail;
}
void printresault(int mark)
{
    if (cheakmark(mark) == enpassfail::pass)
        cout << "you pass";
    else
        cout << "you fail";
}
int main()
{
    printresault(readmark());
}
