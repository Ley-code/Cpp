#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float n,x,factx=1;
    cout << "mean: ";
    cin >> n;
    cout << "little x or events: ";
    cin >> x;
    for (int i = x; i>0;i--){
        factx *= i;  
    }
    float numerator = pow(n,x)*(pow(M_E, -n));
    double p = numerator/factx;
    cout <<"p(x)= "<<p;

}