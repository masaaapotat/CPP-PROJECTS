#include <iostream>
using namespace std;
int main()
{
    float scores[5];
    float sum = 0.0;
    int average;
    cout << "enter the scores of the 5 students" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "score for student " << i + 1 << endl;
        cin >> scores[i];
        // calculate the sum
        sum += scores[i];
    }
    // the average
    average = sum / 5;
    // display total sum and average score
    cout << "the total sum is: " << sum << " and the average score is: " << average << endl;

    return 0;
}