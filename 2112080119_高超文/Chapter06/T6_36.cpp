/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>
#include <iomanip>

using namespace std;

int power(int base, int exponent)
{
    int temp;
    temp=base;
    for(int i=1; i<exponent; i++)
    {
        temp=temp*base;
    }
    return temp;
}

int main()
{
    int base,exponent;
    cin >> base >> exponent;
    int power(int base, int exponent);
    cout << power(base, exponent) << endl;

    return 0;
}
