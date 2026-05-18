/*Abdul Wahab
BF25NWELE0704*/

#include <iostream>   // Library for input and output
#include <string>     // Library for string
using namespace std;

// Structure declaration
struct Student
{
    string name; // Name member
    int age;     // Age member
    char grade;  // Grade member
};

int main()
{
    Student student1; // Structure variable

    // Initialize members
    student1.name = "Wahab";
    student1.age = 18;
    student1.grade = 'A';

    // Display members
    cout << "Name = " << student1.name << endl;
    cout << "Age = " << student1.age << endl;
    cout << "Grade = " << student1.grade << endl;

    return 0; // End program
}
