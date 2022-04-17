/*
FileName: T2_19.cpp
Author: 高超文Gcwen
E-mail:1007356843@qq.com
Time: Mar 12, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    cout << "Input three different integers:";
    int a,b,c,d;
    cin >> a >> b >> c ;
    cout<<"Sum is "<<a+b+c<<endl;
    cout<<"Average is "<<(a+b+c)/3<<endl;
    cout<<"Product is "<<a*b*c<<endl;

    d=a;
    if(d<b)
        d=b;
        if(d<c)
            d=c;
    if(a>b)
        a=b;
    if(a>c)
        a=c;
    cout<<"Smallest is "<<a<<endl;
    cout<<"Largest is "<<d<<endl;

    return 0;
}
