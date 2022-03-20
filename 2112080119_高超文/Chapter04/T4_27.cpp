/*
FileName: T4_27.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Mar 19, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b=0,c=1;
    cin>>a;
    while(a!=0)
    {
        b=b+a%10*c;
        a=a/10;
        c=c*2;
    }
    cout <<b<< endl;
    return 0;
}
