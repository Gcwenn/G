/*
FileName: T5_11.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double amount;
    double principal = 1000.0;
    double rate=0.05;
    for(int i=1;i<=6;i++)
    {
        cout<<"rate: "<<rate<<endl;
    cout << "Year" << setw(21) <<"Amount on deposit"<<endl;
    cout<<fixed<<setprecision(2);
    for(unsigned int year = 1;year <= 10;++year)
    {
        amount = principal*pow( 1.0 + rate,year);
        cout<<setw(4)<<year<<setw(21)<<amount<<endl;
    }
    rate=rate+0.01;
    cout<<endl<<endl;
    }
    return 0;
}
