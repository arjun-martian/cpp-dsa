#include<iostream>
using namespace std;

int fastFactorial(int x,int p){
    int ans=1;
    
    while(x>0){
        int lastDigit=p&1;
        if(lastDigit) ans=ans*x;

        x=x*x;
        p=p>>1;
    }

    return ans;

}

int main(){
    int x=3; // BASE
    int p=5; //POWER
    
    cout<<fastFactorial(x,p)<<endl;

    return 0;
}