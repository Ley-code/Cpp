#include <iostream>
#include <math.h>
using namespace std;
int main()
{   
    for(int i = 0;i<15;i++){
        if(i<8){
            for(int j = 0; j<8-i;j++){
                cout << char(j+65) << " ";
            }  
            for(int k = 0; k<((i-1)*2)+1;k++){
                cout << "  ";
            }
            if(i==0){
                for (int m = 6; m>=0;m--){
                    cout << char(m+65) << " ";
                }
            } else {
                for(int l = 7-i; l >= 0;l--){
                    cout << char(l+65) << " ";
                }
            } 
            if (i>7){
                for(int n = 0; n<i-7;n++){
                    cout << char(n+65) << " ";
                }
            }    
        } else if(i>=8){
            for(int j = 0;j<=i-7;j++){
                cout << char(j+65) << " ";
            }
            for(int k = ((15 - i)*2)-3 ;k>0;k--){
                cout << "  ";
            }
            if(i==14){
                for (int m = 6; m>=0;m--){
                    cout << char(m+65) << " ";
                }
            } else {
                for(int l = i-7;l>=0;l--){
                    cout << char(l+65) << " ";
            }
            }
        }       
        cout << endl;
    }
}
