#include<iostream>
#include<string>
using namespace std;

void printNto1(int n){
    if(n==0) return;// BASE CASE
    cout<<n<<endl;
    printNto1(n-1);
    return;
}

int main(){
    int n=5;

    printNto1(n);
    
    return 0;
}