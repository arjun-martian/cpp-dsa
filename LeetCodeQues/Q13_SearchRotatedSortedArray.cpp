#include<iostream>
#include<vector>
using namespace std;

int searchRotatedSortedArray(vector<int>& nums,int size, int target) {
        int i = 0;
        while(i<size){
            if(nums[i]==target) return i;
            i++;
        }
        return -1;
    }

int main(){
   vector<int> nums = {4,5,6,7,0,1,2};
   int target = 0;
   int size = nums.size();
   int result = searchRotatedSortedArray(nums,size,target);
   cout<<result<<endl;
}