/*Abdul Wahab
BF25NWELE0704*/

#include <iostream>   // Library for input and output
using namespace std;

int main()
{
    int num = 10;   // Integer variable

    int *ptr;       // Pointer variable

    ptr = &num;     // Store address of num in pointer

    cout << "Value of num = " << num << endl;     // Display num
    cout << "Value using pointer = " << *ptr << endl; // Display value using pointer

    return 0; // End program
}
