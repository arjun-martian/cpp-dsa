#include<iostream>
#include<cstring>
using namespace std;

bool Isvalidanagram(string s, string t){
       if(s.length()!=t.length()){
          cout<<"Not Valid Anagram"<<endl;
          return false;
       }

       int count[26]={0};
       for(int i=0;i<s.length();i++){
         count[s[i]-'a']++;
       }

       for(int i=0;i<t.length();i++){
        if(count[t[i]-'a']==0){
            cout<<"Not Valid Anagram"<<endl;
            return false;
        }
        count[t[i]-'a']--;
       }
       
       cout<<"Valid Anagram"<<endl;
       return true;
}

int main(){
    string s="anagram";
    string t="nagaram";

    Isvalidanagram(s,t);

    return 0;
}