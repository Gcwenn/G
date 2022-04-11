/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include<iostream>
#include<time.h>
using namespace std;
int main()
{

    int a,b,c,d,e,h,j;
    cin>>c;
    if(c==1)
  { srand((unsigned int)(time(NULL)));



      a=rand()%10;
      b=rand()%10;
      d=a*b;
      cout<<"How much"<<a<<"times"<<b;

      cin>>e;
      if(d==e)
      cout<<"YES";
      else

        cout<<"no";


  }

    else
    { srand((unsigned int)(time(NULL)));
        h=rand()%90+10;
      j=rand()%90+10;
      d=j*h;
      cout<<"How much"<<h<<"times"<<j;

      cin>>e;
      if(d==e)
      cout<<"YES";
      else

        cout<<"no";
        ;
    }

}

