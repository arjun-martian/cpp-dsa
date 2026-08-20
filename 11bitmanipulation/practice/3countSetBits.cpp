#include<iostream>
using namespace std;

int countSetBit(int x){
    int count=0;
    
    while(x>0){
        int lastDigit=x&1;
        count+=1;

        x=x>>1;
    }

    return count;

}

int main(){
    int x=10;
    
    cout<<countSetBit(x)<<endl;

    return 0;
}