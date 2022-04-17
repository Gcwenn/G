/*
FileName: T5_28.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/

#include <iostream>
#include <string>
using namespace std;

string getDay(int);
void printVerse(int);

int main(int argc, const char *argv[]) {
    for (int i = 1; i <= 12; i++) {
        cout << "\nOn the " << getDay(i)
                  << " day of Christmas my true love sent to me\n";
        printVerse(i);
    }
    return 0;
}
string getDay(int day) {
    switch (day) {
        case 1:
            return "First";
        case 5:
            return "Fifth";
        case 6:
            return "Sixth";
        case 7:
            return "Seventh";
        case 8:
            return "Eighth";
        case 9:
            return "Nineth";
        case 10:
            return "Tenth";
        case 11:
            return "Eleventh";
        case 12:
            return "Twelveth";
        default:
            return "";
    }
}
void printVerse(int day) {
    switch (day) {
        case 12:
            cout << "Twelve Drummers Drumming" << endl;
        case 11:
            cout << "Eleven Pipers Piping" << endl;
        case 10:
            cout << "Ten Lords a-Leaping" << endl;
        case 9:
            cout << "Nine Ladies Dancing" << endl;
        case 8:
            cout << "Eight Maids a-Milking" << endl;
        case 7:
            cout << "Seven Swans a-Swimming" << endl;
        case 6:
            cout << "Six Geese a-Laying" << endl;
        case 5:
            cout << "Five Gold Rings" << endl;
        case 4:
            cout << "Four Calling Birds" << endl;
        case 3:
            cout << "Three French Hens" << endl;
        case 2:
            cout << "Two Turtle Doves" << endl;
        case 1:
            printf("%s Partridge in a Pear Tree\n", (day > 1) ? "and a" : "a");
        default:
            break;
    }
}
