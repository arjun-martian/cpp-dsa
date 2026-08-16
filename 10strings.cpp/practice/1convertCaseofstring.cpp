#include<iostream>
#include<cstring>
using namespace std;

void lowercaseString(char fruit[],int n){
     for(int i=0;i<n;i++){
        char ch=fruit[i];
        if(ch>='A' && ch<='Z'){
            fruit[i]=ch-'A'+'a';
        } 
    }
}

int main(){
    char fruit[]="ApPle";
    //  for(int i=0;i<strlen(fruit);i++){
    //     if(!isupper(fruit[i])) fruit[i]-=32;
    //  }
    
    //CONVERT TO UPPERCASE
    // for(int i=0;i<strlen(fruit);i++){
    //     char ch=fruit[i];
    //     if(ch>='a' && ch<='z'){
    //         fruit[i]=ch-'a'+'A';
    //     } 
    // }
    
    //CONVERT TO LOWERCASE
    // for(int i=0;i<strlen(fruit);i++){
    //     char ch=fruit[i];
    //     if(ch>='A' && ch<='Z'){
    //         fruit[i]=ch-'A'+'a';
    //     } 
    // }
    // cout<<fruit<<endl;

    lowercaseString(fruit,strlen(fruit));
    cout<<fruit<<endl;

    return 0;
}