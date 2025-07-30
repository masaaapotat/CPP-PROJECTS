#include <iostream>
using namespace std;
int main()
{
    int state;
    int base;
    int hypotenuse;
    int height;
    int length;
    int width;
    //

    cout << "enter  either  1 or 2 for the state" << endl;
    cin >> state;
    if (state == 1)
    {
        // area and perimeter of a triangle
        cout << "what is the base of the triangle" << endl;
        cin >> base;
        cout << "what is the height of the triangle" << endl;
        cin >> height;
        cout << "what is the hypotenuse of the triangle" << endl;
        cin >> hypotenuse;
        cout << " the area of the triangle is:" << 0.5 * base * height << endl;
        cout << " the perimeter of the triangle is:" << base + hypotenuse + hypotenuse << endl;
    }
    else
    {
        // area and perimeter of rectangle
        cout << "what is the length of the rectangle" << endl;
        cin >> length;
        cout << "what is the widhth of the rectangle" << endl;
        cin >> width;
        cout << "the area of the rectangle is:" << length * width << endl;
        cout << "the perimeter of the rectangle is:" << 2 * length + width << endl;
    }

    return 0;
}
