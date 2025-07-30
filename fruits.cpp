#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Select a fruit: 1. Mango 2. Orange 3. Banana 4. Passion" << endl;
    cout <<  "Enter your choice (1-4):  " << endl;
    cin >> choice;

    if (choice == 1)
        cout << "You selected Mango" << endl;
    else if (choice == 2)
        cout << "You selected Orange" << endl;
    else if (choice == 3)
        cout << "You selected Banana" << endl;
    else if (choice == 4)
        cout << "You selected Passion" << endl;
    else
        cout << "Invalid selection." << endl;

    return 0;
}
