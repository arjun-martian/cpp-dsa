#include<iostream>
#include<vector>
using namespace std;

void linearSearch(vector<int> &nums,int sz);

int main(){
   vector<int> nums={4,5,2,7,1};
   int sz=nums.size();
 
   linearSearch(nums,sz);

   for(int val:nums){
       cout<<val<<" ";
   }
    cout<<endl;

   return 0;
}

void linearSearch(vector<int> &nums,int sz){
    for(int i=0;i<sz;i++){
       nums[i]*=2;
    }
}