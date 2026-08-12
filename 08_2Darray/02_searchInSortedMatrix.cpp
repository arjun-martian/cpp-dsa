#include<iostream>
#include<vector>
using namespace std;

//BRUTE FORCE APPROACH
// void searchInSortedMatrix(vector<vector<int>>& mat,int n,int k){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(mat[i][j]==k){
//                 cout<<i<<" "<<j<<endl;
//             }
//         }
//     }
// }

//BINARY SEARCH
// bool searchInSortedMatrix(vector<vector<int>>& mat,int n,int key){

//    for(int row=0;row<n;row++){
//         int start=0;
//         int end=n-1;
//         while(start<=end){
//             int mid=start+(end-start)/2;
//             if(mat[row][mid]==key) return true;
//             else if(mat[row][mid]<key) start=mid+1;
//             else end=mid-1;
//         }
//    }
//     return false;
// }

//STAIRCASE METHOD 
bool searchInSortedMatrix(vector<vector<int>>& mat,int n,int key){

    //TIME COMPLEXITY : O(n+m)
    int row=0;
    int col=n-1;

    while(row<n && col>=0){
        if(mat[row][col]==key) return true;
        else if(mat[row][col]>key) col--; //move left 
        else row++; //move down 
    }
    return false;
}

int main(){
   vector<vector<int>> mat={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
   int key=39;

   bool element = searchInSortedMatrix(mat,4,key);

   if(element==true) cout<<"Found"<<endl;
   else cout<<"Not Found"<<endl;

   return 0;
}