/*
FileName: T4_15.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Mar 19, 2022
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a,b;
    cout<<"Enter sales in dollars (-1 to end): ";
    cin>>a;
    while(a!=-1)
    {
        b=200+a*0.09;
        cout<<"Salary is: $"<<fixed <<setprecision(2)<<b<<endl<<endl;
        cout<<"Enter sales in dollars (-1 to end): ";

      cin>>a;
    }

    return 0;
}
