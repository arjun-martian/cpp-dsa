#include<iostream>
#include<vector>
using namespace std;

void frequencyofNum(vector<vector<int>>& num,int key){
    int n=num.size();
    int m=num[0].size();
    int count=0;
    
    for(int r=0;r<n;r++){
        for(int c=0;c<m;c++){
            if(num[r][c]==key){
              count+=1;
            }
        }
    }
    cout<<count<<endl;
}

int main(){
    vector<vector<int>> num={{4,8,7},{8,8,7}};
    int key=7;

    frequencyofNum(num,key);

}