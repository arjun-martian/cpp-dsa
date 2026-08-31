#include<iostream>
#include<vector>
using namespace std;

bool arrIsSortedOrNot(vector<int>& num, int n){

    if(n==0) cout<<true<<endl;
    if(num[n-1]<num[n]){
     arrIsSortedOrNot(num,n-1);
    } 
   cout<<false<<endl;
}

int main(){
   vector<int> num={1,2,3,4,5};
   int n=num.size();

   arrIsSortedOrNot(num,n-1);


    return 0;
}