#include<iostream>
using namespace std;

void oddOReven(int n){
    if(!(n & 1)){
        cout<<"Even Number"<<endl;
    }else{
        cout<<"Odd Number"<<endl;
    }
}

int main(){
    int n=7;
    oddOReven(n);

    n=4;
    oddOReven(n);
    

    return 0;
}