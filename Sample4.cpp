#include <iostream>
using namespace std;

    int main() {

        string item;
        int choice, noOfItem, money, total;
        int itemPrice;

            cout << "Fruit Shop" << endl;
            cout << "1. Order" << endl;
            cout << "2. List of Item" << endl;
            cout << "3. Exit" << endl;
            cout <<"\n\n";
            cout << "Enter the number of your choice: " << endl;
            cin >> choice;

                if (choice == 1) {
                cout << "Order" << endl;
                cout << "Your order: " << endl;
                cin >> item;
                cout << "Item Price: " << endl;
                cin >> itemPrice;
                cout << "Number of Item: " << endl;
                cin >> noOfItem;
                cout <<"Amount Tendered: " << endl;
                cin >> money;
                cout <<"Total:" << itemPrice * noOfItem << endl;
            }
                else if (choice == 2) {
                cout << "List of Item:" << endl;
                cout << "1. Apple" << endl;
                cout << "2. Grapes" << endl;
                cout << "3. Mango" << endl;
            }
                else if (choice == 3) {
                cout <<"Thank you for visiting our shop!";
            }
                return 0;
}