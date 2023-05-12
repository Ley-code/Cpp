#include <iostream>
#include <math.h>
using namespace std;
int main(){
    //-----------------------------------------
    int ageearthling; 
    double timeofspaceling, Vofspaceling;
    cout << "This program allows one to calculate time dilation using special relativity.... but to make it interesting it makes use of the twin paradox\n";
    cout << "Enter the earthling age: ";                          
    cin >> ageearthling;                                               //this program calculates the twin paradox problem using special relativity
    cout << "Enter a velocity v of the earthlings twin respective to the earthling(interms of C): ";
    cin >> Vofspaceling;
    timeofspaceling = ageearthling * sqrt(1- (pow(Vofspaceling,2)));
    cout << "The age of the spaceling is: " << timeofspaceling;
    //-----------------------------------------
}