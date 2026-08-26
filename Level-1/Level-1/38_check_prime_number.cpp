#include <iostream>
#include <string>
using namespace std;
enum enPrimeNotPrime { Prime = 1, NotPrime = 2};
float ReadNum(string message) {
    float num = 0;
    do {
        cout << message << endl;
        cin >> num;
    } while (num <= 0);
    return num;
}
enPrimeNotPrime checkPrime(int num) {
    int M = round(num / 2);
    for (int Counter = 2; Counter <= M; Counter++) {
        if (num % Counter == 0)
            return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::Prime;
}

void PrintNumberType(int num) {
    switch (checkPrime(num))
    {
    case enPrimeNotPrime::Prime:
        cout << "the number is prime\n";
        break;
    case enPrimeNotPrime::NotPrime:
        cout << "the number is not prime\n";
        break;
    }
}
int main()
{
    PrintNumberType(ReadNum("enter a positive number"));
}
