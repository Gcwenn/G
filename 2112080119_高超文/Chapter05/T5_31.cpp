/*
FileName:T5_31.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double cost,tax;
    cout << "Please input the cost of your expences: ";
    cin >> cost;
    tax=cost*0.23;
    cout << fixed << setprecision(3) << "the tax you pay is: " << tax << endl;

    return 0;
}
