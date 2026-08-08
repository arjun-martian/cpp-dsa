#include<iostream>
using namespace std; 

int rvrsArr(int arr[],int sz);

int main(){
    int arr[]={4,2,7,8,1,2,5};
    int sz=sizeof(arr)/sizeof(int);
    rvrsArr(arr,sz);
    // int temp;
    // // for(int i=0,j=sz-1;i<sz/2,j>sz/2;i++,j--){
    // //       swap(arr[i],arr[j]);
    // // }
    //  for(int i=0,j=sz-1;i<=j;i++,j--){
    //      temp=arr[i];
    //      arr[i]=arr[j];
    //      arr[j]=temp;
    //  }
    
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

int rvrsArr(int arr[],int sz){
       int temp;
    // for(int i=0,j=sz-1;i<sz/2,j>sz/2;i++,j--){
    //       swap(arr[i],arr[j]);
    // }
     for(int i=0,j=sz-1;i<j;i++,j--){
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
     }
}