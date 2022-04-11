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
    int n;
    srand((unsigned)time(0));
    n=(rand()%5+1)*2;
    cout << n<< endl;
    n=(rand()%5+1)*2+1;
    cout << n<< endl;
    n=(rand()%5+1)*4+2;
    cout << n<< endl;
    return 0;
}
