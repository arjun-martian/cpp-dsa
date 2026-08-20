#include<iostream>
using namespace std;

bool checkPowerOf2(int n){
    if(!(n&(n-1))){ // BITMASK (n-1) hoga
       cout<<"Yes, it is a power of 2"<<endl;
       return true;
    }
     cout<<"No, it is not a power of 2"<<endl;
     return false;

}

int main(){
    int x=31;
    checkPowerOf2(x);

    return 0;
}