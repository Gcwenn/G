/*
FileName: T5_10.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    int a=1,b,s;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            a*=j;
        }
        cout<<i<<"\t"<<a<<endl;
        a=1;
    }
    return 0;
}
