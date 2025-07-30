#include <iostream>
using namespace std;
int main()
{
    float scores[5];
    float sum = 0.0;
    float average;
    int passCount = 0;
    int failCount = 0;
    cout << "enter the scores of the 5 students" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "score for student " << i + 1 << endl;
        cin >> scores[i];
        // calculate the sum
        sum += scores[i];
        if (scores[i] >= 60)
        {
            passCount++;
           
        }
        else
        {
           failCount++;
        }
    }
    // the average
    average = sum / 5;
    // display total sum and average score
    cout << "the total sum is: " << sum <<endl;
    cout<< "the average score is: " << average << endl;
     cout << "the number of students who failed are: " << failCount << endl;
      cout << "the number of students who passed are: " << passCount << endl;

    return 0;
}