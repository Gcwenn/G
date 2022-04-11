/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
//内联函数，圆面积
#include <iostream>
using namespace std;

inline double CircleArea(double radius)
{
	return 3.14159*radius*radius;
}
int main()
{
	double r, area;

	cin >> r;
	area = CircleArea(r);
	cout <<  area << endl;
	getchar();
	getchar();
	return 0;
}
