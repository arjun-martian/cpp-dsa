#include<iostream>
using namespace std;

void searchInSortedMatrix(int mat[][4],int n,int k){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==k){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}

int main(){
   int mat[4][4]={{10,20,30,40,},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
   int key=39;

   searchInSortedMatrix(mat,4,key);
}