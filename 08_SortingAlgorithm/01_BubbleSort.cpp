#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& nums,int size);
void swapThenumber(vector<int>& nums,int size);


int main(){
    // vector<int> nums = {5,1,3,2,4};
     vector<int> nums = {1,2,3,4,5};
    int size = nums.size();

    swapThenumber(nums,size);

}

void print(vector<int>& nums,int size){
    for(int i=0;i<size;i++){
        cout<<nums[i]<<endl;
    }
}

void swapThenumber(vector<int>& nums,int size){
    bool isSwap = false;
    for(int i=0;i<size-1;i++){

        for(int j=0;j<size-i-1;j++){

            // if(nums[j]>nums[j+1]) swap(nums[j],nums[j+1]); // ascending order
            if(nums[j]<nums[j+1]) swap(nums[j],nums[j+1]); isSwap = true; // descending order
            
        }
        if(!isSwap){

            return;
            // vector is already sorted
            
        }
    }
    print(nums,size);
}