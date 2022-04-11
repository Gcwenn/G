/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/

#include <iostream>
#include <iomanip>

using namespace std;

int getGCD(int a,int b);

int main()
{
    int a,b;
    cout << "Please input two intengers: ";
    cin >> a >> b;
    int getGCD(int a,int b);
    cout << getGCD(a,b) << endl;

    return 0;
}

int getGCD(int a,int b)
{
    int i;
    for(i=1; ; i++)
    {
        if(0==i%a && 0==i%b)
            break;
    }
    return i;
}
