#include <iostream>
#include <string>
using namespace std;
float ReadNum(string message) {
    float num = 0;
    cout << message << endl;
    cin >> num;
    return num;
}
float Calculate() {
    int sum = 0, num = 0, counter = 1;
    do {
        num = ReadNum("enter number " + to_string(counter));
        if (num == -99)
        {
            break;
        }
            sum += num;
            counter++ ;

    } while (num != -99);
    return sum;
}
int main()
{
    cout << "resault = " << Calculate() << endl;
}
