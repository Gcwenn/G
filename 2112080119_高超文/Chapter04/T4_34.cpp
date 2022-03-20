/*
FileName: T4_34.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Mar 19, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b=1;
    cin>>a;
    while(a<0)
    {
        cin>>a;
    }
    if(a==0||a==1)
    {
        cout<<"n!=1"<<endl;
    }
    else
    {
        int i=1;
    while(i<=a)
    {
        b=b*i;
        i++;
    }
    cout<<"n!="<<b<<endl;

    }

    double c=1,d=1;
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"e=1"<<endl;
    }
    int j=1;
    while(j<=n-1)
    {
        c=c*j;
        d=d+1/c;
        j++;
    }
    cout<<"e="<<d<<endl;


    double e=1,f=1,g=1;
    int x;
    cin>>x;
    if(x==1)
    {
        cout<<"e^x=1"<<endl;
    }
    int k=1;
    while(k<=x-1)
    {
        e=e*k;
        g=g*x;
        f=f+g/e;
        k++;
    }
    cout<<"e^x="<<f<<endl;

    return 0;
}
