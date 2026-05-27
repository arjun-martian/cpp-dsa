#include<iostream>
using namespace std;

int main(){
    long long num=121;
    long long rvrs=0;
    bool isPalindrome=true;
    int original=num;

    while(num>0){
        rvrs*=10;
        rvrs+=num%10;
        num/=10;
    }

    if(rvrs==original){
        cout<<isPalindrome<<endl;
    }else{
        isPalindrome=false;
        cout<<isPalindrome<<endl;
    }

    return 0;
}