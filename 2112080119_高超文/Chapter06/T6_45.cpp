/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>

using namespace std;

int mystery(int ,int );
int main()
{
    int x=0;
    int y=0;
    cout<<"Enter two integers: ";
    cin>>x>>y;
    cout<<"The result is "<<mystery(x,y)<<endl;
}
int mystery(int a,int b)
{
    if(b>0)
    {
    if(1==b)
        return a;
    else
        return a+mystery(a,b-1);
    }
    else
    {
        if(-1==b)
        return -1*a;
        else
        return -1*a+mystery(a,b+1);
    }

}
