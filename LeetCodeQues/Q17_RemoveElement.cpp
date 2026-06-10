#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {3,2,2,3};
    int size = nums.size();
    int val = 3;

    for(int i=0;i<size;i++){
        if(nums[i]==val){
            nums.erase(nums.begin()+i);
            size--;
            i--;
        }
    }
    
    for(int i=0;i<size;i++){
        cout<<nums[i]<<" ";
    }
    cout<<"\n";
    cout<<size<<endl;

}