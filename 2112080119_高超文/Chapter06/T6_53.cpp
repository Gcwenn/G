/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>
using namespace std;

int maxmium(int a,int b)
{
    return a<b?a:b;
}
double maxmium(double a,double b)
{
    return a<b?a:b;
}
char maxmium(char a,char b)
{
    return a<b?a:b;
}
int main()
{char a,b;
cin>>a>>b;
cout<<maxmium(a,b);
}
