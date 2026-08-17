#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // char str[6]={'A','R','J','U','N','\0'};// '\0' NULL CHARACTER
    // cout<<str<<endl;
    // "DSAwithCpp";//STRING LITERALS
    // "DSAchallenge";//STRING LITERALS
    // "STRINGS";//STRING LITERALS
    // //STRING LITERALS => ARE LIKE CONSTANTS(IN STRING) MEANS INKO CHANGE NHI KRA JA SKTA

    char work[]="code";
    cout<<work[2]<<endl;
    cout<<strlen(work)<<endl;

    char ch[50]={'s','l','a','y','e','r','\0'};
    cout<<strlen(ch)<<endl;

    char ch2[30];
    cout<<"ENTER THE STRING:";
    cin.getline(ch2,30,'0');//ignore kr deta string after whitespace
    //cin.getline(string_name,length,delimiter)
    // delimiter => ek special character ya number hote hai jiske bad ka string ignore ho jata hai 

    cout<<"Word: "<<ch2<<endl;
    cout<<"Length of String: "<<strlen(ch2)<<endl;

    return 0;
}