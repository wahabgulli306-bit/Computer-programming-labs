/*Abdul Wahab
BF25NWELE0704*/

#include <iostream>   // Library for input and output
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50}; // Integer array

    int *ptr = numbers; // Pointer points to first element of array

    cout << "Array elements using pointer:" << endl;

    cout << *(ptr + 0) << endl; // First element
    cout << *(ptr + 1) << endl; // Second element
    cout << *(ptr + 2) << endl; // Third element
    cout << *(ptr + 3) << endl; // Fourth element
    cout << *(ptr + 4) << endl; // Fifth element

    return 0; // End program
}
