#include <iostream>

using namespace std;

int main(){
    int numberGrid[2][2] = {{2,3},{4,5}}; // 2D Array
    
    cout<<numberGrid[0][1]<<endl; // Output

    for (int i = 0; i < 2; i++) // Nested for loop for printing everything in the 2d Array
    {
        for(int j=0; j<2;j++){
            cout << numberGrid[i][j]<<endl;
        }
    }
    
}