#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num[8]={1,4,1,3,2,4,3,7};
    int n = sizeof(num)/sizeof(int);
    
    // O(nlogn)
    // sort(num,num+n); //ascending order
    sort(num,num+n,greater<int>()); //descending order
    
    for(int val:num){
        cout<<val<<endl;
    }
    return 0;

}