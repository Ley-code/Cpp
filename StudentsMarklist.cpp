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
    string *subjgrade = new string[numsubj*numstud]; //to store the overall grades of all students
    
    
    for(int i = 0; i<numstud;i++){

        cout << "Student ID: ",cin >> studlist[i];
        for(int j = 0 ; j<numsubj;j++){
            cout <<"subject" << j + 1 << ": ";
            
            cin >> subjgrade[j + ((i*numsubj))]; //stores students grade respectively 
        }
    }
    for(int i = 0; i<numstud;i++){
        cout << studlist[i] << " ";
        for(int j = i*numsubj; j < numsubj+(i*numsubj);j++){ //this calls out the data stored.. maths algorthim:)
            cout << subjgrade[j] << " ";
        }
        cout << endl;
    }
}
