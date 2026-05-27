#include<iostream>
using namespace std;
int main(){
    int num[5]={45,8,23,-6,90};
    int sz=sizeof(num)/sizeof(int);

    // int smallest=INT8_MAX;
    int largest=INT8_MIN;

    for(int i=0;i<sz;i++){
        // if(num[i]<smallest){
        //     smallest=i;
        // }

        if(num[i]>largest){
            largest=i;
        }
    }
     cout<<largest<<"\n";
    return 0;
}