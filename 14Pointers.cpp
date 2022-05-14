#include <iostream>

using namespace std;
// A pointer is a position in the memory of a computer. 
int main(){
    int number = 23;
    string sentence = "Hello";
    double floaty = 435.5;
    // Pointer values
    int *pnumber = &number;
    string *psentence = &sentence;
    double *pfloaty = &floaty;

    cout<<"Number: " <<&number<<endl; // printing at the 'pointers'
    cout<<"Sentence: "<<&sentence<<endl;
    cout<<"Floaty: "<<&floaty<<endl; 

    // Dereferencing

    cout <<*pnumber; // Gives memory address value
}