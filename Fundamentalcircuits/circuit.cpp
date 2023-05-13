#include <iostream>
using namespace std;
int main(){
    string value;
    int numresistor;
    cout << "Series (s) or Parallel(p): ";
    cin >> value ;
    cout << endl;
   
    cout << "how many resistors: ";
    cin >> numresistor;
    if (value == "s"){
        for(int i = 0 ; i < numresistor; i++){
            cout << "----/\\/\\/\\----";
        }
    } else {
        for (int i = 0; i < 11; i++){
            if( i == 0 || i == 10){
                for(int k = 0 ;  k< numresistor; k++){
                    cout << "-------";
                }   

            }else if( i == 7){
                cout << "hi";
            }
            cout << endl;
        }
            

        
        }


}