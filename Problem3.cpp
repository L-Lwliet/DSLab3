#include<iostream>
using namespace std;

int main(){
    string st[100][100];
    
    for(int i=0; i<10; i++){
        cout<<"For student"<<i+1<<": "<<endl;
        for(int j=0; j<3; j++){
            if(j==0)cout<<" Enter student ID: ";
            else if(j==1)cout<<" Enter number of credits completed: ";
            else if(j==2)cout<<" Enter CGPA: ";
            cin>>st[i][j];
        } 
        cout<<endl;   
    }

    // cout<<endl<<endl;

    // for(int i=0; i<10; i++){
    //     for(int j=0; j<3; j++){
    //         cout<<st[i][j]<<"  ";
    //     }
    //     cout<<endl;
    // }

    cout<<endl<<endl;  

    cout<<"Student's ID whose CGPA is more than 3.75: "<<endl;
    for(int i=0; i<10; i++){
        float a = std::stof(st[i][2]);
        if(a>3.75){
            cout<<st[i][0]<<endl;
        }
        
    }

    cout<<endl<<endl;  

    cout<<"Student's ID who has completed more than 50 credits: "<<endl;
    for(int i=0; i<10; i++){
        int b = std::stoi(st[i][1]);
        if(b>50){
            cout<<st[i][0]<<endl;
        }
    }
}