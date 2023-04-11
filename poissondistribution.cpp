#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float n,x,fact=1,lessthanorequalto = 0;
    string chars;
    cout << "mean: ";
    cin >> n;
    cout << "P( x ";
    cin >> chars;
    cin >> x;
    if(chars == "="){
        for (int i = x; i>0;i--){
            fact *= i;  
        }
        float numerator = pow(n,x)*(pow(M_E, -n));
        double pofx = numerator/fact;
        cout <<"p(x = "<<x<<") = "<<pofx;
    } 
    else {
        for(int j = x; j>=0;j--){
            float fact2 = 1;
            for(int i = j; i>0;i--){
                fact2 *= i;
            }
            float numerator = pow(n,j)*(pow(M_E, -n));
            double pofx2 = numerator/fact2;
            lessthanorequalto += pofx2;
        }
           

        if (chars == ">"){
            cout << "P( x <= " << x << ") = "<< 1-lessthanorequalto; 
        }
        if (chars == "<="){
            cout << "P( x <= " << x << ") = "<< lessthanorequalto;
        }
    }
} 
