/*Abdul Wahab
BF25NWELE0704*/

#include <iostream>   // Library for input and output
#include <string>     // Library for string
using namespace std;

// Structure declaration
struct Book
{
    string title;   // Title member
    string author;  // Author member
    float price;    // Price member
    int pages;      // Pages member
};

int main()
{
    Book book1, book2; // Structure variables

    // Initialize book1 members
    book1.title = "AI Basics";
    book1.author = "Ali Khan";
    book1.price = 500.5;
    book1.pages = 200;

    // Initialize book2 members
    book2.title = "C++ Programming";
    book2.author = "Ahmad";
    book2.price = 750.0;
    book2.pages = 350;

    // Display book1 members
    cout << "Book 1 Details:" << endl;
    cout << "Title = " << book1.title << endl;
    cout << "Author = " << book1.author << endl;
    cout << "Price = " << book1.price << endl;
    cout << "Pages = " << book1.pages << endl;

    // Display book2 members
    cout << endl;
    cout << "Book 2 Details:" << endl;
    cout << "Title = " << book2.title << endl;
    cout << "Author = " << book2.author << endl;
    cout << "Price = " << book2.price << endl;
    cout << "Pages = " << book2.pages << endl;

    return 0; // End program
}
