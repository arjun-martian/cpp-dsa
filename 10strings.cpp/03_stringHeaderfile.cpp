#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    string str;
    getline(cin,str,'$');
    cout<<str[0]<<endl;
    cout<<str[2]<<endl;
    cout<<str[3]<<endl;

    return 0;
}