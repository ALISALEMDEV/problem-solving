#include <iostream>
using namespace std;
int ReadNumber() {
    int n;
    cout << "enter a number" << endl;
    cin >> n; 
    return n;
}
void PowerOf2_3_4(int n) {
    int a, b, c;
    a = n * n ;
    b = n * n * n ;
    c = n * n * n * n ;
    cout << a << " " << b << " " << c;
}

int main()
{
     PowerOf2_3_4(ReadNumber());
}
