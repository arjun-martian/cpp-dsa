#include<iostream>
#include<climits>
using namespace std;

int divideTwoIntegers(int d,int n){
        if(d==0) cout<<0<<endl;
        if(d==INT_MIN && n==-1) cout<<INT_MAX<<endl;
        bool sign=((d<0)^(n<0));
        unsigned int a = d < 0 ? -(unsigned int)d : (unsigned int)d;
        unsigned int b = n < 0 ? -(unsigned int)n : (unsigned int)n;
        unsigned int ans=0;
        int count=0;
        while(a>=b){
            count=0;
            while(a>=((unsigned long long)b<<count+1)){
                count++;
            }
            ans+=1<<count;
            a-=b<<count; 
        }
        cout<<(sign?-ans:ans)<<endl;   

}

int main(){
    int dividend=10;
    int divisor=2;

    divideTwoIntegers(dividend,divisor);

    return 0;
}