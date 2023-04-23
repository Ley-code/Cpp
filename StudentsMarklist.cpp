#include <iostream>
using namespace std;
int main(){
    string id;
    string grade;
    int numstud,numsubj;
    cout << "no of students: ";
    cin >> numstud;
    cout << "no of subject: ";
    cin >> numsubj;
    string *studlist = new string[numstud];
    string *subjgrade = new string[numsubj];
    
    
    for(int i = 0; i<numstud;i++){

        cout << "Student ID: ",cin >> studlist[i];
        for(int j = 0 ; j<numsubj;j++){
            cout <<"subject" << i + 1 << ": ";
            cin >> subjgrade[j]; 
        }
    }
    for(int i = 0; i<numstud;i++){
        cout << "studlist: " << studlist[i] << " ";
    }
}