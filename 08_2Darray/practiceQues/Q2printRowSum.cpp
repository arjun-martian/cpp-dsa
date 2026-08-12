#include<iostream>
#include<vector>
using namespace std;

void printsumofrow(vector<vector<int>>& num){
    int n=num.size();
    int m=num[0].size();
    int sum=0;
    
    //SQUARE MATRIX
    for(int r=0;r<n;r++){
      for(int c=0;c<n;c++){
        if(r==1) sum+=num[r][c];
      }
    }    

   cout<<sum<<endl;
}

int main(){
    vector<vector<int>> num={{1,4,9},{11,4,3},{2,2,3}};

    printsumofrow(num);

}