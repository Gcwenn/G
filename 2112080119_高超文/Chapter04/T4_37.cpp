/*
FileName: T4_37.cpp
Author: �߳���Gcwen
E-mail:1007356843@qq.com
Time: Mar 19, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    int a,c=1,e;
    double b;
    cin>>a>>b;
    e=a;
    while(c<=75)
    {
        cout<<"��"<<c<<"��\t\t"<<int(a+a*b)<<"\t\t"<<int(a*b)<<endl;
        a=a+a*b;
        c++;
//        int d=a;
//        if(a>=2*e)
//        {
//            cout<<"��"<<c<<"��"<<endl;
//            break;
//        }
    }
    return 0;
}
