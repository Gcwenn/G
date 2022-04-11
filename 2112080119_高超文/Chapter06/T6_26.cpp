/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>

using namespace std;
double celsius(double a);
double fahrenheit(double a);
int main()
{
    for(double i=1;i<=100;i++)
    {
        cout<<i<<"\t"<<fahrenheit(i)<<endl;
    }
    for(double j=32;j<=212;j++)
    {
        cout<<j<<"\t"<<celsius(j)<<endl;
    }

    return 0;
}
double celsius(double a)
{
    return (a-32)/1.8;
}
double fahrenheit(double a)
{
    return a*1.8+32;
}
