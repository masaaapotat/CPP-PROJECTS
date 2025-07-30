#include <iostream>
using namespace std;
int main()
{
    int grade;
    cout << "enter the grade between 0-100" << endl;
    cin >> grade;
    if (grade < 0 || grade > 100)
    {
        cout << "please enter a valid grade between 0-100" << endl;
    }
    else if (grade >= 70)
    {
        cout << "A" << endl;
    }
    else if (grade >= 60)
    {
        cout << "B" << endl;
    }
    else if (grade >= 50)
    {
        cout << "C" << endl;
    }
    else if (grade >= 40)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "E" << endl;
    }
    return 0;
}