#include <iostream>
using namespace std;
int main(){
    int numque,numchoice;
    string question;
    cout << "Number of questions: ";
    cin >> numque;
    cout << "Number of choices each question have: ";
    cin >> numchoice;
    cin.ignore();


    string *Questions = new string[numque];

    for(int i = 0; i<numque ; ++i){
        cout << "Question no " << i+1 <<": ";
        getline(cin,Questions[i]);
        cout<< endl;
        
        
    }
    for(int i = 0; i< numque; i++){
        cout << Questions[i];
    }
}