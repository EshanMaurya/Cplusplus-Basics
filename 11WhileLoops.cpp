#include <iostream>

using namespace std;

int main(){
    int i = 1; // Counter
    while (i<=5){
        cout<<i<<endl; // Printing the counter
        i++; // Incrementing one every iteration
    }

    do // Opposite of while loop. First executes and then checks.
    {
        i++;
        cout<<i<<endl; 
    } while (i<=10);
    
    for (int x = 0; x<=5;x++){ // For loops. 
        cout<<"iterations: "<<x<<endl;
    }    

    int array[] = {1,2,3,4,5};
    for (int y=0;y<=5;y++){
        cout<<array[y]<<endl;
    }

}