#include <iostream>
using namespace std;
int main()
{
    int option;

    // 1 Mango
    // – 2 Orange
    // – 3 Passion
    // – 4 Avocado
    // the user should enter a number between 1 and 4

    // enter a number between 1 and 4
    cout << "Enter a number between 1 and 4 to select a fruit:" << endl;
    cout << "1 Mango" << endl;
    cout << "2 Orange" << endl;
    cout << "3 Passion" << endl;
    cout << "4 Avocado" << endl;
    cout << "Your choice: ";
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "You have chosen  Mango." << endl;
        break;
    case 2:
        cout << "You have chosen  Orange." << endl;
        break;
    case 3:
        cout << "You have chosen  Passion." << endl;
        break;
    case 4:
        cout << "You have chosen  Avocado." << endl;
        break;
    default:
        cout << " Please choose a number between 1 and 4." << endl;
    }

    return 0;
}
