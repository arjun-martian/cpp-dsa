#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1="Audi";
    string str2="Ferrari";
    
    cout<<(str1 < str2)<<endl; // true-->1
    cout<<(str1==str2)<<endl; // false-->0
    cout<<(str1 > str2)<<endl; // false-->0
    cout<<(str1!=str2)<<endl; // true-->1

    return 0;
}