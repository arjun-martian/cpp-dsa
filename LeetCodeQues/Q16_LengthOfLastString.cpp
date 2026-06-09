#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int main(){
        string s = "Hello World   ";
        istringstream stream(s);
        string word;
        vector<string> words;

        int MaxLength=0;

        while(stream>>word){
            words.push_back(word);
        }

        MaxLength=string(words[words.size()-1]).length();
        cout<<MaxLength<<endl;
}