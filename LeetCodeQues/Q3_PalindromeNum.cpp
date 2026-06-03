#include<iostream>
using namespace std;

int main(){
    long long num=121;
    // long long rvrs=0;
    // bool isPalindrome=true;
    // int original=num;

    // while(num>0){
    //     rvrs*=10;
    //     rvrs+=num%10;
    //     num/=10;
    // }

    // if(rvrs==original){
    //     cout<<isPalindrome<<endl;
    // }else{
    //     isPalindrome=false;
    //     cout<<isPalindrome<<endl;
    // }

    string str = to_string(num);
        for(int i=0,j=str.length()-1; i<=str.length()/2; i++,j--){
            if(str[i]!=str[j]) {
                cout<<"false"<<endl;
            }
        }
    cout<<"true"<<endl;

    return 0;
}