#include <iostream>
#include <conio.h>
using namespace std;

void instructions(){
        int choice;
        system("cls");
        cout << "=========================================" << endl;
        cout << "|               Quiz Game               |" << endl;
        cout << "=========================================" << endl;
        cout << "Instructions:" << endl;
        cout << "No instructions, goodluck!" << endl;
        cout << "Press any key to continue....." << endl;
        getch();

    int ans;
    int answer;
    int lives = 5;
    system("cls");
    cout << "=========================================" << endl;
    cout << "|               Quiz Game               |" << endl;
    cout << "=========================================" << endl;
    cout << "Select category:" << endl;
    cout << "[1] English" << endl;
    cout << "[2] Science" << endl;
    cout << "[3] Math" << endl;
    cout << "[4] Exit" << endl;
    cout << "=========================================" << endl;
    cout << "Enter the number of your choice: " << endl;
    cin >> ans;
        if (ans == 1) {
            system("cls");
            cout << "=========================================" << endl;
            cout << "|      Welcome to English Category!     |"<< endl;
            cout << "=========================================" << endl;
            cout << "Question #1" << endl;
            cout << "Creating a program and ____ an existing program are fairly similar." << endl;
            cout << "[1] Modifying" << endl;
            cout << "[2] Planning" << endl;
            cout << "[3] Disarranging" << endl;
            cout << "[4] Closing" << endl;
            cout << "[5] Integrating" << endl;
            cout << "Enter your answer: " << endl;
            cin >> answer;
                if (answer == 1){
                    cout <<"Correct!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                    lives --;
                    cout << "Life: " << lives << endl;
                }
            system("cls");
            cout << "Question #2" << endl;
            cout << "It is very important ___ here on time for the meeting tomorrow." << endl;
            cout << "[1] Will be" << endl;
            cout << "[2] Are" << endl;
            cout << "[3] Be" << endl;
            cout << "[4] To be" << endl;
            cout << "Enter your answer: " << endl;
            cin >> answer;
                if (answer == 4){
                    cout <<"Correct!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                    lives --;
                    cout << "Life: " << lives << endl;
                }
            system("cls");
            cout << "Question #3" << endl;
            cout << "Traveling to a foreign country has ______ its positive and negative points." << endl;
            cout << "[1] Neither" << endl;
            cout << "[2] Also" << endl;
            cout << "[3] Both" << endl;
            cout << "[4] Either" << endl;
            cout << "Enter your answer: " << endl;
            cin >> answer;
                if (answer == 3){
                    cout <<"Correct!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                    lives --;
                    cout << "Life: " << lives << endl;
                }
            system("cls");
            cout << "Question #4" << endl;
            cout << "Last week, we _____ to the new Thai restaurant." << endl;
            cout << "[1] Have gone" << endl;
            cout << "[2] Had gone" << endl;
            cout << "[3] Went" << endl;
            cout << "[4] Were going" << endl;
            cout << "Enter your answer: " << endl;
            cin >> answer;
                if (answer == 3){
                    cout <<"Correct!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                    lives --;
                    cout << "Life: " << lives << endl;
                }
            system("cls");
            cout << "Question #5" << endl;
            cout << "If everyone did their part, the Earth ____ a cleaner place" << endl;
            cout << "[1] Was" << endl;
            cout << "[2] Would be" << endl;
            cout << "[3] Must be" << endl;
            cout << "[4] Will be" << endl;
            cout << "Enter your answer: " << endl;
            cin >> answer;
                if (answer == 2){
                    cout <<"Correct!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                    lives --;
                    cout << "Life: " << lives << endl;
                }
            system("cls");
            cout << "Current Lives: " << lives << endl;
            if(lives <= 2){
                cout << "You lose!" << endl;
            } else if (lives >= 3){
                cout << "Good Job!" << endl;
            }
        } else if (ans == 2){
        system("cls");
            cout << "=========================================" << endl;
            cout << "|      Welcome to Science Category!     |"<< endl;
            cout << "=========================================" << endl;
            cout << "Question #1" << endl;
            cout << "What is the chemical symbol for table salt?" << endl;
            cout << "[1] S" << endl;
            cout << "[2] NH4F" << endl;
            cout << "[3] CH4" << endl;
            cout << "[4] NaCl" << endl;
            cout << "Enter your answer: " << endl;
            cin >> answer;
                if (answer == 4){
                    cout <<"Correct!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                    lives --;
                    cout << "Life: " << lives << endl;
                }
            system("cls");
            cout << "Question #2" << endl;
            cout << "According to newton's second law of motion, change in momentum per unit time is equal to ________." << endl;
            cout << "[1] Force" << endl;
            cout << "[2] Energy" << endl;
            cout << "[3] Acceleration" << endl;
            cout << "[4] Work" << endl;
            cout << "Enter your answer: " << endl;
            cin >> answer;
                if (answer == 1){
                    cout <<"Correct!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                    lives --;
                    cout << "Life: " << lives << endl;
                }
            system("cls");
            cout << "Question #3" << endl;
            cout << "Name the part of the eye on which image is formed?" << endl;
            cout << "[1] Optical nerves" << endl;
            cout << "[2] Lens" << endl;
            cout << "[3] Cornea" << endl;
            cout << "[4] Brain" << endl;
            cout << "Enter your answer: " << endl;
            cin >> answer;
                if (answer == 3){
                    cout <<"Correct!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                    lives --;
                    cout << "Life: " << lives << endl;
                }
            system("cls");
            cout << "Question #4" << endl;
            cout << "Name the process by which the human breathes?" << endl;
            cout << "[1] Respiration" << endl;
            cout << "[2] Photosynthesis" << endl;
            cout << "[3] Excretion" << endl;
            cout << "[4] Digestion" << endl;
            cout << "Enter your answer: " << endl;
            cin >> answer;
                if (answer == 1){
                    cout <<"Correct!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                    lives --;
                    cout << "Life: " << lives << endl;
                }
            system("cls");
            cout << "Question #5" << endl;
            cout << "What is inertia?" << endl;
            cout << "[1] How fast an object is going divided by the distance" << endl;
            cout << "[2] The tendency of an object to resist change in motion" << endl;
            cout << "[3] A type of gas for which the inert gases were named" << endl;
            cout << "[4] Mass of an object divided by its volume" << endl;
            cout << "Enter your answer: " << endl;
            cin >> answer;
                if (answer == 2){
                    cout <<"Correct!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                    lives --;
                    cout << "Life: " << lives << endl;
                }
            system("cls");
            cout << "Current Lives: " << lives << endl;
            if(lives <= 2){
                cout << "You lose!" << endl;
            } else if (lives >= 3){
                cout << "Good Job!" << endl;
            }
        } else if (ans == 3) {
        system("cls");
            cout << "=========================================" << endl;
            cout << "|        Welcome to Math Category!      |"<< endl;
            cout << "=========================================" << endl;
            cout << "Question #1" << endl;
            cout << "What is -45 + 55?" << endl;
            cout << "[1] -10" << endl;
            cout << "[2] 10" << endl;
            cout << "[3] 20" << endl;
            cout << "[4] 100" << endl;
            cout << "Enter your answer: " << endl;
            cin >> answer;
                if (answer == 2){
                    cout <<"Correct!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                    lives --;
                    cout << "Life: " << lives << endl;
                }
            system("cls");
            cout << "Question #2" << endl;
            cout << "What is 76 x 6 - 24?" << endl;
            cout << "[1] 432" << endl;
            cout << "[2] 463" << endl;
            cout << "[3] 460" << endl;
            cout << "[4] 468" << endl;
            cout << "Enter your answer: " << endl;
            cin >> answer;
                if (answer == 1){
                    cout <<"Correct!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                    lives --;
                    cout << "Life: " << lives << endl;
                }
            system("cls");
            cout << "Question #3" << endl;
            cout << "What is 253 x 34?" << endl;
            cout << "[1] 8,742" << endl;
            cout << "[2] 5,437" << endl;
            cout << "[3] 3,902" << endl;
            cout << "[4] 8,602" << endl;
            cout << "Enter your answer: " << endl;
            cin >> answer;
                if (answer == 4){
                    cout <<"Correct!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                    lives --;
                    cout << "Life: " << lives << endl;
                }
            system("cls");
            cout << "Question #4" << endl;
            cout << "What is 6% Equals to" << endl;
            cout << "[1] 0.0006" << endl;
            cout << "[2] 0.6" << endl;
            cout << "[3] 0.06" << endl;
            cout << "[4] 0.006" << endl;
            cout << "Enter your answer: " << endl;
            cin >> answer;
                if (answer == 3){
                    cout <<"Correct!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                    lives --;
                    cout << "Life: " << lives << endl;
                }
            system("cls");
            cout << "Question #5" << endl;
            cout << "How Many Months Make a Century?" << endl;
            cout << "[1] 12" << endl;
            cout << "[2] 1,200" << endl;
            cout << "[3] 12,000" << endl;
            cout << "[4] 120" << endl;
            cout << "Enter your answer: " << endl;
            cin >> answer;
                if (answer == 2){
                    cout <<"Correct!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                    lives --;
                    cout << "Life: " << lives << endl;
                }
            system("cls");
            cout << "Current Lives: " << lives << endl;
            if(lives <= 2){
                cout << "You lose!" << endl;
            } else if (lives >= 3){
                cout << "Good Job!" << endl;
            } while (choice !=4);
}
}
int main(){
    int choice;
    do{
        system("cls");
        cout << "=========================================" << endl;
        cout << "|               Quiz Game               |" << endl;
        cout << "=========================================" << endl;
        cout << "[1] Start" << endl;
        cout << "[2] About" << endl;
        cout << "[3] Exit" << endl;
        cout << "=========================================" << endl;
        cout << "Enter the number of your choice: " << endl;
        cin >> choice;
            if (choice == 2) {
                cout << "=============================================== Quiz Game ========================================================" << endl;
                cout << "| This game is for fun and it is made by Runyann to try his skills in coding. Thank you for playing this game ^^ |" << endl;
                cout << "==================================================================================================================" << endl;
            }
        switch(choice){
            case 1:
            instructions();
            break;
            case 3:
            default:
            system("cls");
            cout << "Thank you!" << endl;
            cout << "Please press any key to continue....." << endl;
            getch();
        }
    } while (choice !=3);
return 0;
}