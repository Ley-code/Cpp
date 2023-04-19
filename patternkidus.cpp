#include <iostream>
using namespace std;
int main()
{   
    for(int i = 0;i<8;i++){
        for(int j = 0; j<8-i;j++){
            cout << char(j+65) << " ";
        }  
        for(int k = 0; k<((i-1)*2)+1;k++){
            cout << "@ ";
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
        
            
        
        
      
        cout << endl;
    }

    cout << 65;
    cout << char(65);
} // namespace std
