#include<iostream>
using namespace std;

// void print1toN(int n){
//     // METHOD 1
//     if(n==0) return;
//     print1toN(n-1);
//     cout<<n<<endl;
//     return;

// }

void print1toN(int x,int n){
    // METHOD 2
    if(x>n) return;
    cout<<x<<endl;
    print1toN(x+1,n);
    return;

}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
     
    //METHOD 1
    // print1toN(n);
    
    //METHOD 2
    print1toN(1,n);

    return 0;
}