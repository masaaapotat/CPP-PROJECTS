#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.142

// calculates area of a circle given radius
float areaOfCircle(float radius);

int main()
{
    float radius = 0;
    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Area is: " << areaOfCircle(radius) << endl;

    return 0;
}

float areaOfCircle(float radius)
{   
    return PI *  pow(radius, 2);
}