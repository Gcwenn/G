/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;
double hypotenuse(double a,double b);
int main()
{
    double a,b;

    for(int i=1;i<=3;i++)
    {
        cin>>a>>b;
        cout<<i<<fixed<<setprecision(1)<<"\t"<<a<<"\t"<<b<<"\t"<<hypotenuse(a,b)<<endl;
    }

    return 0;
}
double hypotenuse(double a,double b)
{
    double c;
    c=a*a+b*b;
    return sqrt(c);
}
