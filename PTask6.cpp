#include <iostream>

using namespace std;

int main() {

string item;
double numOfItem;
double price;
float total;
float money;
float percent = 0.06;
float vat;
float totalCost;
float amountChange;
const int retake = 3;

for (int i = 0; i <= retake; ++i) {

cout << "Enter your Item: " << endl;
cin >> item;
cout << "Enter the number of item: " << endl;
cin >> numOfItem;
cout << "Enter the Item Price: " << endl;
cin >> price;
cout << "Amount you pay: " << endl;
cin >> money;
cout << "Item Code  " << "No. of Item  " << "Item Price  " << "Total" << endl;
total = numOfItem * price;
cout << "" << item << "      " << numOfItem << "            " << price << "        " << total << endl;
cout << "-------------------------------------" << endl;

total = numOfItem * price;
vat = total * percent;
totalCost = total + vat;
amountChange = money - totalCost;

cout << "VAT 6% : " << vat << endl;
cout << "Total Cost: " << totalCost << endl;
cout << "Amount Tendered: " << money << endl;
cout << "Amount Change: " << amountChange << endl;

}

return 0;
}