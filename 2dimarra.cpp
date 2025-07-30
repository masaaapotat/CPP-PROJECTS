#include <iostream>
using namespace std;
int main()
{
    int student[3][3];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "row " << row + 1 << " col " << col + 1 << endl;
            cin >> student[row][col];
        }
    }
    for (int row = 0; row < 3; row++)
    {
        int total = 0;
        for (int col = 0; col < 3; col++)
        {
            total = total + student[row][col];
        }
        cout <<"Total marks for Student: " << total << endl;
    }

    return 0;
}