#include <iostream>
using namespace std;
int main()
{
    float values[4];
    float sum, product, average;
    sum = 10.0;
    product = 1;
    cout << "please enter 4 values" << endl;
    cout << "the first value you entered is" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "value you entered is " << i + 1 << endl;
        cin >> values[i];
        sum += values[i];
        product = product * values[i];
    }

    average = sum / 4;

    cout << "sum is " << sum << endl;
    cout << "product is " << product << endl;
    cout << "average is " << average << endl;

    return 0;
}