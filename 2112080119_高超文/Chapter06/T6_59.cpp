/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include<iostream>
using namespace std;
int main()
{

    int a,b,d,i;
   float q, p,o=0;
    a=rand()%10+1;
    b=rand()%10+1;
    int c=a*b;
    cout<<"How much"<<a<<"times"<<b<<endl;
    cin>>d;





    while(q<9)


    {while(d!=c)
        {o++;
        q++;
            i=rand()%4;

           switch (i)
           {
           case 0:
            cout<<"No please try again";break;
           case 1:
            cout<<"Wrong.Try once more.";break;
           case 2:
            cout<<"dont`give up";break;
           case 3:
            cout<<"No keep trying.";break;
           }

if(q>=10)
    break;
        cin>>d;

        }
if(d=c)
       {

       i=rand()%4;
           switch(i)
           {
           case 0:
            cout<<"very good";break;
           case 1:
            cout<<"Excellent.";break;
           case 2:
            cout<<"nice work";break;
           case 3:
            cout<<"keep up the good work";break;

           }

           p++;
           q++;
            a=rand()%10+1;
    b=rand()%10+1;

    cout<<"How much"<<a<<"times"<<b<<endl;
    c=a*b;
    cin>>d;


       }

    }
    if(p/(p+o)*100 <75)cout<<"please ask your teacher for extra help";
    else
        cout<<"congratulations,you are really to go to the next level";
}

