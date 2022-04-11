/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>

using namespace std;
int tripleByValue(int a);
void tripleByReference(int &ra);
int main()
{
    int a;
    cin>>a;
    cout<<tripleByValue(a)<<endl;
    tripleByReference(a);
    cout<<a<<endl;
    return 0;
}
int tripleByValue(int a)
{
    return a*3;
}
void tripleByReference(int & ra)
{
    ra=ra*3;
}
