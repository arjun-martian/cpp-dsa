#include<iostream>
using namespace std;
int main(){
    int num[]={34,67,89,23,12};
    int sz=sizeof(num)/sizeof(int);

    int maxNum=INT8_MIN;
    int minNum=INT8_MAX;
    
    int temp;
    
    int i;
    for(i=0;i<sz;i++){
         if(num[i]>maxNum){
             maxNum=num[i];
             temp=i;
         }
    }

    int temp2;
    
    int j;
    for(j=0;j<sz;j++){
         if(num[j]<minNum){
             minNum=num[j];
             temp2=j;
         }
    }

    swap(num[temp],num[temp2]);

    for(int i=0;i<=sz-1;i++){
        cout<<num[i]<<endl;
    }

    return 0;
}