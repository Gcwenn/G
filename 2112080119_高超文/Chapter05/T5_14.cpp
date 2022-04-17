/*
FileName: T5_14.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    double s=0;
    for(int i=1;i<=5;i++)
    {
        int a;cin>>a;
        double b;
        switch(a)
        {
            case 1:b=2.98;break;
            case 2:b=4.50;break;
            case 3:b=9.98;break;
            case 4:b=4.49;break;
            case 5:b=6.87;break;
        }
        double c;cin>>c;
        s=s+b*c;
    }
    cout << s << endl;
    return 0;
}
