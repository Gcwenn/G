/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand((unsigned)time(0));
    int n;
    n=rand()%2+1;
    cout << n << endl;
    n=rand()%100+1;
    cout<<n<<endl;
    n=rand()%10;
    cout<<n<<endl;
    n=rand()%113+1000;
    cout<<n<<endl;
    n=rand()%3-1;
    cout<<n<<endl;
    n=rand()%15-3;
    cout<<n<<endl;
    return 0;
}
