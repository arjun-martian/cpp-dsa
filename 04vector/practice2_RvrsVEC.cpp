#include<iostream>
#include<vector>
using namespace std;

void rvrsVec(vector<int> &nums,int sz);

int main(){
   vector<int> nums={4,5,2,7,1};
   int sz=nums.size();
 
   rvrsVec(nums,sz);

   for(int val:nums){
       cout<<val<<" ";
   }
    cout<<endl;

   return 0;
}

void rvrsVec(vector<int> &nums,int sz){
    for(int i=0;i<sz/2;i++){
        swap(nums[i],nums[sz-i-1]);
    }
}