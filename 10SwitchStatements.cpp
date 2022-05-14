#include <iostream>

using namespace std;

string getDayOftheWeek(int dayNum){
    string dayName;
    switch (dayNum)
    {
    case 0:
        dayName = "Monday";
        break;
    case 1:
        dayName = "Tuesday";
        break;
    case 2:
        dayName = "Wednesday";
        break;
    case 3:
        dayName = "Thursday";
        break;
    case 4:
        dayName = "Friday";
        break;
    case 5:
        dayName = "Saturday";
        break;
    case 6:
        dayName = "Sunday";
        break;
    case 7:
        dayName = "Saturday";
        break;
    default:
        dayName = "Not an actual day!";
        break;
    }
    return dayName;
}

int main(){
    cout<<getDayOftheWeek(2);
}