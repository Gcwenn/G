/*
FileName: T5_29.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a=0;
    double p=24;
    double r=0.05;
    for(unsigned int y=1; y<=396; y++)
        a=p*pow(1.00+r, y);
    cout << fixed << setprecision(2) << a << endl;

    return 0;
}
