/*
FileName: T2_23.cpp
Author: 高超文Gcwen
E-mail:1007356843@qq.com
Time: Mar 12, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,a0;
    cin>>a>>b>>c>>d>>e;
    a0=a;
    if(a<b)
        a=b;
    if(a<c)
        a=c;
    if(a<d)
        a=d;
    if(a<e)
        a=e;
    if(e>d)
        e=d;
    if(e>c)
        e=c;
    if(e>b)
        e=b;
    if(e>a0)
        e=a0;
    cout <<"max= " <<a<<endl;
    cout <<"min= " <<e<<endl;
    return 0;
}
