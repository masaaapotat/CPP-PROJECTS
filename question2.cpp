#include <iostream>
using namespace std;
int main()
{
    int productCodes[] = {204, 215, 341, 399, 405};
    int searchCode;
    // enter code to be searched
    cout << "please enter the code to search" << endl;
    cin >> searchCode;
    // search the code
    for (int i = 0; i < 5; i++)
    {
        if (productCodes[i] == searchCode)
        {
            cout << "product code found in stock" << endl;
            // exit if product code is found
            return 0;
        }
    }
    // if code not found
    cout << "product code not found" << endl;

    return 0;
}