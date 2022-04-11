/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>

using namespace std;

double roundToInteger(double number);
double roundToTenths(double number);
double roundToHundredths(double number);
double roundToThousandths(double number);
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        double number;
    cin>>number;

    cout << number<<"\t"<<roundToInteger(number)<<"\t"<<roundToTenths(number) <<"\t"<<roundToHundredths(number)<<"\t"<< roundToThousandths(number)<<endl;
    }

    return 0;
}

double roundToInteger(double number)
{
    double a,c;
    a=number+0.5;
    int b;
    b=a;
    c=double(b);
    return c;
}
double roundToTenths(double number)
{
    double a,c;
    a=number*10+0.5;
    int b=a;
//    cout<<"b="<<b<<endl;
    c=double(b)/10;
//    cout<<"c="<<c<<endl;
    return c;
}
double roundToHundredths(double number)
{
    double a,c;
    a=number*100+0.5;
    int b;
    b=a;
    c=double(b)/100;
    return c;
}
double roundToThousandths(double number)
{
    double a,c;
    a=number*1000+0.5;
    int b;
    b=a;
    c=double(b)/1000;
    return c;
}
