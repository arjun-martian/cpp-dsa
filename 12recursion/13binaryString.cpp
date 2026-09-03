#include<iostream>
#include<string>
using namespace std;

// void binaryString(int n,int lastPlace,string s){
//     if(n==0){
//         cout<<s<<endl;
//         return;
//     }    

//     if(lastPlace!=1){
//         binaryString(n-1,0,s+'0');
//         binaryString(n-1,1,s+'1');
//     }else{
//         binaryString(n-1,0,s+'0');
//     }
// }

void binaryString(int n,string s){
    if(n==0){
        cout<<s<<endl;
        return;
    }    

    if(s[s.size()-1]!='1'){
        binaryString(n-1,s+'0');
        binaryString(n-1,s+'1');
    }else{
        binaryString(n-1,s+'0');
    }
}

int main(){
    int n;
    cout<<"Enter the string length:";
    cin>>n;

    // binaryString(n,0,"");
    binaryString(n,"");

    return 0;
}