/*
FileName: T4_25.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Mar 19, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cout<<"*";
    }
    cout<<"\n";
    for(int k=1;k<=a-2;k++)
    {
    for(int j=1;j<=a;j++)
    {
        if(j==1||j==a)
            cout<<"*";
        else
            cout<<" ";
    }
    cout<<"\n";
    }
    for(int i=1;i<=a;i++)
    {
        cout<<"*";
    }
    return 0;
}
