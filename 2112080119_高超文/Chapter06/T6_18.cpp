/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>

using namespace std;

int integerPower(int a,int b);
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<integerPower(a,b)<<endl;
    return 0;
}
int integerPower(int a,int b)
{
    int s=1;
    for(int i=1;i<=b;i++)
    {
        s=s*a;
    }
    return s;
}
