#include <iostream>
using namespace std;
int ReadNum() {
    int n;
    cout << "enter n : " << endl;
    cin >> n;
    return n;
}
void PrintRangeFrom1toN_UsingWhile(int n)
{
    int counter = n+1;
    cout << "range printed by using while loop \n";
    while (counter > 1)
    {
        counter--;
        cout << counter << endl;
        
    }
}
void PrintRangeFrom1toN_UsingDoWhile(int n) {
    int counter = n+1;
    cout << "range printed by using do while loop\n";
    do
    {
        counter--;
        cout << counter << endl;
        
    } while (counter > 1);
}
void PrintRangeFrom1toN_UsingFor(int n)
{
    cout << "range printed by using for loop\n";
    for (int i = n; i >= 1; i--)
    {
        
        cout << i << endl;
        
    }
}

int main()
{
    int n = ReadNum();
    PrintRangeFrom1toN_UsingWhile(n);
    PrintRangeFrom1toN_UsingDoWhile(n);
    PrintRangeFrom1toN_UsingFor(n);

}
