#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int i = 0;

    while (i < 50)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }

    cout << "Total sum of even numbers less than 50 using while loop: " << sum << endl;
    return 0;
}
