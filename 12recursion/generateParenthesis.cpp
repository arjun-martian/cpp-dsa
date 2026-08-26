#include<iostream>
#include<vector>
#include<string>
using namespace std;

void parenthesis(int n,vector<string>& str,string s,int open,int close){
        if(close==n){
            str.push_back(s);
            return;
        }

        if(open<n) parenthesis(n,str,s+'(',open+1,close);
        if(close<open) parenthesis(n,str,s+')',open,close+1);

}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    vector<string> str;
        
    parenthesis(n,str,"",0,0);

    

    return 0;
}