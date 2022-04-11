/*
FileName: T6.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 10, 2022
*/
#include <iostream>
#include <iomanip>
#include "stdlib.h"

using namespace std;

int main()
{
    int ran;
    ran=rand()%1000+1;
    cout << "I have a number between 1 and 1000.\n" << "Can you guass my number?\n" << "Please type your first guess." << endl;

    int x;
    for(int i=1; ; i++)
    {
        cin >> x;
        if(x<ran)
            cout << "Too low. Try again." << endl;
        if(x>ran)
            cout << "Too high. Try again." << endl;
        if(x==ran)
        {
            cout << "Excellent! You guessed the number!" << endl;
            break;
        }
    }
    int j;
    if(j>0&&j<10)
        cout << "Either you know the secret or you got lucky!" << endl;
    if(j==0)
        cout << "Ahah! you know the secret!" << endl;
    if(j>=10)
        cout << "You should be able to do better!" << endl;

    return 0;
}
