#include <iostream>
using namespace std;
int main()
{
    float temperatures[5];
    float sum=0.0;
    double average;
    cout<<"please enter 5 temperature values"<<endl;
    for (int i=0; i<5; i++){
        
        cout<<"temperature "<<i+1<<endl;
        cin>>temperatures[i];
        sum+=temperatures[i];
    }
    average=sum/5;
      cout<<"the temperature values  you entered are:"<<endl;
    for(int i=0; i<5; i++){
        cout<<"temperature "<<i+1 <<": "<<temperatures[i]<<endl;
    }
    cout<<"the average temperature is "<<average<<endl;
    return 0;
}