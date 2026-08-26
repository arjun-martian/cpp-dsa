#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    //     vector<vector<int>> triangle;

    //     for(int i=0;i<numRows;i++){
    //         for(int j=0;j<=i;j++){
    //             if(j==0 || i==j) triangle[i][j]=1;
    //             triangle[i][j]=triangle[i-1][j-1]+triangle[i-1][j];
    //         }
    //     }
    // return triangle;


    if(numRows==0) return {};
    if(numRows==1) return {{1}};

    vector<vector<int>> prevRows=generate(numRows-1);
    vector<int> nextRows(numRows,1);

    for(int i=1;i<numRows-1;i++){
        nextRows[i]=prevRows.back()[i-1]+prevRows.back()[i];
    }

    prevRows.push_back(nextRows);
    return prevRows;
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    vector<vector<int>> t=generate(n);
    int r=t.size();
    
    for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++){
               cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}