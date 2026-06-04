#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums,int size,int target){
    int start = 0;
    int end = nums.size()-1;
        while(start<=end){
            int mid = (start+end)/2;

            if(nums[mid]==target) return mid;
            if(nums[mid]<target) start = mid+1;
            else end = mid-1;
        }
    return start;
}

int main(){
        vector<int> nums = {1,3,5,6};
        int size = nums.size();
        int target = 2;
        
        int result = searchInsert(nums,size,target);

        cout<<result<<endl;
        
}