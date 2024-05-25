#include <iostream>
using namespace std;

class Calculator{
    private:
        float number1;
        float number2;

    public:
        Calculator(float num1, float num2){
            number1 = num1;
            number2 = num2;
        }
        Calculator(Calculator & number){
            number1 = number.number1;
            number2 = number.number2;
        }
        float calculateResult() {
            return number1 + number2;
        }

};
int main(){
    Calculator calculator1(5.5, 8.5);

    Calculator calculator2 = calculator1;

    cout <<"The Result is: " << calculator1.calculateResult() << endl;

return 0;
}