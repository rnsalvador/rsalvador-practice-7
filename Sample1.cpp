#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    
    string fullname;
    double age;
    string year;
    string course;
    char section;
    string address;
    
    cout <<"Student Form"<< endl;
    cout <<"Enter your FullName: " << endl;
    getline(cin, fullname);
    cout <<"Enter your Age: " << endl;
    cin >> age;
    cout << "Enter your Year: " << endl;
    cin.ignore(); getline(cin,year);
    cout <<"Enter your Course: " << endl;
    cin >> course;
    cout <<"Enter your Section: " << endl;
    cin >> section;
    cout <<"Enter your Address: " << endl;
    cin.ignore(); getline(cin, address);


    cout <<"\n------------\n";
    cout <<"Student Information" << endl;
    cout <<"Student Name: " << fullname << endl;
    cout <<"Age: " << age << endl;
    cout <<"Year: " << year << endl;
    cout <<"Course: " << course << endl;
    cout <<"Section: " << section << endl;
    cout <<"Address: " << address << endl;

//Sample Project 1

    return 0;
}