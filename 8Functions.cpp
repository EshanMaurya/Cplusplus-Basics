#include <iostream>

using namespace std;

void HelloWorld() // Means there is no return function
{
    cout<<"Hello world"<<endl;
}

void Greetings(string name)
{
    cout<<"Hello "<< name<<endl;
}

double Addition(double num1,double num2); // Initliazing function to be used later

int main() // This is a function! It gets executed default
{
    HelloWorld();// Calling the function.
    Greetings("Joe");
    cout<< Addition(2,8)<< endl;
    return 0;
}

double Addition(double num1, double num2)
{
    return num1+num2; // Return function.

    cout << "Test"; //This won't print since return ends the function
}