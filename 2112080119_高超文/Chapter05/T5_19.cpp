/*
FileName: T5_19.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    long double pi=0;
    long double a=-1;
    for(long double i=1;i<=1000;i++)
    {
         a=a*(-1);
        pi=pi+a*4/(2*i-1);
        cout<<"pi="<<pi<<endl;
    }
    return 0;
}
