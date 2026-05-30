#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,2,3,1};
    sort(nums.begin(),nums.end());
        int sz=nums.size();

        bool isDuplicate=false;

        sort(nums.begin(),nums.end());

        // iss loop me c++ i<sz ko ignore kr deta hai to make code effective isliye code duplicate search krne phele hi break hojayge 

        // for(int i=0,j=i+1;i<sz,j<sz;i++,j++){
        //      if(nums[i]==nums[j]){
        //         isDuplicate=true;
        //         break;
        //     }else{
        //         isDuplicate=false;
        //         break;
        //     }
        // } 

        for(int i=0;i<sz-1;i++){
             if(nums[i]==nums[i+1]){
                isDuplicate=true;
                break;
            }
        }

        cout<<isDuplicate<<endl;

    return 0;
}