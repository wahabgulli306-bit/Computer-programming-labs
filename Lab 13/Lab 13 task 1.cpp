/*Abdul Wahab
BF25NWELE0704*/

#include <iostream>   // Library for input and output
#include <string>     // Library for string
using namespace std;

// Structure declaration
struct Person
{
    string name;    // Name member
    int age;        // Age member
    string address; // Address member
};

int main()
{
    Person person1; // Structure variable

    // Initialize members
    person1.name = "Abdul Wahab";
    person1.age = 19;
    person1.address = "Peshawar";

    // Display members
    cout << "Name = " << person1.name << endl;
    cout << "Age = " << person1.age << endl;
    cout << "Address = " << person1.address << endl;

    return 0; // End program
}
