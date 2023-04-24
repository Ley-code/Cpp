#include <iostream>
using namespace std;
int main(){
    for(int i = 0; i <17 ; i++){
        if(i<9){
            
            for(int j = 0; j<i+1;j++){
                cout << char(j+65) << " ";
            }
            for (int k = (15 - (2*i)); k>0 ; k--){
                cout << "  ";
            }
            if(i==8){
                for(int m = 7; m>=0;m--){
                    cout << char(m+65) << " ";
                }
            }else {
                for(int l = i; l>=0; l--){
                    cout << char(l+65) << " ";
                }
            }
        } else if (i>=9){

            for(int j = 0; j< 17 - i;j++){
                cout << char(j+65) << " ";
            }
            for(int k = 1; k < (i-8)*2;k++){
                cout << "  ";
            }
            for(int l = 16 - i; l >=0;l--){
                cout << char(l+65) << " ";
            }
        }      
        cout << endl;
    }
}
