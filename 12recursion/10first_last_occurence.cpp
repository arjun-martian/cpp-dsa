#include<iostream>
#include<vector>
using namespace std;

// int firstoccurrence(vector<int>& num,int i,int k){
//      if(i==num.size()) return -1;

//       if(num[i]==k) return i;

//       firstoccurrence(num,i+1,k);
// }

int lastoccurrence(vector<int>& num,int i,int k){
     if(i<0) return -1;

      if(num[i]==k) return i;

      lastoccurrence(num,i-1,k);
}

int main(){
    vector<int> num={1,2,3,3,3,4};
    int lastindx=num.size()-1;
    int target=3;

    // cout<<firstoccurrence(num,0,target)<<endl;
    cout<<lastoccurrence(num,lastindx,target)<<endl;

    return 0;
}