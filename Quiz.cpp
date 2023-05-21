#include <iostream>
using namespace std;
int main(){
    int numque,numchoice;
    string question,response;
    cout << "Number of questions: ";
    cin >> numque;
    cout << "Number of choices each question have: ";
    cin >> numchoice;
    cin.ignore();


    string *Questions = new string[numque];
    string choices[numque][numchoice];
    string *Answer = new string[numque];

    string *guess = new string[numque];
    //-----------------------------------------------------------
    for(int i = 0; i<numque ; ++i){
        cout << "Question no " << i+1 <<": ";
        getline(cin,Questions[i]);
        for(int j = 0; j< numchoice; j++){
            cout << "choice " << char(j+65) <<": ";  // taking input from the examiner
            getline(cin,choices[i][j]);
        }
        cout <<"Answer: ";
        cin >> Answer[i];
        cin.ignore();   
    }
    //--------------------------------------------------------

    cout << "Do you wanna start the quiz(y/n): ";
    cin >> response;
    if(response == "y"){
        cout << "-----------------------QuizTime ------------------";
        cout <<endl;
        for(int i = 0; i<numque;i++){
            cout << i+1 <<". " << Questions[i] << "?";
            cout << endl;
            for(int j = 0; j<numchoice;j++){
                cout << char(j+65) <<". " << choices[i][j];
                cout <<endl;

            }
            cout <<"Your Answer: ";
            cin >> guess[i];

        }
    }
    /*for(int i = 0; i< numque; i++){
        for(int j = 0; j <numchoice; j++){
            cout << choices[i][j] <<" ";        
        }
        cout << endl;
        
    }
    */
   for(int i = 0; i<numque;i++){
    cout << Answer[i] << ", ";
    cout << endl;
   }
}
