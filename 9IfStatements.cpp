#include <iostream>

using namespace std;

int main()
{
    int number = 6;

    if(number>3)
    {
        cout<<number<<" is greater than five "<<endl;
    }
    else{
        cout<<number<<" is less than five"<<endl;
    }

    if (number%2==0 && number>5){
        cout<<number<<" is greater than 5 and even.";
    }

    if (number%2!=0 && number>5){
        cout<<number<<"is greater than 5 and odd.";
    }

}