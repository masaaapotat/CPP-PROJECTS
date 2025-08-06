#include <iostream>
using namespace std;
int main()
{
    int fact=1;
    int n=5;
    // enter any number to find its factorial
    // cout<<"enter any number to find its factorial"<<endl;
    // cin>>n;
    while ( n!=1)
    {
        /* code */
        fact=fact*n;
        n=n-1;

    }
    cout<<"factorial of "<<n<<" is " <<fact<<endl;
    
    return 0;
}