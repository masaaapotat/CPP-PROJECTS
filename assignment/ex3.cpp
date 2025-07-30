#include <iostream>
using namespace std;
int main()
{
    int grade;
    cout << "please enter a grade between 0 to 100" << endl;
    cin >> grade;
    if (grade < 0 || grade > 100)
    {
        cout << "Invalid grade, please enter a grade between 0-100" << endl;
    }
    else if (grade >= 70)
    {
        cout << "Grade:A" << endl;
    }
    else if (grade >= 60)
    {
        cout << "Grade:B" << endl;
    }
    else if (grade >= 50)
    {
        cout << "Grade:C" << endl;
    }
    else if (grade >= 40)
    {
        cout << "Grade:D" << endl;
    }
    else

    {
        cout << "Grade:E" << endl;
    }

    return 0;
}