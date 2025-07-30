#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "please choose a fruit from the following" << endl;
    cout << "option 1. Mango" << endl;
    cout << "option 2. Orange" << endl;
    cout << "option 3. Passion" << endl;
    cout << "option 4. Avocado" << endl;
    cout << "enter an option" << endl;

    cin >> num;
    switch (num)
    {
    case 1:
        cout << "You have chosen a Mango" << endl;
        break;
    case 2:
        cout << "You have chosen a Orange" << endl;
        break;
    case 3:
        cout << "You have chosen a Passion" << endl;
        break;
    case 4:
        cout << "You have chosen a Avocado" << endl;
        break;
    default:
        cout << "Choose between 1 to 4" << endl;
    }
    return 0;
}