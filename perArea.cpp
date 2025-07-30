#include <iostream>
using namespace std;

int main()
{
    cout << "select a shape (1. Triangle, 2. Rectangle or 3.Circle)" << endl;
    cout << "Enter your choice (1-3): " << endl;
    // string shape;
    string choice;
    cin >> choice;
    if (choice == "1")
    {
        float base, height, hypothenuse;
        cout << "Enter the base of the triangle: ";
        cin >> base;
        // cin >> base, height, hypothenuse;
        // cin >> base>> height>> hypothenuse;
        cout << "Enter the  height  of the triangle: ";
        cin >> height;
        cout << "Enter the  hypothenuse of the triangle: ";
        cin >> hypothenuse;
        float perimeter = base + hypothenuse + hypothenuse;
        float area = 0.5 * base * height;
        cout << "The perimeter of the triangle is: " << perimeter << endl;
        cout << "The area of the triangle is: " << area << endl;
    }
    else if (choice == "2")
    {
        float length, width;
        cout << "Enter the length of the rectangle: ";
        cin >> length ;
         cout << "Enter the  width of the rectangle: ";
        cin >> width;
        float perimeter = 2 * (length + width);
        float area = length * width;
        cout << "The perimeter of the rectangle is: " << perimeter << endl;
        cout << "The area of the rectangle is: " << area << endl;
    }
    else if (choice == "3")
    {
        float radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        float perimeter = 3.14 * 2 * radius;
        float area = 3.14 * radius * radius;
        cout << "The perimeter of the circle is: " << perimeter << endl;
        cout << "The area of the circle is: " << area << endl;
    }
    else
    {
        cout << "Invalid shape" << endl;
    }
    return 0;
}