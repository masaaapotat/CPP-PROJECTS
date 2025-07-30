#include <iostream>
#include <string>
using namespace std;
int main()
{
    string firstName, lastName, favouriteCity;
    // enter the first name
    cout << "please enter your first name" << endl;
    // cin >> firstName;
    getline(cin, firstName);
    // last name
    cout << "enter your last name" << endl;
    // cin >> lastName;
    getline(cin, lastName);
    // favorite city
    cout << "enter your favorite city" << endl;
    // cin >> favouriteCity;
    getline(cin, favouriteCity);

    // concatinate all the profile details
    cout << "Profile for " << firstName << " " << lastName << ": " << "Favorite city " << favouriteCity << "." << endl;
    return 0;
}