/*
FileName: T2_30.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Mar 12, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    double a,b;
    cin>>a>>b;
    cout << "BMI VALUES\t" <<(a)/(b*b)<< endl;
    cout << "Underweight:\tLess than 18.5" << endl;
    cout << "Normal:\t\tbetween 18.5 and 24.9" << endl;
    cout << "Overweight:\tbetween 25 and 29.9" << endl;
    cout << "Obese:\t\t30 or greater" << endl;
    return 0;
}
