/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>
#include <iomanip>

using namespace std;

int qualityPoints(int a)
{
    int x;
    if(a<=100&&a>=90)
        x=4;
    if(a<90&&a>=80)
        x=3;
    if(a<80&&a>=70)
        x=2;
    if(a<70&&a>=60)
        x=1;
    if(a<60&&a>=0)
        x=0;
        return x;
}

int main()
{
    int a;
    cout << "Please input your points: ";
    cin >> a;
    int qualityPoints(int a);
    cout << qualityPoints(a) << endl;

    return 0;
}
