#include <iostream>
using namespace std;
enum enpassfail {pass = 1, fail = 2};
void readmark(int& mark1, int& mark2, int& mark3) {
    cout << "enter the first number : " << endl;
    cin >> mark1;
    cout << "enter the second number : " << endl;
    cin >> mark2;
    cout << "enter the third number : " << endl;
    cin >> mark3;

}
int sumof3mark(int mark1, int mark2, int mark3) {
    return mark1 + mark2 + mark3;
}
float calculateavrg(int mark1, int mark2, int mark3)
{
    return (float)sumof3mark(mark1, mark2, mark3) / 3;
}
enpassfail cheakavrg(float avrg) {
    if (avrg >= 50)
        return enpassfail::pass;
    else
        return enpassfail::fail;
}
void printresault(int avrg)
{
    if (cheakavrg(avrg) == enpassfail::pass)
        cout << "you pass";
    else
        cout << "you fail";
}

int main()
{
    int mark1, mark2, mark3;
    readmark(mark1, mark2, mark3);
    printresault(calculateavrg(mark1, mark2, mark3));
}
