#include<iostream>
using namespace std;

int numbersofWays(int s){
    if(s==1) return 1;
    if(s==2) return 2;

    return numbersofWays(s-1)+numbersofWays(s-2);
}

int main(){
    int n;
    cout<<"Enter the number stairs: ";
    cin>>n;

    cout<<numbersofWays(n)<<endl;

    return 0;
}