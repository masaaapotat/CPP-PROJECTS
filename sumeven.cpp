#include <iostream>
using namespace std;
int main() {
    int sum = 0;  // Declare and initialize a variable to hold the sum of even numbers

    // Loop through numbers from 0 to 20
    for (int i = 0; i <= 20; i++) {
        // Check if the current number is even
        if (i % 2 == 0) {
            sum += i; // Add the even number to the sum
            
        }
    }

    // Display the final total sum of even numbers
    cout << "The total of even numbers from 0 to 20 is: " << sum << endl;

    return 0; 
}