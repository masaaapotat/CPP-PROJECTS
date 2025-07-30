#include <iostream>
using namespace std;
#include <string>
int main()
{
    // string fName, lName;
    // cout << "please enter your first name" << endl;
    // cin >> fName;
    // cout << "please enter your last name" << endl;
    // cin >> lName;
    // cout << "Your name is " << fName<<" " << lName << endl;

    char name[30];
    string fName, lName;
    cout << "please enter your  name" << endl;
    cin >> name;
    cout << "please enter your first name" << endl;
    cin >> fName;
    cout << "please enter your last name" << endl;
    cin >> lName;
    cout << "Your name is " << fName << " " << lName << endl;

    return 0;
}