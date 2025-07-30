#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 0; i < 50; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        cout << "sum is " << sum << " and i is " << i << endl;
        //   cout << "After adding " << i << ", sum is: " << sum << endl;
    }
    cout << "sum" << sum << endl;
    return 0;
  
}