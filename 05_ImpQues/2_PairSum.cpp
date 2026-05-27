#include<iostream>
#include<vector>
using namespace std;

// BRUTE FORCE APPROACH
// vector<int> pairSum(vector<int> nums,int sz,int target);

// int main(){
//     vector<int> nums={2,7,11,15};
//     int sz=nums.size();
//     int target=9;
    
//     vector<int>ans=pairSum(nums,sz,target);

//     cout<<ans[0]<<","<<ans[1]<<endl;

//     return 0;
// }

// vector<int> pairSum(vector<int> nums,int sz,int target){
//     vector<int> pair;
//     for(int i=0;i<sz;i++){
//         for(int j=i+1;j<sz;j++){
//             if((nums[i]+nums[j])==target){
//                pair.push_back(i);
//                pair.push_back(j);
//                return pair;
//             }
//         }
//     }
// }

// 2 POINTER APPROACH (OPTIMIZED APPROACH)
vector<int> pairSum(vector<int> nums,int sz,int target);

int main(){
    vector<int> nums={2,7,11,15};
    int sz=nums.size();
    int target=9;
    
    vector<int> ans=pairSum(nums,sz,target);

    cout<<ans[0]<<","<<ans[1]<<endl;

    return 0;
}

vector<int> pairSum(vector<int> nums,int sz,int target){
    vector<int> pair;
    int i=0,j=sz-1;
    while(i<j){
        int PairSum=nums[i]+nums[j];

        if(PairSum>target){
            j--;
        }else if(PairSum<target){
            i++;
        }else{
            pair.push_back(i);
            pair.push_back(j);
            return pair;
        }
    }
}