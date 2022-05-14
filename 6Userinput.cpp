#include <iostream>

using namespace std;

int main()
{
    int value;
    cout<<"Enter in your age";
    cin>>value;

    cout<< "You are " << value << "years old" << "\n";

    string name;
    getline(cin,name);
    cout<< "Your name is" << name;

}