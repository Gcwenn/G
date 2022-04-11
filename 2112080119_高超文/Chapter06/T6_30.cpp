/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>

using namespace std;
int reverse1(int a);
int main()
{
    int a;
    cin>>a;

    cout << reverse1(a) << endl;
    return 0;
}
int reverse1(int a)
{
    int s=0;
    while(a!=0)
    {
        s=s*10+a%10;
        a/=10;
    }
    return s;
}
