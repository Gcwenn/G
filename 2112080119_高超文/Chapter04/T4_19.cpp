/*
FileName: T4_19.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Mar 19, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    int counter=1,number,largest1=0,largest2=0,a;

    while(counter<11)
    {
        a=largest1;
        cin>>number;
        if(number>largest2)
            largest2=number;
        if(largest2>largest1)
        {
            largest1=largest2;
            largest2=a;
        }
            counter++;
    }
    cout << "largest1= " <<largest1<< endl;
    cout << "largest2= " <<largest2<< endl;
    return 0;
}
