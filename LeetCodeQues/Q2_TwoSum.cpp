#include<iostream>
#include<vector>
using namespace std;
int main(){
    // TRY TO SOLVE FROM STUDIED YET(3 MARCH 2026)
    // BRUTE FORCE APPROACH
    vector<int> nums={3,3};
    int target=6;
    int sz=nums.size();
    int indx1,indx2;
         for(int i=0;i<sz;i++){
            for(int j=i+1;j<sz;j++){
                if((nums[i]+nums[j])==target){
                    indx1=i;
                    indx2=j;    
                    break;
                }else{
                    continue;
                }
            }
         }
         cout<<indx1<<","<<indx2<<endl;

    return 0;
}