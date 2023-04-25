#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int numstud,numsubj;
    cout << "no of students: ";
    cin >> numstud;
    cout << "no of subject: ";
    cin >> numsubj;
    string *studlist = new string[numstud];
    string subjgrade[numstud][numsubj];
    int subjmark[numstud][numsubj];
    string *subjlist = new string[numsubj];
    float *average = new float[numstud];
    int *credithr = new int[numsubj];
    int gradepoint[numstud][numsubj];
    float *CGPA = new float[numstud];
        //-------------------------------------
        for(int i = 0; i<numsubj; i++){    //recives input from the user about the subject names
            cout <<"name of subject " << i+1 <<"(4characters): ";
            cin >>subjlist[i];
            if((subjlist[i].length()) !=4){
                cout<<"bad boy, what did i say 4 char only\n";
                cout <<"name of subject " << i+1 <<": ";
                cin>>subjlist[i];
            }
            cout << "Credit hour: ";
            cin >> credithr[i];
        }
        //-------------------------------------
        for(int i = 0; i < numstud; i++){ //stores student ids and their grades 
            cout << "Student ID: ",cin>>studlist[i];
            for (int j = 0; j<numsubj; j++){
                cout << "subject" << j+1 << ": ";
                cin >> subjmark[i][j];
            }
        }
        //---------------------------------------
        for(int i = 0; i<numstud;i++){//calculates average of each student and stores it in an array of average
            float sum = 0.0;
            for(int j = 0; j<numsubj;j++){
                sum += subjmark[i][j];
            }
            average[i]=sum/numsubj;
        }
        //-----------------------------------------
        for(int i = 0; i<7;i++){ //prints out the table
            if(i==0){
                cout<<"\t\t\t\t student mark list\n";
            }else if(i==1){
                for(int j = 0; j<6;j++ ){
                    cout << "_________________";
                }
                cout << endl;
            } else if(i==2){
                cout<<"Student. ID\t\t";
                for(int i =0;i<numsubj;i++){
                    cout<<subjlist[i]<<"\t\t";
                }
                cout<<"average\t\t";
                cout<< "CGPA\t\t";
                cout<<endl;
            }
        //-----------------------------------------------
        }
        for(int i = 0; i < numstud; i++){  //data storage of the students Grade and Gradepoint
            for(int j = 0; j<numsubj; j++){
                if(subjmark[i][j]>= 85){
                    subjgrade[i][j] = "A ";
                    gradepoint[i][j] = 4;
                }else if(subjmark[i][j] <40){
                    subjgrade[i][j] = "F ";
                    gradepoint[i][j] = 0;
                }else if(subjmark[i][j]>=75 && subjmark[i][j] <85){
                    subjgrade[i][j] = "B+";
                    gradepoint[i][j] = 3.5;
                }else if(subjmark[i][j] >=70 && subjmark[i][j] <75){
                    subjgrade[i][j] = "B ";
                    gradepoint[i][j] = 3;
                }else if(subjmark[i][j]>=60 && subjmark[i][j]<70){
                    subjgrade[i][j] = "C+";
                    gradepoint[i][j] = 2.5;
                }else if(subjmark[i][j]>=50 && subjmark[i][j] < 60){
                    subjgrade[i][j] = "C ";
                    gradepoint[i][j] = 2;
                }else{
                    subjgrade[i][j] = "D ";
                    gradepoint[i][j] = 1.5;
                }
            }
        }
        //-------------------------------------
        float crhrsummation = 0.0;        
        for(int i = 0; i < numsubj;i++){
            crhrsummation += credithr[i];
        }
        for(int i = 0; i<numstud;i++){    //this batch calculatess the cgpa of each student using their credit hour
            float sumation = 0.0;
            for(int j = 0; j<numsubj;j++){
                sumation += credithr[j]*gradepoint[i][j];
            }
            CGPA[i] = sumation/crhrsummation;
        }
        //--------------------------------------
        for(int i = 0; i<numstud;i++){
            cout << studlist[i]; 
            for(int j = 0; j<numsubj;j++){
                cout <<"\t\t" << subjmark[i][j] << " : " << subjgrade[i][j];     // printa the contents of the table
            }
            cout <<"\t\t"<<average[i];
            cout <<"\t\t"<<CGPA[i];
            cout << endl;
        }
        //--------------------------------------
        //Thank you for your time. 
}