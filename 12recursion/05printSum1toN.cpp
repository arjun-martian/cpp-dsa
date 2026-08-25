#include<iostream>
using namespace std;

// METHOD 1
// int printSum1toN(int n){
//     if(n==1 || n==0) return n;

//     return n+printSum1toN(n-1);

// }

//METHOD 2 
void printSum1toN(int n,int s){
    if(n==0){
        cout<<s<<endl;
        return;
    }

    printSum1toN(n-1,s+n);

} 

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    printSum1toN(n,0);

    return 0;
}