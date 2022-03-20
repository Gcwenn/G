/*
FileName: T4_16.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Mar 19, 2022
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c;
    cout<<"Enter hours worked (-1 to end): ";
    cin>>a;
    while(a!=-1)
    {
        cout<<"Enter hourly rate of the employee ($00.00): ";
        cin>>b;
        if(a<=40)
        {
            c=a*b;
            cout<<"Salary is $"<<fixed<<setprecision(2)<<c<<endl<<endl;
        }
        else
        {
            c=40*b+(a-40)*1.5*b;
        cout<<"Salary is $"<<fixed<<setprecision(2)<<c<<endl<<endl;
        }
    cout<<"Enter hours worked (-1 to end): ";
    cin>>a;
    }
    return 0;
}
