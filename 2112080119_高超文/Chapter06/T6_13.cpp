/*
FileName: T6_13.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>

using namespace std;

double floor(double a);
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        double a;
    cin>>a;

    cout << a<<"\t"<<floor(a+0.5) << endl;
    }

    return 0;
}
double floor(double a)
{
    return int(a);
}
