#include <iostream>
#include <string>
using namespace std;
int main()
{
    int yearOfBirth;
    int currentYear = 2017;

    // int year_of_birth = stoi (yearOfBirth);

    // question 2
    cout << " enter your the year of birth: " << endl;
    cin >> yearOfBirth;
    int age = currentYear - yearOfBirth;
    // cout << " your current age is: " << age <<endl;
    if (age >= 18)
    {
        cout << "your are a senior" << endl;
    }
    else
    {
        cout << "your are a minor and your age is " << age << endl;
    }

    return 0;
}