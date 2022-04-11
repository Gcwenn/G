/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>

using namespace std;
int iseven(int a);
int main()
{
    int a,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(iseven(a)==1)
            cout<<"true"<<endl;
        else
            cout<<"false"<<endl;
    }
    return 0;
}
int iseven(int a)
{
    if(a%2==0)
        return true;
    else
        return false;
}
