#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr = arr; // ye array ki first value ko point kr rha hai

    int *ptr2 = ptr+3;

    cout<<(ptr<ptr2)<<endl; // ptr2 ka address is greater than ptr
    cout<<(ptr==arr)<<endl; // check krte hai ki vo addreaa ko point kr rahe hai kya 

}