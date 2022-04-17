/*
FileName: T5_6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    int a=0,s,i=-1                                                                                                                                                                                                                                                                                                                                                                      ;
    for(;a!=9999;i++)
    {
        s+=a;
        cin>>a;
    }
    s=s/i;
    cout << s << endl;
    return 0;
}
