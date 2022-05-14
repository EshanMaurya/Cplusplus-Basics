#include <iostream>

using namespace std;

int main()
{
    int array[30]={1,2,3,5,6,7,8,9,0}; // This means that this array can only have a maximum of 20 elements

    cout<<array[2]<<"\n"; // Output will be 3 since arrays start counting from 0,1,2,3....

    array[2] = 2;

    cout<<array[2]<<"\n";
}