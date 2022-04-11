/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/#include <iostream>
#include <math.h>
using namespace std;
double distance(double a,double b,double c,double d);
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<distance(a,b,c,d)<<endl;
    return 0;
}
double distance(double a,double b,double c,double d)
{
    return sqrt((a-c)*(a-c)+(b-d)*(b-d));
}
