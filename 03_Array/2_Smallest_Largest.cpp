#include<iostream>
using namespace std;
int main(){
    int marks[5]={45,67,23,76,-42};
    int sz=sizeof(marks)/sizeof(int);
    int smallest=INT8_MAX; // INT8_MAX ---> + infinity
    int largest=INT8_MIN; // INT8_MAX ---> - infinity

    for(int i=0;i<sz;i++){ // min,max
        // if(marks[i]<smallest){
        //     smallest=marks[i];
        // }
        // smallest=min(marks[i],smallest);

        if(marks[i]>largest){
            largest=marks[i];
        }
        // largest=max(marks[i],largest);
    }
    // cout<<"The smallest:"<<smallest<<endl;
    cout<<"The largest:"<<largest<<endl;

    return 0;
}