#include <iostream>
#include <string>

using namespace std;
int main ()
{
    string FirstName;
    string LastName;
    int age;
    double weight;
    cout << "Enter First Name, Last Name, "
        << "and weight, please seperate by spaces"
        << endl;
    cin >> FirstName >> LastName;
    cin >> age >> weight;
    cout << "Name: " << FirstName << ""
        << LastName << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;
    return 0;
}