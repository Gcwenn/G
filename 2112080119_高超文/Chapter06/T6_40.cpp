/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int primeNum(int num)
{
    int flag;
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
        else
            flag=1;
    }
        return flag;
}

int main()
{
    for(int i=2;i<=10000;i++)
    {
        int primeNum(int num);
        if(primeNum(i)==1)
            cout << i << "\t";
            else
                ;
    }

    return 0;
}
