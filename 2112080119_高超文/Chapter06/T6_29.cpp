/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>
#include <math.h>
using namespace std;
int prime1(int a);
int prime2(int a);
int main()
{
    int a,b;
    cin>>a;
    b=prime1(a);
    if(b==1)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    for(int i=2;i<=10000;i++)
    {
        int flag1;
        flag1=prime1(i);
        if(flag1==1)
            cout<<i<<endl;
    }
    for(int j=2;j<=10000;j++)
    {
        int flag2;
        flag2=prime2(j);
        if(flag2==1)
            cout<<j<<endl;
    }
    return 0;
}
int prime1(int a)
{
    int s=1;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
           s=0;
    }
    return s;
}
int prime2(int a)
{
    int s=1;
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
           s=0;
    }
    return s;
}
