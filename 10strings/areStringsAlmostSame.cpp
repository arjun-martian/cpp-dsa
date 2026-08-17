#include<iostream>
#include<string>
#include<cstring>
using namespace std;
bool areAlmostEqual(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    char diffChar1,diffChar2;
    int diff=0;
    for(int i=0;i<s1.length();i++){
      if(s1[i]!=s2[i]){
        if(!diff){// first mismatch pair of characters ko store krta hai
            diffChar1=s1[i];
            diffChar2=s2[i];
        }else{// phir ye block of code check krta hai mismatch pairs swap ho skte hai ya nhi
            if(s1[i]!=diffChar2 || s2[i]!=diffChar1){
                return false;
            }
        }
        diff++;
      }
            
      if(diff>2){
        return false;
      }
    }
    
    if(diff==1){
        return false;
    }
        
    return true;

}

int main(){
   string str1="bank";
   string str2="kanb";
   
   areAlmostEqual(str1,str2);

    return 0;
}