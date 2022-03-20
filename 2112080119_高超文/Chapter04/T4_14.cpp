/*
FileName: T4_14.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Mar 19, 2022
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c,d,e,f;
    cout<<"Enter account number (or -1 to quit): " ;
    cin>>a;
    while(a!=-1)
    {
        cout<<"Enter beginning balance: ";
        cin>>b;
        cout<<"Enter total charges: ";
        cin>>c;
        cout<<"Enter total credits: ";
        cin>>d;
        cout<<"Enter credit limit: ";
        cin>>e;
        f=b+c-d;
        cout<<"New balance is "<<fixed <<setprecision(2)<<f<<endl;
        if(f>e)
        {
            cout<<"Account:\t"<<fixed<<setprecision(0)<<a<<endl;
            cout<<"Credit limit:\t"<<fixed<<setprecision(2)<<e<<endl;
            cout<<"Balance:\t"<<fixed<<setprecision(2)<<f<<endl;
            cout<<"Credit Limit Exceeded."<<endl;
        }
        cout<<endl;
        cout<<"Enter Account number (or -1 to quit): " ;
        cin>>a;
    }
    return 0;
}
