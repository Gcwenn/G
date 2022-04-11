/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>

using namespace std;
double Min1(double a,double b,double c);
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    cout<<Min1(a,b,c)<<endl;
    return 0;
}
double Min1(double a,double b,double c)
{
    if(a>=b)
        a=b;
    if(a>=c)
        a=c;
    return a;
}
