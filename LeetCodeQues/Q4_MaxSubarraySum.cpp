#include<iostream>
using namespace std;
int main(){
    //BRUTE FORCE APPROACH
    // int n=7;
    // int arr[7]={3, -4, 5, 4, -1, 7, -8};
    // int maxSum=INT8_MIN;

    // for(int st=0;st<n;st++){
    //     int Currsum=0;
    //     for(int end=st;end<n;end++){
    //         Currsum+=arr[end];
    //         maxSum=max(Currsum,maxSum);
    //     }
    // }
    
    // cout<<"Value of maximum Subarray: "<<maxSum<<endl;

   //KADANE'S ALGORITHM (OPTIMISED APPROACH)
   int n=7;
    int arr[7]={3, -4, 5, 4, -1, 7, -8};
    int Currsum=0;
    int maxSum=INT8_MIN;

    for(int val:arr){
            Currsum+=val;
            maxSum=max(Currsum,maxSum);
            if(Currsum<0){
                Currsum=0;
            }
        }
    
    cout<<"Value of maximum sum Subarray: "<<maxSum<<endl;



    return 0;
}