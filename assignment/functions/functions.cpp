#include <iostream>
using namespace std;
int add (int a, int b){
    int sum=a+b;
    cout<<sum;
    return 0;
}
int main(){
    cout<<"enter 2 numbers"<<endl;
    int num1, num2;
     cout<<"enter num1"<<endl;
    cin>>num1;
     cout<<"enter num2 "<<endl;
    cin>> num2;
    int result=add(num1,num2);
    cout<<"result is "<<result;
    return 0;
}