#include <iostream>
using namespace std;
int main(){
    int numque,numchoice;
    int correctguesses = 0;
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
        while(Answer[i].length() >1 ){
            cout << "Please use the character next to the choice\nAnswer: ";
            cin>>Answer[i];
            cin.ignore();
            cout << endl;
        }
    }
    //--------------------------------------------------------
    for(int i=0;i<15;i++){
        cout << endl;
    }
    cout << "Do you wanna start the quiz(y/n): ";
    cin >> response;
    for(int i = 0; i < response.length(); i++)
        response[i] = response[i] + 32;
    if(response == "y"){
        cout << "-----------------------QuizTime ------------------";
        cout <<endl;
        for(int i = 0; i<numque;i++){
            cout << i+1 <<". " << Questions[i] << "?";
            cout << endl;                                               //asks the questions
            for(int j = 0; j<numchoice;j++){
                cout << char(j+65) <<". " << choices[i][j];
                cout <<endl;

            }
            cout <<"Your Answer: ";
            cin >> guess[i];
            if(Answer[i]==guess[i]){
                cout <<"You are correct!!!"<<endl;
                correctguesses += 1;
            }else{
                cout <<"You are wrong :)"<<endl;
                cout <<"The correct answer was " << Answer[i];    
            }
        }
    }
    //---------------------------------------------------------------
    cout <<"-------------Results!!--------------"<<endl;
    cout << correctguesses << " out of " << numque;            //desplays the result
    //----------------------------------------------------------------
}
