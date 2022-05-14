#include <iostream>

using namespace std;

class Movie {
    private:
        string rating; // This cannot be accessible outside the class.
    
    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        void setRating(string aRating){ // For removal of invalid ratings
            if(aRating == "G" || aRating == "PG" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            }else{
                rating = "NR";
            }
        }
        string getRating(){
            return rating;
        }

};

int main(){
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    // avengers.rating = "" not possible
    avengers.setRating("nothing");
    cout<< avengers.getRating()<<endl; // Will print NR due to invalid rating
    avengers.setRating("PG");
    cout<< avengers.getRating(); 
    return 0;
}