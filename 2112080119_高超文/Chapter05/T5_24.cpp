/*
FileName: T5_24.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include<iostream>
using namespace std;
int main()
{
    int i,a=0,b=0,c,d=1,e=0,f,g;
    cin>>i;
    a=(i+1)/2;
    f=a;
    while(e<f)
   {



    for(b=0;b<a;b++)

    {
        cout<<" ";
    }

    for(c=0;c<d;c++)

    {
        cout<<"*";
    }

    a--;
    d+=2;
    e++;
    cout<<endl;}
     a=i-2;
    f=a;
    e=0;
    g=1;
    while(e<f)
   {



    for(b=0;b<=g;b++)

    {
        cout<<" ";
    }

     for(c=0;c<a;c++)

    {
        cout<<"*";
    }

    g++;
    a-=2;
    e++;
    cout<<endl;}




    return 0;
}






