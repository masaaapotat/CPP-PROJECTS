#include <iostream>
using namespace std;

int main(){
    int defective_count = 0;
    int total_widgets = 50;

    // Loop through widgets numbered 1 to 50
    for (int widget = 1; widget <= total_widgets; widget++)
    {
        // Check if the widget is defective (every 8th one)
        if (widget % 8 == 0)
        {
            defective_count++;
            cout << "Widget " << widget << " is defective." << endl;
        }
    }

    // Output the total number of defective widgets
    cout << "Total defective widgets: " << defective_count << " out of " << total_widgets << endl;
    return 0;
}
