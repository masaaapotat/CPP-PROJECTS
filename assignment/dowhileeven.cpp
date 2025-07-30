#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int i = 0;

    do
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    } while (i < 50);

    cout << "Total sum of even numbers less than 50 using do...while loop: " << sum << endl;
    return 0;
}
