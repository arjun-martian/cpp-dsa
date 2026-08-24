#include<iostream>
using namespace std;

void printDecreasing_Increasing(int n){
     if(n==0) return;
     cout<<n<<endl;
     printDecreasing_Increasing(n-1);
     cout<<n<<endl;
     return;

}

int main(){
    int n;
    cout<<"ENTER THE NUMBER: ";
    cin>>n;
    printDecreasing_Increasing(n);

    return 0;
}