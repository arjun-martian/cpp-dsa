#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={3,0,1};
    sort(nums.begin(),nums.end());
        int sz=nums.size();
        int i=0;
        
        for(;i<sz;i++){
            if(nums[i]!=i){
                cout<<i<<endl;
                break;
            }
        }
        cout<<i<<endl;

    return 0;
}