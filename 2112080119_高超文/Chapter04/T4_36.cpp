
/*
FileName: T4_36.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Mar 19, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,s;
    cin>>a;
    b=a%10;
    c=a/10%10;
    d=a/100%10;
    e=a/1000;
    s=e;
    e=c;
    c=s;
    s=b;
    b=d;
    d=s;
    b=(b+10-7)%10;
    c=(c+10-7)%10;
    d=(d+10-7)%10;
    e=(e+10-7)%10;
    cout << b+c*10+d*100+e*1000<< endl;
    return 0;
}
