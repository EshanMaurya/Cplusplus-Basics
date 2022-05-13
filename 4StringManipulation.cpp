#include <iostream>
using namespace std;

int main()
{
    cout<<"test line\n"<< endl; // Makes a new line space
    cout<<"testing2"<<endl;
    
    string phrase = "This is a test";
    cout <<phrase.length()<< endl; // Length of string
    cout << phrase[0]<< endl; // String indexing
    phrase[4] = 'b';
    cout <<phrase<<endl; // with changed letters 
    cout <<phrase.find("test",0)<<endl;
    cout <<phrase.substr(2,8);
}