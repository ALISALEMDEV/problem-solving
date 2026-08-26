#include <iostream>
using namespace std;
int ReadNumber() {
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    return n;
}
int ReadPower() {
    int m;
    cout << "enter m" << endl;
    cin >> m;
    return m;
}
int PowerOfn(int n, int m) {
    if (m == 0)
        return 1;
    int p = 1;
    for (int i = 1; i <= m; i++)
    {
        p = p * n;
    }
    return p;
}

int main()
{
    cout << PowerOfn(ReadNumber(),ReadPower());
}
