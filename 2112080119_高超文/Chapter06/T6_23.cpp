/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>

using namespace std;
int square(int side);
int main()
{

    int side;
    cin>>side;
   square(side);
    return 0;
}
int square(int side)
{
    char ch;
    cin>>ch;
    for(int i=1;i<=side;i++)
    {
        for(int j=1;j<=side;j++)
        {
            cout<<ch;
        }
        cout<< endl;
    }
}
