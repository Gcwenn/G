/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>
#include <iomanip>
#include "stdlib.h"

using namespace std;

int main()
{
    int zm=0,fm=0;
    int a;
    for(int i=1; i<=100; i++)
    {
        a=rand()%2;
        if(a==0)
            zm+=1;
        if(a==1)
            fm+=1;
    }
    cout<<"正面的次数为："<<zm<<"次"<<endl;
    cout<<"反面的次数为："<<fm<<"次"<<endl;
    return 0;
}
