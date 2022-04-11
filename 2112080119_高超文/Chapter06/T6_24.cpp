/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
int Integer(int a,int b);
int Remainder(int a,int b);
int Resolution(int a);
int main()
{
    srand((unsigned)time(0));

    int a,b;
//    cin>>a;
//    Resolution(a);
    Resolution(rand()%32767+1);
    return 0;
}
int Integer(int a,int b)
{
    return a/b;
}
int Remainder(int a,int b)
{
    return a%b;
}
int Resolution(int a)
{
    int n=0;
    while(a!=0)
    {
        n=n*10+a%10;
        a/=10;
    }
    while(n!=0)
    {
        cout<<n%10<<"\t";
        n/=10;
    }
}
