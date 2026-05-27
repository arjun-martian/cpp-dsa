#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,2,3,1};
    sort(nums.begin(),nums.end());
        int sz=nums.size();
        bool isDuplicate;

        for(int i=0,j=i+1;i<sz,j<sz;i++,j++){
             if(nums[i]==nums[j]){
                isDuplicate=true;
                break;
            }else{
                isDuplicate=false;
                break;
            }
        }    
        cout<<isDuplicate<<endl;

    return 0;
}