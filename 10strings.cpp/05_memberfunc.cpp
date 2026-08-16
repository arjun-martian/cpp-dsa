#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    string str="Moon Knight is one of the Badass Superhero MARVEL have";
    cout<<str.length()<<endl;
    cout<<str[3]<<endl;
    cout<<str.at(5)<<endl;
    cout<<str.substr(0,4)<<endl;
    cout<<str.substr(5,7)<<endl;
    int idx=str.find("DC");
    cout<<idx<<endl;

    return 0;
}