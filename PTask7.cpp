#include <iostream>
using namespace std;

int main () {
    
int time, cTime;
int seconds = 60;
int minutes = 60;
int modulus;

cout << "This program converts minute(s) into second(s)." << endl;

cout << "Input time in seconds : " << endl;
cin >> time;

minutes = time / seconds;
cTime = time % minutes;
cout << "The time in minute(s) is: " << minutes << endl;
cout << "The time in second(s) is: " << ctime << endl;
return 0;
}