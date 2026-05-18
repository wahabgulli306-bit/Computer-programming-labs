/*Abdul Wahab
BF25NWELE0704*/

#include <iostream>     // Library for input and output
using namespace std;    // Use standard names

// Function to multiply two numbers
void multiply(int num1, int num2)
{
    int product = num1 * num2;   // Multiply numbers
    cout << "Product = " << product << endl; // Display result
}

int main()
{
    multiply(5, 4);   // Call function with two numbers

    return 0;         // End program
}
