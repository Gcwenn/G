/*
FileName: T5_25.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    unsigned int count,a=1;
    for(count=1;count<=10&&a==1;++count)
    {
        if(count==4)
           a=2;
        cout<<count<<" ";
    }
    cout<<"\nBroke out of loop at count="<<count<<endl;
    return 0;
}
