#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n=3;
    int t=0;
    int x=0;
    bool isPowof2=true;
        for(long long i=1;i<=n;i*=2){
          t=pow(2,x);
          if(n==t){
            cout<<isPowof2<<endl;
           }
          x++;
        }
        
        if(n!=t){
            isPowof2=false;
            cout<<isPowof2<<endl;
        }

    return 0;
}