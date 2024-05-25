#include <iostream>
using namespace std;

int main () {

    int lives = 5;
    string answer;

    while (lives !=0) {
        cout <<"Guess the Word: ALTL" << endl;
        cout << "Answer: ";
        cin >> answer;

        if(answer == "TALL") {
            cout << "Correct!" << endl;
            break;
        } else {
            lives--;
        }
        if (lives == 0) {
            cout <<"You Lost!" << endl;
        }
    }
    return 0;
}