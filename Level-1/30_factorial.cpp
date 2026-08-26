#include <iostream>
using namespace std;
int ReadPositiveNumber(string message) {
    int n;
    do
    {
        cout << message << endl;
        cin >> n;
    } while (n < 0);
    return n;
}

int factorial(int n) {
    int f = 1;
    for (int i = n; i >= 1; i--) {
        f = f * i;
    }
    return f;
}

int main()
{
    cout << factorial(ReadPositiveNumber("enter a positive number"));
}
