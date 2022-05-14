#include <iostream>
// Same as previous project
using namespace std;

class Book { // The blueprint of a datatype.
    public:
        string title;
        string author;
        int pages;
        Book(string name, string writer, int pagesno, bool print){ // Constructor function  ⭐️
            title = name; author = writer; pages = pagesno; // Making it easier to assign values

            if(print==true){
                cout<<title<<endl;
                cout<<author<<endl;
                cout<<pages<<endl;
            }
        }
};


int main()
{
    Book Book1("Story of Philosophy", "Will Durant", 533,true);
}