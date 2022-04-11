/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>

using namespace std;

int n;
void ready()
{
    cout << "请输入汉诺塔高度:";
    cin >> n;
    cout << "默认从A移动到C" << endl;
}

void move_recursion(int n, char des, char now, char temp)
{
    if (n == 1)
    {
        cout << 1 << "->" << des << endl;
        return;
    }
    move_recursion(n - 1, temp, now, des);
    cout << n << "->" << des << endl;
    move_recursion(n - 1, des, temp, now);

}

void move_iterate(int n,char des, char now, char temp)
{
    char inorder[2][4]= {'0',temp,des,now,'0',des,now,temp};
    int i,j,k;
    char *np=new char[n+1];
    for(int i=0; i<n+1; i++)np[i]='A';

    for( i=1; i<(1<<n); i++)
    {
        for( j=i,k=1; j%2==0; k++,j/=2);
        cout<<k<<" "<<np[k]<<"->";
        np[k]=inorder[(1+n+k)%2][np[k]-'A'+1];
        cout<<np[k]<<endl;
    }
}
int main()
{
    while (1)
    {
        ready();
        move_iterate(n, 'C','A','B');
    }
}
