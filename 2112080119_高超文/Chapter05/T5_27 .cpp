/*
FileName: T5_27.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    for (int count = 1;  count <= 10; ++count) {
        if (count != 5) {
            cout << count << ' ';
        }
    }
    cout << "\nSkipped printing 5 without continue" << endl;

    return 0;
}
