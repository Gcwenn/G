/*
FileName: T5_30.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int select,sum;
    cout << "Please answer the following questions\n" << endl;
    cout << "What are the causes of global warming?" << endl;
    cout << "1.People are over-burning fossil fuels like oil, coal etc" << endl;
    cout << "2.Cut down and burn forests" << endl;
    cout << "3.Massive car exhaust emissions" << endl;
    cout << "4.Too much solar radiation" << endl;
    cin >> select;
    if(4==select)
        ;
    else
        sum+=1;

    cout << "What are the hazards of global warming?" << endl;
    cout << "1.Melting glaciers and rising sea levels" << endl;
    cout << "2.Extinction of many plants and animals" << endl;
    cout << "3.drastic changes in global climate" << endl;
    cout << "4.cause the destruction of the earth" << endl;
    cin >> select;
    if(4==select)
        ;
    else
        sum+=1;

    cout << "How can we stop global warming?" << endl;
    cout << "1.Drive less private car" << endl;
    cout << "2.Do not throw garbage" << endl;
    cout << "3.Develop a low-carbon and environmentally friendly lifestyle" << endl;
    cout << "4.Increase the use of coal" << endl;
    cin >> select;
    if(4==select)
        ;
    else
        sum+=1;

    cout << "Please answer the following questions\n" << endl;
    cout << "What are the causes of global warming?" << endl;
    cout << "1.People are over-burning fossil fuels like oil, coal etc" << endl;
    cout << "2.Cut down and burn forests" << endl;
    cout << "3.Massive car exhaust emissions" << endl;
    cout << "4.Too much solar radiation" << endl;
    cin >> select;
    if(4==select)
        ;
    else
        sum+=1;

    cout << "Please answer the following questions\n" << endl;
    cout << "What are the causes of global warming?" << endl;
    cout << "1.People are over-burning fossil fuels like oil, coal etc" << endl;
    cout << "2.Cut down and burn forests" << endl;
    cout << "3.Massive car exhaust emissions" << endl;
    cout << "4.Too much solar radiation" << endl;
    cin >> select;
    if(4==select)
        ;
    else
        sum+=1;
        if(5==sum)
            cout << "Excellent" << endl;
        if(4==sum)
            cout << "Very good" << endl;
        if(sum<=3)
            cout << "Time to brush up on your knowledge of global warming" << endl;
    return 0;
}
