/*
FileName: T4_32.cpp
Author: �߳���Gcwen
E-mail:1007356843@qq.com
Time: Mar 19, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    while(a<=0||b<=0||c<=0)
    {
        cin>>a>>b>>c;
    }
        if(a+b>c&&a+c>b&&b+c>a)
            cout<<"���Ա�ʾһ�������ε�������"<<endl;
        else
    cout << "�����Ա�ʾһ�������ε�������" << endl;
    return 0;
}
