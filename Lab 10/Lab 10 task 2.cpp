/*Abdul Wahab
BF25NWELE0704*/

#include <iostream>     // Library for input and output
using namespace std;    // Use standard names

// Function to find square of a number
int getSquare(int number)
{
    int square = number * number; // Find square
    return square;                // Return result
}

int main()
{
    int result;   // Variable to store answer

    result = getSquare(6); // Call function

    cout << "Square = " << result << endl; // Display result

    return 0; // End program
}
