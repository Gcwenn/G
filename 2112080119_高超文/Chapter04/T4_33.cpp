/*
FileName: T4_33.cpp
Author: �߳���Gcwen
E-mail:1007356843@qq.com
Time: Mar 19, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    while(a<=0||b<=0||c<=0)
    {
        cin>>a>>b>>c;
    }
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
            cout<<"����Ϊֱ�������ε�������"<<endl;
        else
    cout << "������Ϊֱ�������ε�������" << endl;
    return 0;
}
