/*
FileName: T5_16.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    double amount;
    double principal=1000.0;
    double rate =0.05;
    cout<<"Year"<<setw(21)<<"Amount on deposit"<<endl;
    cout<<fixed<<setprecision(2);
    for (unsigned int year=1;year<=10;++year)
    {
        amount = principal *pow(1.0+rate,year );
        cout<<setw(4)<<year<<setw(21)<<amount<<endl;
    }
    int amount1;
    int principal1=100000;
    int rate1 =5;
    cout<<"Year"<<setw(21)<<"Amount on deposit"<<endl;
    cout<<fixed<<setprecision(2);
    for (unsigned int year1=1;year1<=10;++year1)
    {
        amount1 = principal1 *pow(100+rate1,year1 )/pow(100,year1);
        cout<<setw(4)<<year1<<setw(21)<<amount1/100<<"."<<amount1%100<<endl;
    }

    return 0;
}
