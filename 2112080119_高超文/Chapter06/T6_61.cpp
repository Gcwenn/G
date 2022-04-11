/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include<iostream>
using namespace std;
int main(){
int a,b,c,d,e,f;
cin>>f;
if(f=5)f=rand()%4+1;
if(f==1)
{

      a=rand()%100;
      b=rand()%100;
      d=a+b;
      cout<<"How much"<<a<<"add"<<b;

      cin>>e;
      if(d==e)
      cout<<"YES";
      else

        cout<<"no";
}

if(f==2)
{

      a=rand()%100;
      b=rand()%100;
      d=a-b;
      cout<<"How much"<<a<<"-"<<b;

      cin>>e;
      if(d==e)
      cout<<"YES";
      else

        cout<<"no";
}



if(f==3)
{

      a=rand()%100;
      b=rand()%100;
      d=a+b;
      cout<<"How much"<<a<<"times"<<b;

      cin>>e;
      if(d==e)
      cout<<"YES";
      else

        cout<<"no";
}






}
