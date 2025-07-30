// #include<iostream>
// using namespace std;
// int main(){
// int length;
// int width;
// int area;
// int perimeter;
// cout <<"Enter the length of the rectangle"<<endl;
// cin>>length;
// cout<<"enter the width of the rectangle"<<endl;
// cin>>width;
// area=length*width;
// cout<<"the area is "<<area<<endl;
// perimeter=2*(length+width);
// cout<<"the perimeter is"<<perimeter<<endl;
// return 0;}
//

// #include <iostream>
// using namespace std;
// int main(){
//     int age;
//     cout << "enter age"<<endl;
//         cin >> age;
//     if(age<18){

//         cout<<"not eligible to vote"<<endl;

//     }else{
//         cout << "eligible to vote"<< endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     const float pi = 3.14;
//     int option;
//     int length;
//     int width;
//     int area;
//     int perimeter;
//     int height;
//     int base;
//     int hypotenuse;
//     int radius;
//     cout << "choose an option" << endl;
//     cout << "1. rectangle" << endl;
//     cout << "2. triangle" << endl;
//     cout << "3. cirle" << endl;
//     cin >> option;
//     if (option == 1)
//     {
//         cout << "you have chosen a rectangle" << endl;
//         cout << "enter length" << endl;
//         cin >> length;
//         cout << "enter width" << endl;
//         cin >> width;
//         area = length * width;
//         perimeter = 2 * (length + width);
//         cout << "perimeter is " << perimeter << "area is" << area << endl;
//     }

//     if (option == 2)
//     {
//         cout << "you have chosen a triangle" << endl;
//         cout << "enter base" << endl;
//         cin >> base;
//         cout << "enter height" << endl;
//         cin >> height;
//         cout << "enter hypotenuse" << endl;
//         cin >> hypotenuse;
//         area = 0.5 * base * height;
//         perimeter = (base + hypotenuse + hypotenuse);
//         cout << "perimeter is " << perimeter << "area is" << area << endl;
//     }
//     if (option == 3)
//     {
//         cout << "you have chosen a circle" << endl;
//         cout << "enter radius" << endl;
//         cin >> radius;

//         area = 2 * pi * radius;
//         perimeter = 2 * (radius + radius);
//         cout << "perimeter is " << perimeter << "area is" << area << endl;
//     }

//     // if(option==)

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int option;
//     cout <<"please select one of the optionns" <<endl;
//     cout <<"1. mango" <<endl;
//     cout <<"2. orange" <<endl;
//     cout <<"3. banana" <<endl;
//     cout <<"4. passion" <<endl;
//     cin>>option;
//     if(option==1){
//         cout<<"you have selected a mango"<<endl;
//     }
//      if(option==2){
//         cout<<"you have selected a orange"<<endl;
//     }
//      if(option==3){
//         cout<<"you have selected a banana"<<endl;
//     }
//      if(option==4){
//         cout<<"you have selected a passion"<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     float num1, num2, num3;
//     float smallest, middle, largest;

//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter second number: ";
//     cin >> num2;
//     cout << "Enter third number: ";
//     cin >> num3;

//     // find smallest
//     if (num1 <= num2 && num1 <= num3)
//         smallest = num1;
//     else if (num2 <= num1 && num2 <= num3)
//         smallest = num2;
//     else
//         smallest = num3;

//     // find largest
//     if (num1 >= num2 && num1 >= num3)
//         largest = num1;
//     else if (num2 >= num1 && num2 >= num3)
//         largest = num2;
//     else
//         largest = num3;

//     // find middle
//     if ((num1 != smallest && num1 != largest))
//         middle = num1;
//     else if ((num2 != smallest && num2 != largest))
//         middle = num2;
//     else
//         middle = num3;

//     cout << "Numbers in ascending order: " << smallest << ", " << middle << ", " << largest << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     const float pi =3.142;
//     const float radius =7;
//     float circumference;
//      circumference = 2*pi*radius;
//     cout<<"the circumference of the circle is "<<circumference <<endl;

//     return 0;

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     float netSalary;
//     float grossSalary;
//     const float tax = 0.3;
//     cout << "enter your grossSalary" << endl;
//     cin >> grossSalary;
//     netSalary = grossSalary - (tax * grossSalary);
//     cout << "your net salary is" << netSalary << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int yearBirth;
//     const int currentYear =2025;
//     int age;
//     cout<<"enter your year of birth"<<endl;
//     cin>>yearBirth;
//     age=currentYear-yearBirth;
//     if (age>18){
//         cout<<"you are a senior"<<endl;
//     }else
//     {
//         cout<<"you are a minor"<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     float mark;
//     cout << "enter the student mark" << endl;
//     cin >> mark;
//     if (mark >= 70)
//     {
//         cout << "you scored an A" << endl;
//     }
//     else if (mark >= 60)
//     {
//         cout << "you scored a B" << endl;
//     }

//     else if (mark >= 60)
//     {
//         cout << "you scored a B" << endl;
//     }
//     else if (mark >= 50)
//     {
//         cout << "you scored a C" << endl;
//     }
//     else if (mark >= 40)
//     {
//         cout << "you scored a D" << endl;
//     }
//     else
//     {
//         cout << "you scored an E" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     const float base = 7.4;
//     const float height = 10.5;
//     const float hypotenuse = 12.84;
//     float area;
//     area = 0.5*base*height;
//     cout << "the area is " << area << endl;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     const int width=10;
//     const int length=7;
//     int perimeter=2*(length+width);
//     cout<< "the perimeter is "<<perimeter<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     float buyingPrice;
//     float sellingPrice;
//     float profit;
//     cout<<"please enter the buying price"<<endl;
//     cin>>buyingPrice;
//     cout<<"please enter the selling price"<<endl;
//     cin>>sellingPrice;
//     profit=sellingPrice-buyingPrice;
//     cout<<"the profit is"<<profit<<endl;
//     return 0;
// }

#include<iostream>
#include <string>
using namespace std;

int main(){
    string yearBirth;
    const int currentYear=2025;
    int age;
    cout<<"enter your year of birth"<<endl;
    cin>>yearBirth;
    // convert the string to integer
    int year_Birth=stoi(yearBirth);
    age=currentYear-year_Birth;
    cout<<"current age is "<<age<<endl;
    return 0;
}
