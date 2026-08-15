#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    char fruit[]="ApPle";
    //  for(int i=0;i<strlen(fruit);i++){
    //     if(!isupper(fruit[i])) fruit[i]-=32;
    //  }
    
    for(int i=0;i<strlen(fruit);i++){
        char ch=fruit[i];
        if(ch>='a' && ch<='z'){
            fruit[i]=ch-'a'+'A';
        } 
    }
    cout<<fruit<<endl;
    return 0;
}