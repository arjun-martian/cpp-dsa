#include<iostream>
using namespace std;
int main(){
    int marks[5];
    int sz=sizeof(marks)/sizeof(int);
    
    for(int i=0;i<sz;i++){
        cin>>marks[i];
    }

    for(int i=0;i<sz;i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;

    return 0;
}