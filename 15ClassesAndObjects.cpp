#include <iostream>

using namespace std;

class Book { // The blueprint of a datatype.
    public:
        string title;
        string author;
        int pages;
};


int main()
{
    Book Book1; // An object is an actual instance of the class.
    Book1.title = "Story of Philosophy";
    Book1.author = "Will Durant";
    Book1.pages = 528;

    cout<<Book1.title; // Printing pages of the book
}