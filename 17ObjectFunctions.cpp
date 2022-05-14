#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

    bool hasHonors(){ // Object function!
        if(gpa >= 3.5){ // If the gpa of the student is above 3.5, they are on the honor roll.
            return true; 
        }
        else{
            return false;
        }
    }
};

int main(){
    Student student1("Jimmy","Businnes",2.4);
    Student student2("Pam","Art",3.6);

    cout<<student1.hasHonors()<<endl; // Result in 0
    cout<<student2.hasHonors()<<endl; // Result in 1
}