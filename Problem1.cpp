#include<iostream>
using namespace std;

int main(){
    int a[10][10];

    cout<<"Enter the elements of the 3x4 matrix: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<"Enter element a["<<i+1<<"]["<<j+1<<"] :  ";
            cin>>a[i][j];
        }
    }

    cout<<"\n\nThe matrix is: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    int t[10][10];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            t[j][i] = a[i][j];
        }
    }

    cout<<"\nTranspose of the matrix is: "<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout<<t[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    return 0;
}
