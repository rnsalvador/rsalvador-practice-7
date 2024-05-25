#include <iostream>
using namespace std;

int main () {

int Area;
int Perimeter;
int length;
int width;

cout << "Enter length: " << endl;
cin >> length;
cout << "Enter width: " << endl;
cin >> width;

Area = length * width;
Perimeter = 2 *(length + width);

cout << "Area: " << Area << endl;
cout << "Perimeter: " << Perimeter << endl;

return 0;
}