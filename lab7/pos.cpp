#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // variable to store total
    float total = 0.0;
    // item price
    float itemPrice;
    cout << "point of sale system" << endl;

    do
    {
        cout << "Enter  price (or 0 to finish): ";

        cin >> itemPrice;
        if (itemPrice != 0)
        {
            total += itemPrice;
        }
    } while (itemPrice != 0);
    // Set the output formatting to fixed-point notation with 2 decimal places
    cout << fixed << setprecision(2) << endl;
    cout << "the total is $" << total << endl;
    return 0;
}