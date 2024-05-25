#include <iostream>
using namespace std;

int main() {

int area, perimeter, length, width;
float cm, areain, areaft, aream;
float perimeterin, perimeterft, perimeterm;
float inch = 2.54;
float feet = 12;
float meter = 3.28;

cout << "Input length of a square in centimeter: " << endl;
cin >> length;
cout << "Input width of a square in centimeter: " << endl;
cin >> width;

area = length* width;
perimeter = 2*length + 2*width;

areain = area / inch;
areaft = areain / feet;
aream = areaft / meter;

perimeterin = area / inch;
perimeterft = perimeterin / feet;
perimeterm = perimeterft / meter;

//inch = 2.54 cm;
//feet = 12 inches;
//meter = 3.28 ft;
cout << "Area of a square: " << area << " sq. cm." << endl;
cout << "                  " << areain << " sq. in." << endl;
cout << "                  " << areaft << " sq. ft." << endl;
cout << "                  " << aream << " sq. m." << endl;

cout << "Area of a perimeter: " << area << " cm." << endl;
cout << "                  " << perimeterin << " in." << endl;
cout << "                  " << perimeterft << " ft." << endl;
cout << "                  " << perimeterm << " m." << endl;


return 0;
}