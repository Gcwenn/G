/*
FileName: T5_12.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int a=1;a<=10;a++)
    {
        for(int b=1;b<=11-a;b++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int c=1;c<=10;c++)
    {
        for(int d=1;d<=c-1;d++)
        {
            cout<<" ";
        }
        for(int e=1;e<=11-c;e++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int f=1;f<=10;f++)
    {
        for(int g=1;g<=10-f;g++)
        {
            cout<<" ";
        }
        for(int h=1;h<=f;h++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int l=1;l<=10;l++)
    {
        for(int m=1;m<=l;m++)
        {
            cout<<"*";
        }
        for(int n=1;n<=16-l;n++)
            {
                cout<<" ";
            }
        for(int o=1;o<=11-l;o++)
        {
            cout<<"*";
        }
        for(int p=1;p<=5+l;p++)
            {
                cout<<" ";
            }
        for(int q=1;q<=l-1;q++)
        {
            cout<<" ";
        }
        for(int r=1;r<=11-l;r++)
        {
            cout<<"*";
        }
        for(int s=1;s<=6;s++)
        {
            cout<<" ";
        }
        for(int t=1;t<=10-l;t++)
        {
            cout<<" ";
        }
        for(int u=1;u<=l;u++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
