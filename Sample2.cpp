#include <iostream>
using namespace std;

int main() {

float num1, num2;
char op;

cout << "Enter a number: ";
cin >> num1;
cout << "Enter a number: ";
cin >> num2;
cout << "Enter an operator (+, -, *, /): ";
cin >> op;

switch (op) {
    case '+':
    cout << num1 << " + " << num2 << " = " << num1+num2;
    break;
    case '-':
    cout << num1 << " - " << num2 << " = " << num1-num2;
    break;
    case '*':
    cout << num1 << " * " << num2 << " = " << num1*num2;
    break;
    case '/':
    cout << num1 << " / " << num2 << " = " << num1/num2;
    break;
    default:
    cout << "Invalid";
    break;
}


return 0;
}

