#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& nums);
void selection_sort(vector<int>& nums,int size);

int main(){
    vector<int> nums = {4,5,1,3,2};
    int size = nums.size();

    selection_sort(nums,size);

}

void print(vector<int>& nums){

    for(int i=0;i<nums.size();i++){
          cout<<nums[i]<<endl;
    }

}

void selection_sort(vector<int>& nums,int size){
    
    //TIME COMPLEXITY = O(n*log(n)) which is better than o(n^2)
    for(int i=0;i<size-1;i++){
         int minIndx = i;
        for(int j=i+1;j<size;j++){

            if(nums[j]<nums[minIndx]) minIndx = j;

        }
        swap(nums[i],nums[minIndx]);
    }

    print(nums);

}