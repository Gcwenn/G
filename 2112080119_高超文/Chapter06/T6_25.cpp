/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>

using namespace std;
int second(int a,int b,int c);
int main()
{
    int a,b,c,d,e,f,s;
    cin>>a>>b>>c>>d>>e>>f;
    s=second(a,b,c)-second(d,e,f);
    if(s<0)
        s=s*(-1);
    cout << s<< endl;
    return 0;
}
int second(int a,int b,int c)
{
    return a*3600+b*60+c;
}
