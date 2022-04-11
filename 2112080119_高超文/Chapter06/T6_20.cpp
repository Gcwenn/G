/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>

using namespace std;

int multiple(int a,int b);
int main()
{
    int a,b,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(multiple(a,b)==1)
        cout<<"ture"<<endl;
        else
            cout<<"false"<<endl;
    }
    return 0;
}
int multiple(int a,int b)
{
    if(b%a==0)
        return true;
    else
        return false;
}
