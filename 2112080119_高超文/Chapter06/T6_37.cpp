/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>

using namespace std;

int main()
{

    int n;
    while (cin >> n)
    {
        int s1 = 1;
        int    s2 = 1 ;
        int sn = 0;

        if (n == 1 || n == 2)
        {
            cout << "第"<<n<<"位的斐波那契数为："<<s1 << endl;
        }
        else
        {
            for (int i = 3; i <= n; i++)
            {
                sn = s1 + s2;
                s1 = s2;
                s2 = sn;
            }
            cout << "第" << n << "位的斐波那契数为："<< sn << endl;
        }
    }

    return 0;
}
