#include <iostream>

using namespace std;

int main()
 {
    string name;
    string surname;
    double age;
    string course;
    string barangay;
    string town;
    string province;
    
    cout <<"Student Form"<< endl;
    cout <<"Enter your Name: " << endl;
    cin >> name;
    cout <<"Enter your Surname: " << endl;
    cin >> surname;
    cout <<"Enter your Age: " << endl;
    cin >> age;
    cout <<"Enter your Course: " << endl;
    cin >> course;
    cout <<"Enter your Barangay: " << endl;
    cin >> barangay;
    cout <<"Enter your Town: " << endl;
    cin >> town;
    cout <<"Enter your Province: " << endl;
    cin >> province;
    cout <<"\n------------\n";
    cout <<"Student Information" << endl;
    cout <<"My Full Name is: " << name << " " << surname << endl;
    cout <<"My Age is: " << age << endl;
    cout <<"My Course is: " << course << endl;
    cout <<"My Address is: " << barangay << " " << town << " " << province << endl;
    
    //Sample Project
    //Problem: 1 word only

    return 0;
}
