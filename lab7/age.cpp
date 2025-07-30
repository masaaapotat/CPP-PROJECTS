#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    while (age < 1 || age > 120)
    {
        cout << "Invalid age. Please enter an age between 1 and 120." << endl;
        cin >> age;
    }

    cout << "Age confirmed: " << age << endl;

    return 0;
}