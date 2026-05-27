#include<iostream>
using namespace std;

void intersection(int num1[],int num[],int sz);

int main(){
    int num1[]={45,32,21,67,91};
    int num2[]={63,21,54,19,76};
    int sz=sizeof(num1)/sizeof(int);

    intersection(num1,num2,sz);

    return 0;
}

void intersection(int num1[],int num[],int sz){

    for(int i=0;i<sz;i++){
        for(int j=0;j<=i;j++){
            if(num1[i]==num[j]){
                cout<<num[j]<<endl;
            }
        }
    }
}