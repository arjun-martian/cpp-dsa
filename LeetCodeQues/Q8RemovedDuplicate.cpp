#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    // BRUTE FORCE APPRAOCH
    vector<int> nums={1,1,2};
        int k=nums.size();
        int i=0;
        
        for(;i<k-1;i++){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
                i--;
                k++;
            }
        }
        cout<<k<<endl;

    return 0;
}