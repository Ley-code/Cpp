#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float mean,x,fact=1,lessthanorequalto = 0; //used to store the mean, the factorial and the occurence x
    string chars;
    cout << "mean: ";
    cin >> mean;
    cout << "P( x ";
    cin >> chars;
    cin >> x;
    if(chars == "="){             //case 1 if the random variable equals x
        for (int i = x; i>0;i--){   // calculates the factorial or the deonminator 
            fact *= i;              // of the function
        }
        float numerator = pow(mean,x)*(pow(M_E, -mean));  //part of the equation
        double pofx = numerator/fact;    // the final result
        cout <<"p(x = "<<x<<") = "<<pofx;
    } 
    else {  
        for(int j = x; j>=0;j--){  
            float fact2 = 1;
            for(int i = j; i>0;i--){   //calculates the factorial for range of the values of x... i,e if x = 3, the values are 
                fact2 *= i;             // 3,2,1,0. and the factorials are calculated respectively
            }
            float numerator = pow(mean,j)*(pow(M_E, -mean));  //part of the equation
            double pofx2 = numerator/fact2;
            lessthanorequalto += pofx2;   // adds the equations
        }
           

        if (chars == ">"){ //case 2 if the random variable is greater than x
            cout << "P( x <= " << x << ") = "<< 1-lessthanorequalto; 
        }
        if (chars == "<="){ //case 3 if the random variable is lessthan or equal to x
            cout << "P( x <= " << x << ") = "<< lessthanorequalto;
        }
    }
}
