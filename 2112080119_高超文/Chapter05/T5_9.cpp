/*
FileName: T5_9.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    int s=1;
    for(int i=1;i<=15;i++)
    {
        if(i%2==1)
        s*=i;
    }
    cout << s << endl;
    return 0;
}
