#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// BRUTE FORCE APPROACH

// int main(){
//     vector<int> nums={1,2,2,1,1};
//     int sz=nums.size();

//     for(int val:nums){
//         int count=0;
//         for(int el:nums){
//              if(el==val){
//                  count++;
//             }
//         }
//         if(count>sz/2){
//             cout<<val<<endl;
//             break;
//         }
//     }


//     return 0;
// }

// SORTING (BETTER APPROACH THAN BRUTE FORCE APPROACH)

// int main(){
//     vector<int> nums={1,2,2,1,1};
//     int sz=nums.size();

//     //sorting
//     sort(nums.begin(),nums.end());
    
//     //frequency count
//     int count=1,ans=nums[0];
//     for(int i=1;i<sz;i++){
//         if(nums[i]==nums[i-1]){
//             count++;
//         }else{
//             count=1;
//             ans=nums[i];
//         }
//         if(count>sz/2){
//             cout<<ans<<endl;
//             break;        
//         }
//     }
     

//     return 0;
// }


//MOORE'S VOTING ALGORITHM (OPTIMIZED APPROACH)
int main(){
    vector<int> nums={1,2,2,1,1};
    int sz=nums.size();

    //frequency count
    int count=0,ans=0;
    for(int i=0;i<sz;i++){
        if(count==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            count++;
        }else{
            count--;       
        }
    }
      cout<<ans<<endl;

    return 0;
}