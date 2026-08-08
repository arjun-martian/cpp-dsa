#include <iostream>
using namespace std;
void print_arr(int *ptr,int n){
    for(int i=0 ; i<n ; i++){
        cout<<*(ptr+i)<<endl;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    print_arr(arr,size);
    return 0;
}