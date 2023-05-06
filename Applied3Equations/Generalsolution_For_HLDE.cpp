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
    if(r1 != r2){
        cout << "GS : c1e^(" <<r1<<"x) + c2e^("<<r2<<"x)";
    }else if(r1 == r2){
        cout << "GS : c1e^(" <<r1<<"x) + c2xe^("<<r2<<"x)";
    }else if ((pow(b,2) - (4*a*c)) < 0){
        int a = -b/(2*a);
        int b = ((pow(b,2) - (4*a*c))*(-1)) / 
    }
   
    

    
}
