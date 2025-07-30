#include <iostream>
using namespace std;
int main()
{
    int x;
    switch (x)
    {
    case 1:
    
        cout << x + 2 << endl;
        break;
    case 2:
        cout << "You have chosen  Orange." << endl;
        break;
    case 3:
        cout << "YYou have chosen  Passion." << endl;
        break;
    case 4:
        cout << "You have chosen  Avocado." << endl;
        break;
    default:
        cout << " Please choose a number between 1 and 4." << endl;
    }

    return 0;
}
