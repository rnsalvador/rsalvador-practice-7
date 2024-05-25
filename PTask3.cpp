#include <iostream>
using namespace std;

    int main() {

        float firstFloatNumber = 8.50;
        float secondFloatNumber = 4.95;
        float sum;
        float difference;
        float product;
        float quotient;

        sum = firstFloatNumber + secondFloatNumber;
        difference = firstFloatNumber - secondFloatNumber;
        product = firstFloatNumber * secondFloatNumber;
        quotient = firstFloatNumber / secondFloatNumber;

        cout << "First Number: " << firstFloatNumber << endl;
        cout << "Second Number: " << secondFloatNumber << endl;
        cout << "Sum: " << sum << endl;
        cout << "Difference: " << difference << endl;
        cout << "Product: " << product << endl;
        cout << "Quotient: " << quotient << endl;

        return 0;
}