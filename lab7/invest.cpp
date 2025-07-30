#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float principal, rate;
    int years;
    float interest;

    cout << "Please enter the principal amount: ";
    cin >> principal;

    cout << "Please enter the interest rate (e.g. 5 for 5%): ";
    cin >> rate;

    cout << "Please enter the number of years: ";
    cin >> years;

    // calculate compound interest annually
    for (int i = 0; i < years; i++)
    {
        interest = principal * (rate / 100); // calculate interest for the year
        principal += interest;              
    }

    // Format output to show 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Your final investment value is: $" << principal << endl;

    return 0;
}
