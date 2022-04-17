/*
FileName: T5_21.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    int i;
    float a,b,c,d,e,f;
    cout<<"your salary code is:";
    cin>>i;
    switch(i)
    {
        case 1:
        cout<<"Enter the manager's fixed salary";
        cin>>a;
        cout<<"your salary is "<<a;

        case 2:
            cout<<"your working hours is:";
            cin>>c;
            cout<<"your hourly salary is;";
            cin>>d;
            if(c<=40)
                cout<<c*d;
            else
                cout<<"your salary is "<<40*d+(c-40)*1.5*d;

        case 3:
         cout<<"your sales profit is ";
         cin>>b;
         cout<<"your salary is "<<250+b*0.057;
        case 4:
            cout<<"the number of piece you have produced:";
            cin>>e;
            cout<<"amount of each product:";
            cin >>f;
            cout<<"your salary is "<<e*f;



    }
    return 0;
}
