#include<iostream>
#include<string>
using namespace std;

string ans(string str,int n,int i,string s,bool map[]){
    if(i==n) return s;
    int mapIndx=(int)(str[i]-'a');

    if(map[mapIndx]){
        return ans(str,n,i+1,s,map);
    }
    else{
        map[mapIndx]=true;
        return ans(str,n,i+1,s+str[i],map);
    }
}

int main(){
    string str="appnnacollege";
    int n=str.size();
    string s="";
    int i=0;
    bool map[26]={false};
    
    cout<<ans(str,n,i,s,map)<<endl;

    return 0;
}