#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1)
        // base case
        return 1;
    else
        // inductive case
        return n * fact(n - 1);
}

int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 1)
    {
        cout << "Please enter a number greater than 0." << endl;
    }
    else
    {
        cout << "Factorial of " << num << " is " << fact(num) << endl;
    }

    return 0;
}
