/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>
#include<iomanip>
using namespace std;

double salculateCharges(double a);
int main()
{
    double s1=0,s2=0;
    double a;

    for(int i=1;i<=3;i++)
    {
        cin>>a;
        if(i==1)
        cout << "Car\tHours\tCharge"  << endl;
        cout<<i<<"\t"<<a<<fixed<<setprecision(2)<<"\t"<<salculateCharges(a)<<endl;
        s1=s1+a;
        s2=s2+salculateCharges(a);
    }
    cout<<"TOTAL\t"<<s1<<"\t"<<s2<<endl;
    return 0;
}
double salculateCharges(double a)
{
    if(a<=3)
        return 2.00;
    else if(a<=19)
            return 2+0.5*(a-3);
    else
            return 10;

}
