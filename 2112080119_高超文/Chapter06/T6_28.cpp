/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>

using namespace std;
void isperfect(int a);
int main()
{

    for(int i=1;i<=1000;i++)
    {
       isperfect(i);
    }
    int n;
    cout<<"请输入大于1000的整数:";
    cin>>n;
    for(int j=1;j<=n;j++)
    {
          isperfect(j);
    }
     return 0;
}
void isperfect(int a)
{
    int s=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
            s=s+i;
    }
     if(s==a)
       cout<<s<<endl;
}
