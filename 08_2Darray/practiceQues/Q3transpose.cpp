#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<int>>& n){
    int r=n.size();
    int c=n[0].size();

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<n[i][j]<<" ";
        }
      cout<<endl;
    }
}

void transposeMatrix(vector<vector<int>>& num){
    int r=num.size();
    int c=num[0].size();

    vector<vector<int>> n;

    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            n[col][row]=num[row][col];
        }
    }
    print(n);
}

int main(){
    vector<vector<int>> num={{11,12,13},{15,18,20}};

    transposeMatrix(num);
}