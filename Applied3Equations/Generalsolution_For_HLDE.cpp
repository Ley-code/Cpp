#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter the coefficient of (Y\"): ";
    cin >> a;
    cout << "Enter the coefficient of (Y\'): ";
    cin >> b;
    cout << "Enter the coefficient of (Y): ";
    cin >> c;
    //-------------------------------------- quadratic equation solutions
    int r1 = (-b + (sqrt(pow(b,2) - (4*a*c))))/2*a;
    int r2 = (-b - (sqrt(pow(b,2) - (4*a*c))))/2*a;
    //-------------------------------------- 
    if ((pow(b,2) - (4*a*c)) < 0){   //case 3, if the two roots are -ve
        double numerator = sqrt(((pow(b,2) - (4*a*c))*(-1)));
        double alpha = -b/(2*a);
        double beta = numerator/(2*a);
        if(numerator != floor(numerator)){
            cout << "GS : c1e^(" << alpha <<"x) Cos(rootof("<< ((pow(b,2) - (4*a*c))*(-1)) << ")/" << 2*a <<")x + "; // using roots instead of calculating the root
            cout << "c2e^(" << alpha <<"x) Sin(rootof("<< ((pow(b,2) - (4*a*c))*(-1)) << ")/" << 2*a <<")x";
        }else {
            cout << "GS : c1e^(" << alpha <<") Cos(" << beta << ")x + "; //when alpha and beta are integers
            cout << "c2e^(" << alpha <<") Sin(" << beta << ")x";
        }
        
    }else{  
        if(r1 != r2){       // case 1, if both roots are real and different
            cout << "GS : c1e^(" <<r1<<"x) + c2e^("<<r2<<"x)";
        }else if(r1 == r2){ //case 2, if both roots are real and the same
            cout << "GS : c1e^(" <<r1<<"x) + c2xe^("<<r2<<"x)";
        }
    }
    //----------------------------------------
}
