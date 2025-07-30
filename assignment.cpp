#include <iostream>
#include <string>
using namespace std;
int main()
{
    // float grossSalary;
    // float netSalary;

    // cout << "Enter your gross salary: ";
    // cin >> grossSalary;
    // netSalary = grossSalary - (grossSalary * 0.45);

    // cout << "your net salary is: " << netSalary << endl;
    // int arr1[5]={23,54,87};
    // int arr2[5]={23,54,87,1,2};
    //  cout << "your array is: " << arr1 << endl;
    //  cout << "your array is: " << arr2 << endl;
    int sum=0;
    float average;
    float product;
    int count=0;
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "enter the number" << endl;
        cin >> arr[i];
        // sum += arr[i];
        sum=sum+arr[i];
        count=count+i;
    }
    average = sum / 4;
    product=arr[0]*arr[1]*arr[2]*arr[3];

    return 0;
}