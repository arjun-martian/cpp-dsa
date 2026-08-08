#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int>& nums,int n);
void print(vector<int>& nums,int n);

int main(){
    vector<int> nums={5,4,1,3,2};
    int n = nums.size();

    insertion_sort(nums,n);

}

void insertion_sort(vector<int>& nums,int n){
    // TIME COMPLEXITY:O(n^2)
     for(int i=1;i<n;i++){
        int curr = nums[i];
        int prvs = i-1;
          while(prvs>=0 && nums[prvs]>curr){
            swap(nums[prvs],nums[prvs+1]);
            prvs--;
          }
        nums[prvs+1] = curr;
     }
   print(nums,n);
}

void print(vector<int>& nums,int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<endl;
    }
}