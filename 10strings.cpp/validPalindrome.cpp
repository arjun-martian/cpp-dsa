#include<iostream>
#include<cstring>
using namespace std;

bool Ispalindrome(char word[],int n){
    // for(int i=0,j=n-1;i<n;i++,j--){
    //     if(word[i]!=word[j]) return false;
    // }
    // return true;

    int start=0;
    int end=n-1;
    while(start<end){
        if(word[start++]!=word[end--]){
          cout<<"Not A Valid Palindrome"<<endl;
          return false;
        }
    }
    cout<<"A Valid Palindrome"<<endl;
    return true;
}

int main(){
    char word[]="madam";
    
    Ispalindrome(word,strlen(word));

    cout<<Ispalindrome<<endl;

    return 0;
}