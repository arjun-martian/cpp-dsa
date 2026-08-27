#include<iostream>
using namespace std;

int ways(int n){
    if(n<=3) return n;
    return ways(n-1)+ways(n-2)+ways(n-3);
}

int main(){
    int n;
    cout<<"Enter the number of stairs:";
    cin>>n;

    cout<<"No of ways to climb the "<<n<<" are "<<ways(n)<<endl;;


    return 0;
}