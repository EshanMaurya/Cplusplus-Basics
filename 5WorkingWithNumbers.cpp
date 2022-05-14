#include <iostream>
#include <cmath> // Math Library
using namespace std;

int main()
{
    cout << 10 % 3<<endl; // Modulus
    int intnum = 5;
    double doublenum = 5.5;

    intnum++; //Increment
    doublenum --;//decrement

    intnum+= 80;

    cout<<intnum<<"\n";
    cout<<10/3<<"\n"; // For integer division, i.e returning remainder

    cout<<15.5 + 5<<"\n";

    cout<<pow(intnum,3)<<"\n"; // Squaring

    cout<<fmin(3,4)<<endl; // Tell what the smallest number is. Fmax is the inverse of this

}
