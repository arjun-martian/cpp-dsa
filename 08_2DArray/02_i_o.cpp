#include<iostream>
using namespace std;
int main(){
    int student[3][4];
    int r = 3, c = 4;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>student[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<student[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<student[2][2]<<endl;
    return 0;
}