/*
FileName: T5_32.cpp
Author: �߳���Gcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a=0;
    double p=10;
    double r1=0.02,r2=0.03,r3=0.04,r4=0.05;
    unsigned int m;
    for(m=1; m<=1000; m++)
    {
        if(a<25)
            a=p*pow(1.00+r1, m);
        else
            break;
    }
    cout << fixed << setprecision(2) << "�����������Ϊ2%����ô���� " << m << " �����û������ܴﵽ25��" << endl;
    cout << fixed << setprecision(2) << "��ʱ�û���Ϊ " << a << " ��" << endl;
    a=0;
    for(m=1; m<=1000; m++)
    {
        if(a<25)
            a=p*pow(1.00+r2, m);
        else
            break;
    }
    cout << fixed << setprecision(2) << "�����������Ϊ3%����ô���� " << m << " �����û������ܴﵽ25��" << endl;
    cout << fixed << setprecision(2) << "��ʱ�û���Ϊ " << a << " ��" << endl;
    a=0;
    for(m=1; m<=1000; m++)
    {
        if(a<25)
            a=p*pow(1.00+r3, m);
        else
            break;
    }
    cout << fixed << setprecision(2) << "�����������Ϊ4%����ô���� " << m << " �����û������ܴﵽ25��" << endl;
    cout << fixed << setprecision(2) << "��ʱ�û���Ϊ " << a << " ��" << endl;
    a=0;
    for(m=1; m<=1000; m++)
    {
        if(a<25)
            a=p*pow(1.00+r4, m);
        else
            break;
    }
    cout << fixed << setprecision(2) << "�����������Ϊ5%����ô���� " << m << " �����û������ܴﵽ25��" << endl;
    cout << fixed << setprecision(2) << "��ʱ�û���Ϊ " << a << " ��" << endl;
    a=0;

    return 0;
}

