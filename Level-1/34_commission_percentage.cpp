#include <iostream>
using namespace std;
int ReadTotalSales() {
    int totalsales;
    cout << "enter total sales" << endl;
    cin >> totalsales;
    return totalsales;
}
float GetComissionPercentage(float totalsales) {
    if (totalsales >= 1000000)
        return 0.01;
    else if (totalsales >= 500000)
        return 0.02;
    else if (totalsales >= 100000)
        return 0.03;
    else if (totalsales >= 50000)
        return 0.05;
    else
        return 0;

}
float CalculateTotalComission(float totalsales){
    return GetComissionPercentage(totalsales) * totalsales;
}
int main()
{
    float totalsales = ReadTotalSales();
    cout << "the comission percentage is : " << GetComissionPercentage(totalsales);
    cout << "the total comission is : " << CalculateTotalComission(totalsales);
}
