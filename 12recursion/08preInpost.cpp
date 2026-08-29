#include<iostream>
using namespace std;

void preInpost(int n){
     if(n==0) return;
     cout<<"Post"<<n<<endl;
     preInpost(n-1);
     cout<<"In"<<n<<endl;
     preInpost(n-1);
     cout<<"Post"<<n<<endl;
     return;

}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

   preInpost(n);

    return 0;
}