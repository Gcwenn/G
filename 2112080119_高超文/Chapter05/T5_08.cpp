/*
FileName: T5_8.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    int n,a,b;cin>>n>>a;
    b=a;
    for(int i=2;i<=n;i++)
    {
        cin>>a;
        if(b>a)
            b=a;
    }

    cout << b << endl;
    return 0;
}
