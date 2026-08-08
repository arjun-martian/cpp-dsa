#include<iostream>
using namespace std;
int LinearSearch(int arr[],int sz);

int main(){
    int arr[]={5,7,8,3,10,4,34};
    int sz=sizeof(arr)/sizeof(int);

    cout<<LinearSearch(arr,sz)<<"\n";

    return 0;
}

int LinearSearch(int arr[],int sz){
    for(int i=0;i<sz;i++){
        if(arr[i]==4){
            return i;
        }
    }
    return -1;
}