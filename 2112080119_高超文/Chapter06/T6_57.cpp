/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include<iostream>
using namespace std;
int main()
{

    int a,b,d;
    a=rand()%10+1;
    b=rand()%10+1;
    int c=a*b;
    cout<<"How much"<<a<<"times"<<b;
    cin>>d;
    while(d!=c)
        {cout<<"No,Please try again";
        cin>>c;

        }

    cout<<"Very good!";




}
