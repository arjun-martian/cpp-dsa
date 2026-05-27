#include<iostream>
#include<vector>
using namespace std;
int main(){
//    vector<int> nums={1};
//    int sz=nums.size();
//    int sum=0;
   
//    for(int i=0;i<sz;i++){ 
//        sum^=nums[i];
//    }
//     cout<<sum<<endl;

vector<int> nums={2,2,1};
   int ans=0;
   
   for(int val:nums){ 
       ans^=val;
   }
    cout<<ans<<endl;

   return 0;
}