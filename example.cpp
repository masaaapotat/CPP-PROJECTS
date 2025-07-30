#include <iostream>
#define PI 3.14
using namespace std;
int main()
{

    float radius; // Define a constant using const keyword
    // typecasting

    cout << "ENTER THE RADIUS OF THE CIRCLE " << endl;
    cin >> radius;
    int area = PI * radius * radius; // Use the defined constant

    cout << "The area of the circle with radius " << radius << " is: " << area << endl;
    // cout << "area is: " << PI * radius * radius <<endl;
    // cout << "perimeter is: " << PI * 2 * radius <<endl;
    return 0;
}