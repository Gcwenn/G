/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include<iostream>

using namespace std;

void move(int n,char x,char y,char z)//n个圆盘从x通过y移动到z
{
	if(n==1)
	{
		cout<<x<<"->"<<z<<endl;
	}
	else
	{
		move(n-1,x,z,y);//n-1个圆盘先从x移动到y
		cout<<x<<"->"<<z<<endl;
		move(n-1,y,x,z);//n-1个圆盘再从y移动到z
	}
}
int main()
{
	int n;
	cout<<"please input the number of bows: "<<endl;
	cin>>n;
	move(n,'A','B','C');

	return 0;
}
