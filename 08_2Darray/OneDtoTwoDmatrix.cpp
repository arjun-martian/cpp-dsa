#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    int size=original.size();
    if(m*n != size) return {};

    vector<vector<int>> num(m,vector<int>(n));

    for(int i=0;i<size;i++){
        num[i/n][i%n]=original[i];
    }

    return num;
}

int main(){
    vector<int> original={1,2,3,4};
    int m=2;
    int n=2;
    
    vector<vector<int>> nums=construct2DArray(original,m,n);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}