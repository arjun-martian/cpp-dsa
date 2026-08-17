#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int countVowels(string str){
    int count=0;
    string vowels="aeiou";
    for(int i=0;i<str.length();i++){
        for(int j=0;j<vowels.length();j++)
         if(str[i]==vowels[j]) count++;
    }

    return count;
}

int main(){
    string str;
    cout<<"ENTER THE SENTENCE OR WORD in lowercase: ";
    getline(cin,str);
    
    int vowels=countVowels(str);
    cout<<"NUMBERS OF VOWELS IN YOUR SENTENCE OR WORD ARE: "<<vowels<<endl;
    
    return 0;
}