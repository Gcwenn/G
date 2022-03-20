/*
FileName: T4_28.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Mar 19, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=8;i++)
    {
        if(i%2==1)
        {
        for(int j=1;j<=8;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        }
        else
        {
            cout<<" ";
            for(int k=1;k<=8;k++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    return 0;
}
