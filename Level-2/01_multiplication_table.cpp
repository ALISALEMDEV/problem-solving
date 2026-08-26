#include <iostream>
using namespace std;
void PrintHeaderTable()
{
cout << "               Multiplication Table From 1 to 10" <<endl <<endl;
for (int i = 1; i <= 10; i++) {
cout << i << "      ";
}
cout << endl;
cout << "----------------------------------------------------------------------------------------";
cout << endl;
}
void PrintMainTable()
{
for (int i = 1; i <= 10; i++) {
cout << i << "  |   ";
for (int j = 1; j <= 10; j++) {
cout <<  i * j << "         ";
}
cout << endl;
}
}

int main()
{
PrintHeaderTable();
PrintMainTable();
}

