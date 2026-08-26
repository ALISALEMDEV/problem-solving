#include <iostream>
using namespace std;
enum enOddOrEven{odd = 1, even = 2};
int ReadNum() {
    int n;
    cout << "enter n : " << endl;
    cin >> n;
    return n;
}
enOddOrEven CheakOddOrEven(int n) {
    if (n % 2 != 0)
        return enOddOrEven::odd;
    else
        return enOddOrEven::even;
}
int PrintRangeFrom1toN_UsingWhile(int n)
{
    int counter = 0;
    int sum = 0;
    cout << "sum odd numbers by using while loop \n";
    while (counter < n)
    {
        counter++;
        if (CheakOddOrEven(counter) == enOddOrEven::odd)
            sum += counter;
    }
    return sum;
}
int PrintRangeFrom1toN_UsingDoWhile(int n) {
    int counter = 0;
    int sum = 0;
    cout << "sum odd numbers by using do while loop \n";
    do 
    {
        counter++;
        if (CheakOddOrEven(counter) == enOddOrEven::odd)
            sum += counter;
    } while (counter < n);
    return sum;
}
int PrintRangeFrom1toN_UsingFor(int n)
{
    int sum = 0;
    cout << "sum odd numbers by using do while loop \n";
    for (int i = n; i >= 1; i--)
    {

        if (CheakOddOrEven(i) == enOddOrEven::odd)
            sum += i;

    }
    return sum;
}

int main()
{
    int n = ReadNum();
    cout << PrintRangeFrom1toN_UsingWhile(n)<<endl;
    cout << PrintRangeFrom1toN_UsingDoWhile(n)<<endl;
    cout << PrintRangeFrom1toN_UsingFor(n)<<endl;

}
