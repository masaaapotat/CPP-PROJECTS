#include <iostream>
using namespace std;

int main(){
    int defectiveItems = 0;
    int total_widgets = 50;

    // Loop through widgets numbered 1 to 50
    for (int i = 1; i <= total_widgets; i++)
    {
        // Check if the widget is defective (every 8th one)
        if (i % 8 == 0)
        {
            defectiveItems++;
            cout << "Widget " << i << " is defective." << endl;
        }
    }

    // Output the total number of defective widgets
    cout << "Total defective widgets: " << defectiveItems << " out of " << total_widgets << endl;
    return 0;
}
