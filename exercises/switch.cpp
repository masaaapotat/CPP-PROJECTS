#include <iostream>
using namespace std;
int main()
{
    int x = 11;
    switch (x)
    {
    case 1:
        x = x + 10;
        break;
    case 2:
        x = x + 20;
        break;
    default:
        x = x + 1;
        break;
    }
    cout<<"the value of x: "<<x<<endl;
    return 0;
}