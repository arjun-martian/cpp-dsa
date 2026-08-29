#include<iostream>
using namespace std;

int towerOfhanoi(int n,int x){
   if(n==1) return 1;
   return x*towerOfhanoi(n-1,x)+1;

}

int main(){
    int n;
    cout<<"Enter the number of discs: ";
    cin>>n;

   int m=towerOfhanoi(n,2);

   cout<<m<<endl;

    return 0;
}