/*
FileName: T4_17.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Mar 19, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    int counter=1,number,largest=0;

    while(counter<11)
    {
        cin>>number;
        if(number>largest)
            largest=number;
            counter++;
    }
    cout << "largest= " <<largest<< endl;
    return 0;
}
