/*
FileName: T4_13.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Mar 19, 2022
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c=0,d=0;

    cout<<"Enter miles driven (-1 to quit):";
    cin>>a;

    while(a!=-1)
    {
        cout<<"Enter gallons used: " ;
        cin>>b;
        c=c+a;
        d=d+b;
        cout<<"MPG this trip: "<<fixed <<setprecision(6)<<a/b<<endl;
        cout<<"Total MPG: "<<fixed <<setprecision(6)<<c/d<<endl<<endl;
        cout<<"Enter miles driven (-1 to quit): " ;
        cin>>a;


    }

    return 0;
}
